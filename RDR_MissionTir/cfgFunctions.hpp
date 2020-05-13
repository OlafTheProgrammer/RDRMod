class RDR {
	class MissionTir
	{
		file = "RDR_MissionTir\functions"
		
		class MTPostInit {
			preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
			postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit", didJIP]
			preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded (config.cpp only)
			ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
			headerType = 0; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			recompile = 0; //1 to recompile the function upon mission start (config.cpp only; functions in description.ext are compiled upon mission start already)
		};
		class MissionTir {
			preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
			postInit = 0; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit", didJIP]
			preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded (config.cpp only)
			ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
			headerType = 0; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			recompile = 0; //1 to recompile the function upon mission start (config.cpp only; functions in description.ext are compiled upon mission start already)
		};
		class MortarFire {
			preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
			postInit = 0; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit", didJIP]
			preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded (config.cpp only)
			ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
			headerType = 0; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			recompile = 0; //1 to recompile the function upon mission start (config.cpp only; functions in description.ext are compiled upon mission start already)
		};
	};
};