class CfgPatches
{
	class Bags_AR9
	{
		units[]={};
		weapons[]={

			"Bags_AR9"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
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
	class Bags_AR9_Base: Rifle_Base
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
			"Ammo_9x19"
		};
		magazines[]=
		{
			"Mag_MP5_15Rnd",
			"Mag_MP5_30Rnd"
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
			strength=60;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto",
			"Burst",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_mp5";
			recoilProne="recoil_mp5_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot1st[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"MP5K_Shot_SoundSet",
				"MP5K_Shot_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			burst=3;
			reloadTime=0.064999998;
			recoil="recoil_mp5";
			recoilProne="recoil_mp5_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"MP5K_Shot_SoundSet",
				"MP5K_Shot_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.064999998;
			recoil="recoil_mp5";
			recoilProne="recoil_mp5_prone";
			dispersion=0.003;
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
	class Bags_AR9: Bags_AR9_Base
	{
		scope=2;
		displayName="AR9";
		descriptionShort="A custom AR15 chambered in 9x19. Can accept the MP5 magazines. An AR-15 style rifle is a lightweight semi-automatic rifle based on or similar to the Colt AR-15 design.";
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
	class Bags_AR9_Black: Bags_AR9
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
	class Bags_AR9_Green: Bags_AR9
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
	class Bags_AR9_Tan: Bags_AR9
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