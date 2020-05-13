_coorda = _this select 0;
_elevation = parsenumber(_this select 1);
_azimut = _this select 2;
_Rayon = parsenumber(_this select 3);
_TypeEnnemi = MissionTirTypeEnnemi;
_TypeTir = MissionTirTypeTir;
_DesQuePossible = DesQuePossible;
_HeureHa = _this select 7;
_Duree = parsenumber(_this select 8);
_arty = _this select 9;

MissionTir_Message_index = 0;

_ListeETA = [14,13.9,13.8,13.6,13.3,12.9,12.4,11.6,27,26.9,26.8,26.8,26.7,26.6,26.5,26.4,26.2,26.1,26,25.8,25.7,25.5,25.3,25.1,24.8,24.6,24.3,23.9,23.1,22.6,21.9,21,36.8,35.7,35.6,35.5,35.4,35.2,35.1,35,34.8,34.7,34.5,34.3,34.2,34,33.8,33.6,33.3,33.1,32.8,32.6,32.3,31.9,31.6,31.2,30.8,30.3,29.7,29,27.9];

_texteHeureH =" dès que possible ";
if (_DesQuePossible) then {_texteHeureH = (" dès que possible ")} else {_texteHeureH = (" à " + _HeureHa + "h ");};

switch (_TypeTir) do {
    case "Destruction": {missionTir_ronde = "8Rnd_82mm_Mo_shells"; missionTir_interval = 2};
    case "Suppression": {missionTir_ronde = "8Rnd_82mm_Mo_shells"; missionTir_interval = 10};
    case "Neutralisation": {missionTir_ronde = "8Rnd_82mm_Mo_shells"; missionTir_interval = 10};
	case "Flare": {missionTir_ronde = "8Rnd_82mm_Mo_Flare_white"; missionTir_interval = 2};
	case "Smoke": {missionTir_ronde = "8Rnd_82mm_Mo_Smoke_white"; missionTir_interval = 2};
	case default {missionTir_ronde = "8Rnd_82mm_Mo_shells"; missionTir_interval = 2};
};

_ronde = missionTir_ronde;
_interval = missionTir_interval;

if (((count _coorda) == 8) &&((count _HeureHa) == 4)) then {
	_coord_x = (parsenumber((_coorda select [0,4]) + "0"));
	_coord_y = (parsenumber((_coorda select [4,4]) + "0"));

	_coord = [_coord_x,_coord_y,_elevation];
	_coord = (ASLtoAGL _coord);
	_HeureH = ((parsenumber(_HeureHa select [0,2])) + ((parsenumber(_HeureHa select [2,2]))/60));
	if ((_coord distance _arty < 3100) && (_coord distance _arty > 50)) then {
	
		//Texte radio
		
		//player sidechat ((groupID group MissionTir_arty) + ", ici " + (str(group player)) + ", Mission de tir. Coordonnée: " + _coorda + ". Élévation: " + str(_elevation) + ". Azimut: " + _azimut + ". " + _TypeEnnemi + " dans un rayon de " + str(_rayon) + "m. Tir de " + _TypeTir + _texteHeureH + "pour " + str(_duree) + " secondes, à vous.");
		//_joueur = (call(compile(str(player))));
		_joueur = player;
		[(_joueur),((groupID group MissionTir_arty) + ", ici " + (str(group _joueur)) + ", Mission de tir. Coordonnée: " + _coorda + ". Élévation: " + str(_elevation) + ". Azimut: " + _azimut + ". " + _TypeEnnemi + " dans un rayon de " + str(_rayon) + "m. Tir de " + _TypeTir + _texteHeureH + "pour " + str(_duree) + " secondes, à vous.")]remoteExec["sidechat",0,true];
		
		Missiontir_tirer = {
			_arty = _this select 7;
			{
				[_this,_x] spawn {
					_var = _this select 0;
					
					_DesQuePossible = _var select 0;
					_coord = _var select 1;
					_listeETA = _var select 2;
					_heureH = _var select 3;
					_typetir = _var select 4;
					_rayon = _var select 5;
					_duree = _var select 6;
					_instance = _this select 1;
					_arty = _var select 7;
					_ronde = _var select 8;
					_interval = _var select 9;
					
					//Déterminer l'heure à laquelle il doit comment à tirer
					_distArtyCoord = _instance distance _coord;
					_ETA = (((_ListeETA select ((round(((_distArtyCoord)/3100)*61))-1))/60)/60);
					_tempsTir = ((str( _heureH -  _ETA)) select [0,7]);
					

					//Déterminer si c'est dès que possible ou non
					if (!_desquepossible) then {
						_arty spawn {
						sleep 2;
						[_this,((str(group player)) + ", ici " + (groupID group MissionTir_arty) + ". reçu, à vous.")]remoteExec["sidechat",0,true];
						};
						waituntil { ((str daytime) select [0,7]) == _tempsTir};
					};
					
					//Déterminer s'il y a des rondes dans le mortier
					if (_ronde in (magazines vehicle _arty)) then {
						//composition du message
						MissionTir_Message_index = MissionTir_Message_index + 1; 
						if (MissionTir_Message_index == (count(units group _arty))) then {
							[_ETA,_arty] spawn {
								_ETA = _this select 0;
								_arty = _this select 1;
								//sleep 2;

								_joueur = player;
								[_arty,((str(group _joueur)) + ", ici " + (groupID group MissionTir_arty) + ". reçu, coup parti, " + str((_ETA)*60*60) + "secondes, à vous.")]remoteExec["sidechat",0,true];
							};
						};

						//Créer une zone trigger pour tirer aléatoire à l'intérieur de celui-ci
						_trg = createTrigger ["EmptyDetector", _coord];
						_trg setTriggerArea [_rayon, _rayon, 0, false,1];
						for "_i" from 1 to (_Duree / 2) do {
							_pos = (_trg call BIS_fnc_randomPosTrigger); //La fonction qui trouve les position en question
							_instance doArtilleryFire [_pos, _ronde, 1];
							sleep _interval;
						};
						deleteVehicle _trg;
					} else {
					
						// Ce qui se passe s'il n'y a pas assez de rondes dans le mortier
					
						MissionTir_Message_index = MissionTir_Message_index + 1;
						if (MissionTir_Message_index == (count(units group _arty))) then {
							_arty spawn {
								_arty = _this;
								sleep 2;
								//_arty sidechat ((str(group player)) + ", ici " + (groupID group MissionTir_arty) + ", tir impossible, munition insuffisante, Terminé.");
								_joueur = (call(compile(str(player))));
								[_joueur,((str(group player)) + ", ici " + (groupID group MissionTir_arty) + ", tir impossible, munition insuffisante, Terminé.")]remoteExec["sidechat",0,true];
							};
						};
					};
				};
			} foreach (units group _arty);
		};
		
		[_desquepossible,_coord,_ListeETA,_heureH,_typetir,_rayon,_duree,_arty,_ronde,_interval] remoteExec ["Missiontir_tirer",2];
	} else {hint "La coordonnée est soit trop près ou trop loin"};
} else {
	hint "utilisez une coordonée à 8 chiffres et une HeureH à 4 chiffres"
};


