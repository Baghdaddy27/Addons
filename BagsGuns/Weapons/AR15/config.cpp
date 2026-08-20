class CfgPatches
{
	class AR15
	{
		units[]=
		{
			"AR15",
            "Mag_AR15_10Rnd",
            "Mag_AR15_20Rnd",
            "Mag_AR15_30Rnd",
            "Mag_AR15_40Rnd",
            "AR15_Bttstck",
            "AR15_Hndgrd",
		};
		weapons[]={};
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
class Inventory_Base;

class cfgWeapons
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine;
    class Rifle_Base;
	class AR15_Base: Rifle_Base
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
			"Ammo_545x45",
			"Ammo_545x45Tracer"
		};
		magazines[]=
		{
			"Mag_AR15_10Rnd_Black",
			"Mag_AR15_20Rnd_Black",
			"Mag_AR15_30Rnd_Black",
			"Mag_AR15_40Rnd_Black"
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
			dispersion=0.0020000001;
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
	class AR15: AR15_Base
	{
		scope=2;
		displayName="AR15 545x39";
		descriptionShort="An AR15 chambered in 545x39.";
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
			""BagsGuns\Weapons\AR15\ar15_body_co.paa"
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

    //Magazines
    class Mag_AR15_10Rnd: Magazine_Base
	{
		scope=2;
		displayName="10 Round AR15 Magazine";
		descriptionShort="A 10 Round AR15 Magazine for 5.45x39";
		model="\DZ\weapons\attachments\magazine\magazine_pmag_10.p3d";
		weight=30;
		weightPerQuantityUnit=4;
		itemSize[]={1,2};
		count=10;
		ammo="Bullet_545x39";
		ammoItems[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\Weapons\AR15\ar15_mag_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\pmag_black.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\pmag_black.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\pmag_black_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\pmag_black_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\pmag_black_destruct.rvmat"
							}
						}
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
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class Mag_AR15_20Rnd: Magazine_Base
	{
		scope=2;
		displayName="20 Round AR15 Magazine";
		descriptionShort="A 20 Round AR15 Magazine for 5.45x39";
		model="\DZ\weapons\attachments\magazine\magazine_pmag_20.p3d";
		weight=60;
		weightPerQuantityUnit=4;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_545x39";
		ammoItems[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\Weapons\AR15\ar15_mag_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\pmag_black.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\pmag_black.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\pmag_black_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\pmag_black_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\pmag_black_destruct.rvmat"
							}
						}
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
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class Mag_AR15_30Rnd: Magazine_Base
	{
		scope=2;
		displayName="30 Round AR15 Magazine";
		descriptionShort="A 30 Round AR15 Magazine for 5.45x39";
		model="\DZ\weapons\attachments\magazine\magazine_pmag_30.p3d";
		weight=90;
		weightPerQuantityUnit=4;
		itemSize[]={1,3};
		count=30;
		ammo="Bullet_545x39";
		ammoItems[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\Weapons\AR15\ar15_mag_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\pmag_black.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\pmag_black.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\pmag_black_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\pmag_black_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\pmag_black_destruct.rvmat"
							}
						}
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
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class Mag_AR15_40Rnd: Magazine_Base
	{
		scope=2;
		displayName="40 Round AR15 Magazine";
		descriptionShort="A 30 Round AR15 Magazine for 5.45x39";
		model="\DZ\weapons\attachments\magazine\magazine_pmag_40.p3d";
		weight=100;
		weightPerQuantityUnit=4;
		itemSize[]={1,4};
		count=40;
		ammo="Bullet_545x39";
		ammoItems[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\Weapons\AR15\ar15_mag_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\pmag_black.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\pmag_black.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\pmag_black_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\pmag_black_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\pmag_black_destruct.rvmat"
							}
						}
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
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};

    // Buttstock
    class AR15_Bttstck: Inventory_Base
	{
		scope=2;
		displayName="AR15 Wooden Buttstock";
		descriptionShort="A wooden buttstock for AR15 style rifles.";
		model="\DZ\weapons\attachments\support\buttstock_m4_cqb.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponButtstockM4"
		};
		weight=450;
		itemSize[]={2,1};
		recoilModifier[]={0.69999999,0.69999999,0.69999999};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\Weapons\AR15\ar15_stock3_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\m4_stock3.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\m4_stock3.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\m4_stock3_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\m4_stock3_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\m4_stock3_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
	};

    //Hand Guard
	class AR15_Hndgrd: Inventory_Base
	{
		scope=2;
		displayName="AR15 Wooden Handguard";
		descriptionShort="A wood handguard for AR15 style rifles.";
		model="\DZ\weapons\attachments\support\handguard_m4_mp.p3d";
		rotationFlags=17;
		reversed=0;
		weight=350;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"weaponHandguardM4"
		};
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		swayModifier[]={0.5,0.5,0.5};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\Weapons\AR15\ar15_handguard_mp_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=220;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\m4_handguard_mp.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\m4_handguard_mp.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\m4_handguard_mp_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\m4_handguard_mp_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\m4_handguard_mp_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
		soundImpactType="plastic";
	};
};

