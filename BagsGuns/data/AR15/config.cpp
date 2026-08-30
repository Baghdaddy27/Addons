class CfgPatches
{
	class Bags_AR15
	{
		units[]={};
		weapons[]={

			"Bags_AR15"
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
	class Bags_AR15_Base: Rifle_Base
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
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		magazines[]=
		{
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green"
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
				"Famas_Shot_1st_SoundSet",
				"Famas_Shot_1st_iterior_SoundSet",
				"Famas_Tail_SoundSet",
				"Famas_InteriorTail_SoundSet",
				"Famas_Slapback_SoundSet",
				"Famas_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Famas_1st_silencer_SoundSet",
					"Famas_silencerTail_SoundSet",
					"Famas_silencerInteriorTail_SoundSet"
				},
				
				{
					"Famas_1st_silencerHomeMade_SoundSet",
					"Famas_silencerHomeMadeTail_SoundSet",
					"Famas_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"Famas_Shot_1st_SoundSet",
				"Famas_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"Famas_Shot_SoundSet",
				"Famas_Shot_iterior_SoundSet",
				"Famas_Tail_SoundSet",
				"Famas_InteriorTail_SoundSet",
				"Famas_Slapback_SoundSet",
				"Famas_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"Famas_1st_silencer_SoundSet"
				},
				
				{
					"Famas_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"Famas_silencer_SoundSet",
					"Famas_silencerTail_SoundSet",
					"Famas_silencerInteriorTail_SoundSet"
				},
				
				{
					"Famas_silencerHomeMade_SoundSet",
					"Famas_silencerHomeMadeTail_SoundSet",
					"Famas_silencerInteriorHomeMadeTail_SoundSet"
				}
			};			
			reloadTime=0.064999998;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
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
	class Bags_AR15: Bags_AR15_Base
	{
		scope=2;
		displayName="AR15-545";
		descriptionShort="A custom AR15 chambered in 5.45x39. An AR-15 style rifle is a lightweight semi-automatic rifle based on or similar to the Colt AR-15 design.";
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
		hiddenSelectionsMaterials[]=
		{
			"BagsGuns\data\AR15\ar15_body.rvmat"
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
								"BagsGuns\data\AR15\ar15_body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"BagsGuns\data\AR15\ar15_body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"BagsGuns\data\AR15\ar15_body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"BagsGuns\data\AR15\ar15_body_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"BagsGuns\data\AR15\ar15_body_destruct.rvmat"
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
	class Bags_AR15_Black: Bags_AR15
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AR15\ar15_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"BagsGuns\data\AR15\ar15_body.rvmat"
		};
	};
	class Bags_AR15_Green: Bags_AR15
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\ar15\ar15_green_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"BagsGuns\data\AR15\ar15_body.rvmat"
		};
	};
	class Bags_AR15_Tan: Bags_AR15
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\ar15\ar15_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"BagsGuns\data\AR15\ar15_body.rvmat"
		};
	};
};