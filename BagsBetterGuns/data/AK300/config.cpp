class CfgPatches
{
	class Bags_AK300
	{
		units[]={};
		weapons[]={

			"Bags_AK300"
		};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines"};
		magazines[] = {"Mag_Bags_AK300_30rnd"};

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
	class Bags_AK300_Base: Rifle_Base
	{
		scope=0;
		weight=2140;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		ironsightsExcludingOptics[]=
		{
			"KashtanOptic",
			"GrozaOptic",
			"KobraOptic"
		};
		WeaponLength=0.89999998;
		ObstructionDistance=0.61199999;
		barrelArmor=4.4439998;
		initSpeedMultiplier=0.89999998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_Bags_65"
		};
		magazines[]=
		{
			"Mag_Bags_AK300_30Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,0.85000002};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		modes[]=
		{
			"SemiAuto"
		};
		class NoiseShoot
		{
			strength=80;
			type="shot";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Repeater_Shot_SoundSet",
				"Repeater_Shot_iterior_SoundSet",
				"Repeater_Tail_SoundSet",
				"Repeater_InteriorTail_SoundSet",
				"Repeater_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Repeater_silencerHomeMade_SoundSet",
					"Repeater_silencerHomeMadeTail_SoundSet",
					"Repeater_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
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
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
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
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.69999999};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.69999999,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.1,0,0};
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
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,0,0.1};
				orientation[]={0,45,0};
			};
			class Melee
			{
				position[]={0,0,-0.1};
				orientation[]={0,-45,0};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
	};
	class Bags_AK300: Bags_AK300_Base
	{
		scope=2;
		displayName="AK-300";
		descriptionShort="A custom AKM chambered in 300 Blackout. An AK-47 is a type of gas-operated, magazine-fed assault rifle originally designed in the Soviet Union by Mikhail Kalashnikov. The name stands for Avtomat Kalashnikova, 1947.";
		model="\dz\weapons\firearms\AKM\AKM.p3d";
		attachments[]=
		{
			"weaponButtstockAK",
			"WeaponHandguardAK",
			"weaponWrap",
			"weaponOpticsAK",
			"weaponFlashlight",
			"weaponMuzzleAK",
			"weaponBayonetAK"
		};
		itemSize[]={8,3};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AK300\ak300_nocolor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\AKM\data\AKM.rvmat"
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
								"BagsGuns\data\AK300\ak300.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"BagsGuns\data\AK300\ak300.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"BagsGuns\data\AK300\ak300_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"BagsGuns\data\AK300\ak300_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"BagsGuns\data\AK300\ak300_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Bags_AK300_Black: Bags_AK300
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AK300\ak300_black.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"BagsGuns\data\AK300\ak300.rvmat"
		};
	};
	class Bags_AK300_Green: Bags_AK300
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AK300\ak300_green.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"BagsGuns\data\AK300\ak300.rvmat"
		};
	};
	class Bags_AK300_Tan: Bags_AK300
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AK300\ak300_tan.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"BagsGuns\data\AK300\ak300.rvmat"
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class Mag_Bags_AK300_30Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_CfgMagazines_Mag_AKM_Palm30Rnd0";
		descriptionShort="$STR_CfgMagazines_Mag_AKM_Palm30Rnd1";
		model="\DZ\weapons\attachments\magazine\magazine_akm_palm30.p3d";
		weight=430;
		weightPerQuantityUnit=9;
		itemSize[]={1,3};
		count=30;
		ammo="Bullet_Bags_300";
		ammoItems[]=
		{
			"Ammo_Bags_300"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\akm_accessories_black_co.paa"
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
								"DZ\weapons\attachments\data\akm_accessories.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\akm_accessories.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\akm_accessories_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\akm_accessories_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\akm_accessories_destruct.rvmat"
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
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMag_Bags_AK300_30Rnd: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model="\DZ\weapons\attachments\magazine\magazine_val.p3d";
	};
};
