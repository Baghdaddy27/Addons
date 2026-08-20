class CfgPatches
{
    class Firearms
    {
        units[] = {};
        weapons[] = {"Bags_PKM"};
        requiredVersion = 0.1;
        requiredAddons[] = 
        {
            "DZ_Data",
            "DZ_Weapons_Firearms",
            "DZ_Sounds_Weapons"
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Mode_Safe;

class CfgWeapons
{
    class Rifle_Base;
    
    // Inherit from base rifle and override settings for the PKM
    class Bags_PKM_Base: Rifle_Base
    {
        scope = 0; // Base class non-spawnable
        // Base PKM settings (model path, sound sets, etc.)
    };

    class Bags_PKM: Bags_PKM_Base
    {
        scope = 2; // Spawnable variant
        displayName = "PKM Machine Gun";
        descriptionShort = "Belt-fed general-purpose machine gun chambered in 7.62x54mmR.";
        model = "\dz\weapons\firearms\pkm\pkm.p3d"; // Example path to game's existing model
    };
};