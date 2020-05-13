class GUIMissionTir
{
	movingenable = 1;
	enablesimulation = 1;
	idd = 0;
	onunload = "control_MissionTir = [(ctrlText 1400),(ctrlText 1401),(ctrlText 1403),(ctrlText 1402),MissionTirTypeEnnemi,MissionTirTypeTir,DesQuePossible,(ctrlText 1405),(ctrlText 1404),(lbCurSel 2100)]";
	class controls
	{	
		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			moving = 1;

			x = 0.29375 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.433125 * safezoneW;
			h = 0.385 * safezoneH;
		};
		
		// ----------- Zone d'édition de texte ----------------
		class coord: RscEdit
		{
			idc = 1400;

			text = "00000000"; //--- ToDo: Localize;
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Elevation: RscEdit
		{
			idc = 1401;

			text = "100"; //--- ToDo: Localize;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Rayon: RscEdit
		{
			idc = 1402;

			text = "10"; //--- ToDo: Localize;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0185625 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Direction: RscEdit
		{
			idc = 1403;

			text = "6400"; //--- ToDo: Localize;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Temps: RscEdit
		{
			idc = 1404;

			text = "60"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class HeureH: RscEdit
		{
			idc = 1405;
			text = "0000"; //--- ToDo: Localize;
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		// --------- Texte fixe ---------
		class RscText_1000: RscText
		{
			idc = 1000;

			text = "G1, ici 11, mission de tir, à vous."; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.136125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;

			text = "Coord:"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;

			text = "Élévation:"; //--- ToDo: Localize;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0433125 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;

			text = "Direction de la cible par rapport à l'observateur:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.198 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class RscText_1004: RscText
		{
			idc = 1004;

			text = "Rayon:"; //--- ToDo: Localize;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1007: RscText
		{
			idc = 1005;

			text = "Type et durée du tir:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.198 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1008: RscText
		{
			idc = 1006;

			text = "Description de la cible:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.198 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class secondes: RscText
		{
			idc = 1007;

			text = "secondes"; //--- ToDo: Localize;
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1009: RscText
		{
			idc = 1007;

			text = "Pour"; //--- ToDo: Localize;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		
		
		
		
		// ------- Boutons --------
		class Infanterie: RscButton
		{
			idc = 1605;

			text = "Infanterie"; //--- ToDo: Localize;
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0680625 * safezoneW;
			h = 0.044 * safezoneH;
			action="MissionTirTypeEnnemi = ""Infanterie""; hint ""Infanterie sélectionné"";"
		};
		class Vehicule: RscButton
		{
			idc = 1606;

			text = "Véhicule"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0680625 * safezoneW;
			h = 0.044 * safezoneH;
			action="MissionTirTypeEnnemi = ""Vehicule""; hint ""Véhicule sélectionné"";"
		};
		class Destruction: RscButton
		{
			idc = 1600;

			text = "Destruction"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0680625 * safezoneW;
			h = 0.044 * safezoneH;
			action="MissionTirTypeTir = ""Destruction""; hint ""Tir de destruction sélectionné"";"
		};
		class Suppression: RscButton
		{
			idc = 1601;

			text = "Suppression"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0680625 * safezoneW;
			h = 0.044 * safezoneH;
			action="MissionTirTypeTir = ""Suppression""; hint ""Tir de Suppression sélectionné"";"
		};
		class Neutralisation: RscButton
		{
			idc = 1602;

			text = "Neutralisation"; //--- ToDo: Localize;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0680625 * safezoneW;
			h = 0.044 * safezoneH;
			action="MissionTirTypeTir = ""Neutralisation""; hint ""Tir de Neutralisation sélectionné"";"
		};
		class Flare: RscButton
		{
			idc = 1603;

			text = "Flare"; //--- ToDo: Localize;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0680625 * safezoneW;
			h = 0.044 * safezoneH;
			action="MissionTirTypeTir = ""Flare""; hint ""Tir de flare sélectionné"";"
		};
		class Smoke: RscButton
		{
			idc = 1604;

			text = "Smoke"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0680625 * safezoneW;
			h = 0.044 * safezoneH;
			action="MissionTirTypeTir = ""Smoke""; hint ""Tir de smoke sélectionné"";"
		};
		class DesQuePossible: RscButton
		{
			idc = 1604;

			text = "Dès que possible"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0680625 * safezoneW;
			h = 0.044 * safezoneH;
			action="DesQuePossible = true; hint ""Dès que possible sélectionné"";"
		};
		class HeureDesigne: RscButton
		{
			idc = 1604;

			text = "Heure désignée"; //--- ToDo: Localize;
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0680625 * safezoneW;
			h = 0.044 * safezoneH;
			action="DesQuePossible = false; hint ""Tirer à l'heure H"";"
		};
		class Envoyer: RscButton
		{
			idc = 1609;
			text = "Envoyer"; //--- ToDo: Localize;
			x = 0.603125 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.154 * safezoneH;
			action="[(ctrlText 1400),(ctrlText 1401),(ctrlText 1403),(ctrlText 1402),MissionTirTypeEnnemi,MissionTirTypeTir,DesQuePossible,(ctrlText 1405),(ctrlText 1404),MissionTir_arty] call RDR_fnc_MortarFire"
		};
		/*
		class Repeter: RscButton
		{
			idc = 1610;
			text = "Répéter"; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.088 * safezoneH;
		};
		*/
		
		//----------ComboBox------------
		class ChoixBatterie: RscCombo
		{
			idc = 2100;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.011 * safezoneH;
			
			onLBSelChanged="MissionTir_arty = missionNamespace getVariable [(lbText [2100, (lbCurSel 2100)]), objNull]; ctrlSetText [1000, ((groupID group MissionTir_arty)+"", ici "" + (str(group player)) + "", mission de tir, à vous."")] "
		};


	};
};









