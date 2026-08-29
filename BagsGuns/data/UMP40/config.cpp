class CfgPatches
{
	class Bags_UMP40
	{
		units[]={};
		weapons[]=
		{
			"Bags_UMP40"
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
	class Bags_UMP40_Base: Rifle_Base
	{
		scope=0;
		weight=2500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic"
		};
		WeaponLength=0.66352999;
		ObstructionDistance=0.46399999;
		barrelArmor=0.89999998;
		initSpeedMultiplier=1.05;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Bags_Ammo_40CAL"
		};
		magazines[]=
		{
			"Bags_Mag_UMP40_30Rnd",
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
				"PP19_Shot_1st_SoundSet",
				"PP19_Shot_1st_iterior_SoundSet",
				"PP19_Tail_SoundSet",
				"PP19_InteriorTail_SoundSet",
				"PP19_Slapback_SoundSet",
				"PP19_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"PP19_1st_silencer_SoundSet",
					"PP19_silencerTail_SoundSet",
					"PP19_silencerInteriorTail_SoundSet"
				},
				
				{
					"PP19_1st_silencerHomeMade_SoundSet",
					"PP19_silencerHomeMadeTail_SoundSet",
					"PP19_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"PP19_Shot_1st_SoundSet",
				"PP19_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"PP19_Shot_SoundSet",
				"PP19_Shot_iterior_SoundSet",
				"PP19_Tail_SoundSet",
				"PP19_InteriorTail_SoundSet",
				"PP19_Slapback_SoundSet",
				"PP19_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"PP19_1st_silencer_SoundSet"
				},
				
				{
					"PP19_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"PP19_silencer_SoundSet",
					"PP19_silencerTail_SoundSet",
					"PP19_silencerInteriorTail_SoundSet"
				},
				
				{
					"PP19_silencerHomeMade_SoundSet",
					"PP19_silencerHomeMadeTail_SoundSet",
					"PP19_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.097999997;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};		
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.1,0.0099999998,0};
				orientation[]={0,-8,0};
			};
			class Melee
			{
				position[]={-0.1,0.0099999998,-0.050000001};
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
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
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
				maxOverheatingValue=10;
				shotsToStartOverheating=2;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0.1,0.60000002};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.60000002,1};
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
		weaponStateAnim="dz\anims\anm\player\reloads\UMP45\w_UMP45_states.anm";
	};	
	class Bags_UMP40: Bags_UMP40_Base
	{
		scope=2;
		displayName="UMP-40";
		descriptionShort="A UMP chambered in .40 S&W. The Heckler & Koch UMP is a submachine gun developed and manufactured by Heckler & Koch. Heckler & Koch developed the UMP as a lighter and cheaper successor to the MP5.";
		model="\dz\weapons\firearms\UMP45\ump.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"pistolMuzzle"
		};
		itemSize[]={6,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\UMP45\data\ump45_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
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
								"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Bags_UMP40_Green: Bags_UMP40_Base
	{
		scope=2;
		displayName="UMP-40";
		descriptionShort="A UMP chambered in .40 S&W. The Heckler & Koch UMP is a submachine gun developed and manufactured by Heckler & Koch. Heckler & Koch developed the UMP as a lighter and cheaper successor to the MP5.";
		model="\dz\weapons\firearms\UMP45\ump.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"pistolMuzzle"
		};
		itemSize[]={6,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\UMP9mm\ump_green_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
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
								"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Bags_UMP40_Tan: Bags_UMP40_Base
	{
		scope=2;
		displayName="UMP-40";
		descriptionShort="A UMP chambered in .40 S&W. The Heckler & Koch UMP is a submachine gun developed and manufactured by Heckler & Koch. Heckler & Koch developed the UMP as a lighter and cheaper successor to the MP5.";
		model="\dz\weapons\firearms\UMP45\ump.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"pistolMuzzle"
		};
		itemSize[]={6,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\UMP9mm\ump_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
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
								"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
