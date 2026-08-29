class CfgPatches
{
	class sample_pistol
	{
		units[]={};
		weapons[]={"sample_pistol"};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class sample_pistol_Base: Pistol_Base
	{
		scope=0;
		displayName="Sample Pistol";
		descriptionShort="blah";
		model="sample_pistol\data\sample_pistol\data\sample_pistol.p3d";
		attachments[]=
		{
			"pistolOptics",
			"pistolMuzzle"
		};
		itemSize[]={3,2};
		weight=1000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,10,250,4,10};
		WeaponLength=0.20999999;
		ShoulderDistance=0.40000001;
		barrelArmor=1.5;
		chamberSize=1;
		chamberedRound="";
		hiddenSelections[] = {"zbytek"};
		magazines[]=
		{
			"Mag_Sample_Pistol_10rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,1.1,0.80000001};
		class NoiseShoot
		{
			strength=50;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Glock19_Shot_SoundSet",
				"Glock19_Tail_SoundSet",
				"Glock19_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Glock19_silencerPro_SoundSet",
					"Glock19_silencerTail_SoundSet",
					"Glock19_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.13;
			recoil="recoil_Glock";
			recoilProne="recoil_Glock_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		weaponStateAnim="dz\anims\anm\player\reloads\Glock\w_Glock19_states.anm";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"sample_pistol\data\sample_pistol\data\sample_pistol.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"sample_pistol\data\sample_pistol\data\sample_pistol.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"sample_pistol\data\sample_pistol\data\sample_pistol_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"sample_pistol\data\sample_pistol\data\sample_pistol_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"sample_pistol\data\sample_pistol\data\sample_pistol_destruct.rvmat"
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
					overrideParticle="weapon_shot_fnx_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=8;
				shotsToStartOverheating=8;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,1};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,1};
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
	class sample_pistol: sample_pistol_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"sample_pistol\data\sample_pistol\data\sample_pistol_co.paa"
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class Mag_Sample_Pistol_10rnd: Magazine_Base
	{
		scope = 2;
		displayName = "sample Pistol Magazine";
		descriptionShort = "Detachable box Magazine for Sample Pistol. Holds up to 10 rounds of .9x19mm ammo.";
		model = "sample_pistol\data\sample_pistol\data\sample_pistol_mag.p3d";
		weight = 200;
		itemSize[] = {2,2};
		count = 10;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"sample_pistol\data\sample_pistol\data\sample_pistol.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"sample_pistol\data\sample_pistol\data\sample_pistol.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"sample_pistol\data\sample_pistol\data\sample_pistol_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"sample_pistol\data\sample_pistol\data\sample_pistol_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"sample_pistol\data\sample_pistol\data\sample_pistol_destruct.rvmat"
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
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxysample_pistol_mag: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "sample_pistol\data\sample_pistol\data\sample_pistol_mag.p3d";
	};
};