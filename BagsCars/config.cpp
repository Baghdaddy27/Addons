class CfgPatches
{
	class BagsCars
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Vehicles_Parts",
            "DZ_Vehicles_Wheeled"
		};
	};
};
class CfgMods
{
	class BagsVehicles
	{
		dir = "BagsCars";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Bags-Cars";
		credits = "Baghdaddy27";
		author = "Baghdaddy27";
		authorID = "76561197977560525";
		version = "1.5";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"BagsCars\scripts\4_world"};
			};
		};
	};
};