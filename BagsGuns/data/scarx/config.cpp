class CfgPatches
{
	class SCARX
	{
		units[]={};
		weapons[]={

			"SCARX"
		
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
	class SCARX_Base: Rifle_Base
	{
		scope=0;
		weight=3500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		WeaponLength=0.80000001;
		ObstructionDistance=0.5;
		barrelArmor=2.4000001;
		initSpeedMultiplier=0.97500002;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		magazines[]=
		{
			"Mag_SCARX_30Rnd",
		};
		magazineSwitchTime=0.44999999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.3,2.3,0.89999998};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class NoiseShoot
		{
			strength=100;
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
				"AKM_Shot_1st_SoundSet",
				"AKM_Shot_1st_iterior_SoundSet",
				"AKM_Tail_SoundSet",
				"AKM_InteriorTail_SoundSet",
				"AKM_Slapback_SoundSet",
				"AKM_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AKM_1st_silencer_SoundSet",
					"AKM_silencerTail_SoundSet",
					"AKM_silencerInteriorTail_SoundSet"
				},
				
				{
					"AKM_1st_silencerHomeMade_SoundSet",
					"AKM_silencerHomeMadeTail_SoundSet",
					"AKM_silencerInteriorHomeMadeTail_SoundSet"
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
				"AKM_Shot_1st_SoundSet",
				"AKM_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"AKM_Shot_SoundSet",
				"AKM_Shot_iterior_SoundSet",
				"AKM_Tail_SoundSet",
				"AKM_InteriorTail_SoundSet",
				"AKM_Slapback_SoundSet",
				"AKM_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				{
					"AKM_1st_silencer_SoundSet"
				},
				
				{
					"AKM_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{				
				{
					"AKM_silencer_SoundSet",
					"AKM_silencerTail_SoundSet",
					"AKM_silencerInteriorTail_SoundSet"
				},
				
				{
					"AKM_silencerHomeMade_SoundSet",
					"AKM_silencerHomeMadeTail_SoundSet",
					"AKM_silencerInteriorHomeMadeTail_SoundSet"
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
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.050000001,0,0.02};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.050000001,0,-0.050000001};
				orientation[]={0,0,0};
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
					overrideParticle="weapon_shot_mosin9130_01";
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
				maxOverheatingValue=8;
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
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0.2,1};
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
		weaponStateAnim="dz\anims\anm\player\reloads\SCAR\w_SCAR_states.anm";
		class AnimationSources
		{
			class opticAttached
			{
				source="user";
				initPhase=0;
				animPeriod=0.30000001;
			};
		};
	};
	class SCARX: SCARX_Base
	{
		scope=2;
		displayName="SCAR-X";
		descriptionShort="A custom SCAR chambered in 7.62x39 WARSAW. The FN SCAR Combat Assault Rifle is a family of gas-operated short-stroke gas piston automatic rifles developed by Belgian manufacturer FN Herstal in 2004.";
		model="\DZ\weapons\firearms\SCARH\ScarH.p3d";
		attachments[]=
		{
			"weaponButtstockSCAR",
			"weaponWrap",
			"weaponOptics",
			"suppressorImpro",
			"Scarh_FrontSight",
			"weaponFlashlight"
		};
		itemSize[]={8,3};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\scarx\scarx_mat1_co.paa",
			"BagsGuns\data\scarx\scarl_mat2_co.paa",
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\scarh\data\scarh_mat1.rvmat",
			"dz\weapons\firearms\scarh\data\scarh_mat2.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1_damage.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1_damage.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1_destruct.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SCARX_Black: SCARX
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\weapons\firearms\SCARH\data\scarh_mat1_black_co.paa",
			"DZ\weapons\firearms\SCARH\data\scarh_mat2_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\firearms\SCARH\data\scarh_mat1_black.rvmat",
			"DZ\weapons\firearms\SCARH\data\scarh_mat2_black.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					RefTexsMats[]=
					{
						"dz\weapons\firearms\scarh\data\scarh_mat1.rvmat",
						"dz\weapons\firearms\scarh\data\scarh_mat2.rvmat"
					};
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1_black.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2_black.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1_black.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2_black.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1_black_damage.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2_black_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1_black_damage.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2_black_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1_black_destruct.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2_black_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SCARX_Tan: SCARX
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\scarh\data\scarh_mat1_co.paa",
			"dz\weapons\firearms\scarh\data\scarh_mat2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\scarh\data\scarh_mat1.rvmat",
			"dz\weapons\firearms\scarh\data\scarh_mat2.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1_damage.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1_damage.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\weapons\firearms\scarh\data\scarh_mat1_destruct.rvmat",
								"dz\weapons\firearms\scarh\data\scarh_mat2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};