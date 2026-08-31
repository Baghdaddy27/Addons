class CfgPatches
{
	class Bags_AK45
	{
		units[]={};
		weapons[]={
		"Bags_AK45"
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
class CfgWeapons
{
	class Rifle_Base;
	class Bags_AK45_Base: Rifle_Base
	{
		scope=0;
		weight=3077;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		WeaponLength=0.94999999;
		ObstructionDistance=0.63499999;
		barrelArmor=1.806;
		initSpeedMultiplier=0.89999998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_45ACP"
		};
		magazines[]=
		{
			"Mag_UMP_25Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,0.85000002};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"magazine"
		};
		hiddenSelections[]=
		{
			"camo",
			"magazine"
		};
		class NoiseShoot
		{
			strength=60;
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
				"UMP45_Shot_1st_SoundSet",
				"UMP45_Shot_1st_iterior_SoundSet",
				"UMP45_Tail_SoundSet",
				"UMP45_InteriorTail_SoundSet",
				"UMP45_Slapback_SoundSet",
				"UMP45_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"UMP45_1st_silencer_SoundSet",
					"UMP45_silencerTail_SoundSet",
					"UMP45_silencerInteriorTail_SoundSet"
				},
				
				{
					"UMP45_1st_silencerHomeMade_SoundSet",
					"UMP45_silencerHomeMadeTail_SoundSet",
					"UMP45_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_auto_primary_7outof10";
			recoilProne="recoil_auto_primary_prone_7outof10";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"UMP45_Shot_1st_SoundSet",
				"UMP45_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"UMP45_Shot_SoundSet",
				"UMP45_Shot_iterior_SoundSet",
				"UMP45_Tail_SoundSet",
				"UMP45_InteriorTail_SoundSet",
				"UMP45_Slapback_SoundSet",
				"UMP45_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"UMP45_1st_silencer_SoundSet"
				},
				
				{
					"UMP45_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"UMP45_silencer_SoundSet",
					"UMP45_silencerTail_SoundSet",
					"UMP45_silencerInteriorTail_SoundSet"
				},
				
				{
					"UMP45_silencerHomeMade_SoundSet",
					"UMP45_silencerHomeMadeTail_SoundSet",
					"UMP45_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.097999997;
			recoil="recoil_auto_primary_7outof10";
			recoilProne="recoil_auto_primary_prone_7outof10";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,-0.015,-0.0099999998};
				orientation[]={0,-20,0};
			};
			class Melee
			{
				position[]={0,0,0};
				orientation[]={0,10,0};
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
					overrideParticle="weapon_shot_AK45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.1,0,0};
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
					onlyWithinOverheatLimits[]={0,0.69999999};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.69999999,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
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
		weaponStateAnim="dz\anims\anm\player\reloads\AK45\w_AK45_states.anm";
	};
	class Bags_AK45: Bags_AK45_Base
	{
		scope=2;
		displayName="AK-45";
		descriptionShort="A custom AK in .45 ACP. Can accept standard UMP45 magazines. Why chamber an AK in .45 ACP? Great question!";
		model="\dz\weapons\firearms\AK101\ak101.p3d";
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
			"dz\weapons\firearms\AK101\data\ak101_co.paa",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\AK101\data\ak101.rvmat",
			"DZ\weapons\attachments\magazine\data\magazine_ak74.rvmat"
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
								"DZ\weapons\firearms\AK45\Data\AK45.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\AK45\Data\AK45.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\AK45\Data\AK45_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\AK45\Data\AK45_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\AK45\Data\AK45_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Bags_AK45_Black: Bags_AK45
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.12,0.12,0.12,1.0,CO)"
		};
	};
	class Bags_AK45_Green: Bags_AK45
	{
		scope=2;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
};