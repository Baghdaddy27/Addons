class CfgPatches
{
	class BagsTacticalGear
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Characters_Tops",
            "DZ_Characters_Pants",
			"DZ_Characters_Backpacks",
            "DZ_Characters_Headgear",
		};
	};
};
class CfgMods
{
	class BagsGear
	{
		dir = "BagsTacticalGear";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Bags-Tactical-Gear";
		credits = "Baghdaddy27";
		author = "Baghdaddy27";
		authorID = "76561197977560525";
		version = "1.5";
		extra = 0;
		type = "mod";
		dependencies[] = {};
	};
};