class CfgPatches
{
	class Bags_AR300
	{
		units[]={};
		weapons[]={

			"Bags_AR300"
			
		};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Bags_AR300_Base: Rifle_Base
	{
		scope=0;
		weight=2276;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic"
		};
		WeaponLength=0.77999997;
		ObstructionDistance=0.52600002;
		ShoulderDistance=0.050000001;
		barrelArmor=2.5;
		initSpeedMultiplier=0.89999998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Bags_Ammo_300BK"
		};
		magazines[]=
		{
			"Bags_Mag_AR300_30Rnd"
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
				"FAL_Shot_1st_SoundSet",
				"FAL_Shot_1st_iterior_SoundSet",
				"FAL_Tail_SoundSet",
				"FAL_InteriorTail_SoundSet",
				"FAL_Slapback_SoundSet",
				"FAL_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FAL_1st_silencerHomeMade_SoundSet",
					"FAL_silencerHomeMadeTail_SoundSet",
					"FAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"FAL_Shot_1st_SoundSet",
				"FAL_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"FAL_Shot_SoundSet",
				"FAL_Shot_iterior_SoundSet",
				"FAL_Tail_SoundSet",
				"FAL_InteriorTail_SoundSet",
				"FAL_Slapback_SoundSet",
				"FAL_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"FAL_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"FAL_silencerHomeMade_SoundSet",
					"FAL_silencerHomeMadeTail_SoundSet",
					"FAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.097999997;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
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
				position[]={-0.1,0,0.029999999};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.1,0,-0.039999999};
				orientation[]={0,0,0};
			};
		};
	};
	class Bags_AR300: Bags_AR300_Base
	{
		scope=2;
		displayName="AR15-300";
		descriptionShort="A custom AR15 chambered in .300 Blackout. An AR-15 style rifle is a lightweight semi-automatic rifle based on or similar to the Colt AR-15 design.";
		model="\dz\weapons\firearms\m4\m4a1.p3d";
		attachments[]=
		{
			"weaponButtstockM4",
			"WeaponHandguardM4",
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleM4",
			"weaponBayonet"
		};
		itemSize[]={8,3};
		spawnDamageRange[]={0,0.60000002};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AR10\ar10_black_co.paa"
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
						
						{
							1,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"
							}
						}
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
					positionOffset[]={0.0099999998,0,0};
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
				overheatingDecayInterval=0.69999999;
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
					onlyWithinOverheatLimits[]={0.5,0.69999999};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.69999999,1};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.34999999,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
	class Bags_AR300_Green: Bags_AR300
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AR10\ar10_green_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\m4\data\m4_body.rvmat"
		};
	};
	class Bags_AR300_Tan: Bags_AR300
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AR10\ar10_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\m4\data\m4_body.rvmat"
		};
	};
};
