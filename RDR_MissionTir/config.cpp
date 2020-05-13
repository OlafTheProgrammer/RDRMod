class CfgPatches
{
	class RDR_MissionTir
	{
		// Meta information for editor
		name = "RDR_MissionTir";
		author = "Darkforever";
		url = "";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
		requiredVersion = 1.60; 
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = { "A3_Functions_F","RDR_Ressources" };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};
#include "GUIMissionTir.hpp"
class cfgFunctions
{
	#include "cfgFunctions.hpp"
}