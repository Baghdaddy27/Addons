class CfgPatches
{
	class BagsGuns
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Weapons"
		};
	};
};
class CfgMods
{
	class BagsM1025
	{
		dir = "BagsGuns";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Bags-Guns";
		credits = "Baghdaddy27";
		author = "Baghdaddy27";
		authorID = "76561197977560525";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {
			"World"
		};
		class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = { "BagsGuns/scripts/4_world" };
            };

        };
	};
};