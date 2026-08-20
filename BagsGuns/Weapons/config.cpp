class CfgPatches
{
    class Firearms
    {
        units[] = {};
        weapons[] = {"PKM"};
        requiredVersion = 0.1;
        requiredAddons[] = 
        {
            "DZ_Data",
            "DZ_Weapons_Firearms",
            "DZ_Sounds_Weapons"
        };
    };
};

class Mode_FullAuto;

class CfgWeapons
{
    class AKM_Base;
    class PKM: AKM_Base
    {
        scope = 2;
        displayName = "PKM";
        descriptionShort = "Its a PKM";
        model = "\dz\weapons\firearms\PKM\PKM.p3d";
        attachments[] = {};
        itemSize[] = {8, 3};
        hiddenSelectionsTextures[] = 
        {
            "dz\weapons\firearms\PKM\data\pkm_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "dz\weapons\firearms\PKM\data\pkm.rvmat"
        };
        class Particles
        {
            class OnFire
            {
                class SmokeCloud
                {
                    overrideParticle = "weapon_shot_winded_smoke";
                };
                class MuzzleFlash
                {
                    overrideParticle = "weapon_shot_akm_01";
                    ignoreIfSuppressed = 1;
                    illuminateWorld = 1;
                    positionOffset[] = {-0.050000001, 0, 0};
                };
                class ChamberSmoke
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "Nabojnicestart";
                    overrideDirectionPoint = "Nabojniceend";
                };
            };
            class OnOverheating
            {
                maxOverheatingValue = 12;
                shotsToStartOverheating = 4;
                overheatingDecayInterval = 0.69999999;
                class SmokingBarrel1
                {
                    overrideParticle = "smoking_barrel_small";
                    onlyWithinOverheatLimits[] = {0, 0.5};
                    positionOffset[] = {0.1, 0, 0};
                    onlyWithinRainLimits[] = {0, 0.2};
                };
                class SmokingBarrel2
                {
                    overrideParticle = "smoking_barrel";
                    onlyWithinOverheatLimits[] = {0.5, 0.69999999};
                    positionOffset[] = {0.1, 0, 0};
                    onlyWithinRainLimits[] = {0, 0.2};
                };
                class SmokingBarrel3
                {
                    overrideParticle = "smoking_barrel_heavy";
                    onlyWithinOverheatLimits[] = {0.69999999, 1};
                    positionOffset[] = {0.1, 0, 0};
                    onlyWithinRainLimits[] = {0, 0.2};
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle = "smoking_barrel_steam_small";
                    positionOffset[] = {0.1, 0, 0};
                    onlyWithinRainLimits[] = {0.2, 0.5};
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle = "smoking_barrel_steam";
                    positionOffset[] = {0.1, 0, 0};
                    onlyWithinRainLimits[] = {0.5, 1};
                };
                class OpenChamberSmoke
                {
                    onlyIfBoltIsOpen = 1;
                    overrideParticle = "smoking_barrel_small";
                    overridePoint = "Nabojnicestart";
                };
            };
            class OnBulletCasingEject
            {
                class ChamberSmokeRaise
                {
                    overrideParticle = "weapon_shot_chamber_smoke";
                    overridePoint = "Nabojnicestart";
                };
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] = 
                    {
                        {1, {"DZ\weapons\firearms\pkm\data\PKM.rvmat"}},
                        {0.69999999, {"DZ\weapons\firearms\pkm\data\PKM.rvmat"}},
                        {0.5, {"DZ\weapons\firearms\pkm\data\PKM_damage.rvmat"}},
                        {0.30000001, {"DZ\weapons\firearms\pkm\data\PKM_damage.rvmat"}},
                        {0, {"DZ\weapons\firearms\pkm\data\PKM_destruct.rvmat"}}
                    };
                };
            };
        };
    };
};

class CfgMagazines
{
    class Magazine_Base;
    class Mag_PKM_100Rnd: Magazine_Base
    {
        scope = 2;
        displayName = "PKM Magazine";
        descriptionShort = "100 Round 762x54 PKM Box Magazine ";
        model = "\DZ\weapons\attachments\magazine\magazine_ammobox_pkm.p3d";
        rotationFlags = 12;
        weight = 1100;
        weightPerQuantityUnit = 9;
        itemSize[] = {3, 3};
        count = 100;
        ammo = "Bullet_762x54";
        ammoItems[] = 
        {
            "Ammo_762x54",
            "Ammo_762x54Tracer"
        };
        tracersEvery = 0;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = 
        {
            "DZ\weapons\attachments\data\pkm_ammobox_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "dz\weapons\attachments\data\pkm_ammobox.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = 
                    {
                        {1, {"DZ\weapons\attachments\data\pkm_ammobox.rvmat"}},
                        {0.69999999, {"DZ\weapons\attachments\data\pkm_ammobox.rvmat"}},
                        {0.5, {"DZ\weapons\attachments\data\pkm_ammobox_damage.rvmat"}},
                        {0.30000001, {"DZ\weapons\attachments\data\pkm_ammobox_damage.rvmat"}},
                        {0, {"DZ\weapons\attachments\data\pkm_ammobox_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class MagRifle_fill_in
                {
                    soundSet = "MagRifle_fill_in_SoundSet";
                    id = 1;
                };
                class MagRifle_fill_loop
                {
                    soundSet = "MagRifle_fill_loop_SoundSet";
                    id = 2;
                };
                class MagRifle_fill_out
                {
                    soundSet = "MagRifle_fill_out_SoundSet";
                    id = 3;
                };
                class MagRifle_empty_in
                {
                    soundSet = "MagRifle_empty_in_SoundSet";
                    id = 4;
                };
                class MagRifle_empty_loop
                {
                    soundSet = "MagRifle_empty_loop_SoundSet";
                    id = 5;
                };
                class MagRifle_empty_out
                {
                    soundSet = "MagRifle_empty_out_SoundSet";
                    id = 6;
                };
                class MagPistol_fill_in
                {
                    soundSet = "MagPistol_fill_in_SoundSet";
                    id = 7;
                };
                class MagPistol_fill_loop
                {
                    soundSet = "MagPistol_fill_loop_SoundSet";
                    id = 8;
                };
                class MagPistol_fill_out
                {
                    soundSet = "MagPistol_fill_out_SoundSet";
                    id = 9;
                };
                class MagPistol_empty_in
                {
                    soundSet = "MagPistol_empty_in_SoundSet";
                    id = 10;
                };
                class MagPistol_empty_loop
                {
                    soundSet = "MagPistol_empty_loop_SoundSet";
                    id = 11;
                };
                class MagPistol_empty_out
                {
                    soundSet = "MagPistol_empty_out_SoundSet";
                    id = 12;
                };
            };
        };
    };
};