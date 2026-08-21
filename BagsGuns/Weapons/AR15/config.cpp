class CfgPatches
{
    class AR15
    {
        units[]=
        {
            "AR15"
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
			"DZ_Sounds_Weapons",
            "DZ_Weapons",
        };
    };
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;

class CfgWeapons
{
    class Rifle_Base;
    class AR15_Base: Rifle_Base
    {
        scope=0;
        weight=2276;
        absorbency=0;
        repairableWithKits[]={1};
        repairCosts[]={25};
        PPDOFProperties[]={1,0.6,50,200,4,10};
        ironsightsExcludingOptics[]=
        {
            "M4_CarryHandleOptic",
            "BUISOptic",
            "M68Optic",
            "M4_T3NRDSOptic",
            "ReflexOptic",
            "ACOGOptic"
        };
        WeaponLength=0.78;
        ObstructionDistance=0.526;
        ShoulderDistance=0.05;
        barrelArmor=2.5;
        initSpeedMultiplier=0.9;
        chamberSize=1;
        chamberedRound="";
        chamberableFrom[]=
        {
            "Ammo_545x39",
            "Ammo_545x39Tracer"
        };
        magazines[]=
        {
            "Mag_AR15_10Rnd",
            "Mag_AR15_20Rnd",
            "Mag_AR15_30Rnd",
            "Mag_AR15_40Rnd"
        };
        magazineSwitchTime=0.5;
        ejectType=1;
        recoilModifier[]={1,1,1};
        swayModifier[]={2,2,0.75};
        simpleHiddenSelections[]=
        {
            "hide_barrel"
        };
        hiddenSelections[]=
        {
            "camo"
        };
        class NoiseShoot
        {
            strength=80;
            type="shot";
        };
        modes[]=
        {
            "SemiAuto",
            "FullAuto"
        };
        class SemiAuto: Mode_SemiAuto
        {
            soundSetShot[]=
            {
				"M4A1_Shot_1st_SoundSet",
				"M4A1_Shot_1st_iterior_SoundSet",
				"M4A1_Tail_SoundSet",
				"M4A1_InteriorTail_SoundSet",
				"M4A1_Slapback_SoundSet",
				"M4A1_Tail_2D_SoundSet"
            };
            soundSetShotExt[]=
            {
                {
                    "M4A1_1st_silencer_SoundSet",
                    "M4A1_silencerTail_SoundSet",
                    "M4A1_silencerInteriorTail_SoundSet"
                },
                {
                    "M4A1_1st_silencerHomeMade_SoundSet",
                    "M4A1_silencerHomeMadeTail_SoundSet",
                    "M4A1_silencerInteriorHomeMadeTail_SoundSet"
                }
            };
            reloadTime=0.12;
            recoil="recoil_m4";
            recoilProne="recoil_m4_prone";
            dispersion=0.002;
            magazineSlot="magazine";
        };
        class FullAuto: Mode_FullAuto
        {
			soundSetShot1st[]=
			{
				"M4A1_Shot_1st_SoundSet",
				"M4A1_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"M4A1_Shot_SoundSet",
				"M4A1_Shot_iterior_SoundSet",
				"M4A1_Tail_SoundSet",
				"M4A1_InteriorTail_SoundSet",
				"M4A1_Slapback_SoundSet",
				"M4A1_Tail_2D_SoundSet"
			};
            soundSetShotExt1st[]=
            {
                {
                    "M4A1_1st_silencer_SoundSet"
                },
                {
                    "M4A1_1st_silencerHomeMade_SoundSet"
                }
            };
            soundSetShotExt[]=
            {
                {
                    "M4A1_silencer_SoundSet",
                    "M4A1_silencerTail_SoundSet",
                    "M4A1_silencerInteriorTail_SoundSet"
                },
                {
                    "M4A1_silencerHomeMade_SoundSet",
                    "M4A1_silencerHomeMadeTail_SoundSet",
                    "M4A1_silencerInteriorHomeMadeTail_SoundSet"
                }
            };
            reloadTime=0.065;
            recoil="recoil_m4";
            recoilProne="recoil_m4_prone";
            dispersion=0.002;
            magazineSlot="magazine";
        };
        class OpticsInfo: OpticsInfoRifle
        {
            memoryPointCamera="eye";
            discreteDistance[]={25};
            discreteDistanceInitIndex=0;
            modelOptics="-";
            distanceZoomMin=25;
            distanceZoomMax=25;
        };
        weaponStateAnim="dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[]={-0.1,0,0.03};
                orientation[]={0,0,0};
            };
            class Melee
            {
                position[]={-0.1,0,-0.04};
                orientation[]={0,0,0};
            };
        };
    };

    // AR15 Rifle
    class AR15: AR15_Base
    {
        scope=2;
        displayName="AR15 5.45x39";
        descriptionShort="An AR15 chambered in 5.45x39mm.";
        model="\dz\weapons\firearms\m4\m4a1.p3d";
        attachments[]=
        {
            "weaponButtstockM4",
            "weaponHandguardM4",
            "weaponWrap",
            "weaponOptics",
            "weaponFlashlight",
            "weaponMuzzleM4",
            "weaponBayonet"
        };
        itemSize[]={8,3};
        spawnDamageRange[]={0,0.6};
        hiddenSelectionsTextures[]=
        {
            "BagsGuns\Weapons\AR15\ar15_body_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "dz\weapons\firearms\m4\data\m4_body.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=200;
                    healthLevels[]=
                    {
                        {1, {"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},
                        {0.7, {"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},
                        {0.5, {"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},
                        {0.3, {"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},
                        {0, {"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"}}
                    };
                };
            };
        };
        class Particles
        {
            class OnFire
            {
                class SmokeCloud
                {
                    overrideParticle="weapon_shot_winded_smoke";
                };
                class MuzzleFlash
                {
                    overrideParticle="weapon_shot_ump45_01";
                    ignoreIfSuppressed=1;
                    illuminateWorld=1;
                    positionOffset[]={0,0,0};
                };
                class MuzzleFlashStar
                {
                    overrideParticle="weapon_shot_Flame_3D_4star";
                    ignoreIfSuppressed=1;
                    overrideDirectionVector[]={0,45,0};
                    positionOffset[]={0.01,0,0};
                };
                class ChamberSmoke
                {
                    overrideParticle="weapon_shot_chamber_smoke";
                    overridePoint="Nabojnicestart";
                    overrideDirectionPoint="Nabojniceend";
                };
            };
            class OnOverheating
            {
                maxOverheatingValue=12;
                shotsToStartOverheating=4;
                overheatingDecayInterval=0.7;
                class SmokingBarrel1
                {
                    overrideParticle="smoking_barrel_small";
                    onlyWithinOverheatLimits[]={0,0.5};
                    positionOffset[]={0.2,0,0};
                    onlyWithinRainLimits[]={0,0.2};
                };
                class SmokingBarrel2
                {
                    overrideParticle="smoking_barrel";
                    onlyWithinOverheatLimits[]={0.5,0.7};
                    positionOffset[]={0.2,0,0};
                    onlyWithinRainLimits[]={0,0.2};
                };
                class SmokingBarrel3
                {
                    overrideParticle="smoking_barrel_heavy";
                    onlyWithinOverheatLimits[]={0.7,1};
                    positionOffset[]={0.2,0,0};
                    onlyWithinRainLimits[]={0,0.2};
                };
                class SmokingBarrelHotSteamSmall
                {
                    overrideParticle="smoking_barrel_steam_small";
                    positionOffset[]={0.35,0,0};
                    onlyWithinRainLimits[]={0.2,0.5};
                };
                class SmokingBarrelHotSteam
                {
                    overrideParticle="smoking_barrel_steam";
                    positionOffset[]={0.5,1};
                };
                class OpenChamberSmoke
                {
                    onlyIfBoltIsOpen=1;
                    overrideParticle="smoking_barrel_small";
                    overridePoint="Nabojnicestart";
                };
            };
            class OnBulletCasingEject
            {
                class ChamberSmokeRaise
                {
                    overrideParticle="weapon_shot_chamber_smoke";
                    overridePoint="Nabojnicestart";
                };
            };
        };
    };
};