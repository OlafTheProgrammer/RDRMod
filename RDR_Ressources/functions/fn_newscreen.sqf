params ["_object","_images","_diapos"];

_object setobjecttexture [0, _images select (_diapos)];

removeallactions _object;

	
	_object addaction ["Page précédente", 
	{
		//recover data
		_data = _this select 3;
		_object = _data select 0;
		_images = _data select 1;
		_diapos = _data select 2;
		
	
		if (_diapos == 0) then {} else {[_object,_images,(_diapos - 1)] call RDR_fnc_newscreen;};
	
	
	
	
	},[_object,_images,_diapos],0];
	
	_object addaction ["Page suivante", {
	
		//recover data
		_data = _this select 3;
		_object = _data select 0;
		_images = _data select 1;
		_diapos = _data select 2;
	
		if (_diapos == ((count _images)-1)) then {} else {[_object,_images,(_diapos + 1)] call RDR_fnc_newscreen;};



	},[_object,_images,_diapos],1];
