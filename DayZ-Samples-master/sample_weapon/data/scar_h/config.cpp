
class CfgPatches
{
	class Sample_ScarH
	{
		units[] = {};
		weapons[] = {"Sample_ScarH"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines"};
		magazines[] = {"Mag_Sample_SCARH_30rnd"};
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
	class Sample_ScarH_Base: Rifle_Base
	{
		scope = 0;
		displayName = "SCAR-H";
		descriptionShort = "The SCAR series of rifles were manufactured to satisfy the requirements for the SCAR competition held by the United States Special Operations Command (USSOCOM). Fed from detachable magazines, chambered for .338";
		model = "sample_weapon\data\scar_h\data\scar_h.p3d";
		attachments[] = {"weaponOptics","weaponMuzzleM4"};
		itemSize[] = {8,3};
		weight = 3600;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {30.0,25.0};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		WeaponLength = 0.829067;
		chamberSize = 1;
		barrelArmor = 10.125;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_Sample_338"};
		magazines[] = {"Mag_Sample_SCARH_30rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		initSpeedMultiplier = 0.4;
		recoilModifier[] = {1.0,0.9,1.0};
		swayModifier[] = {1.4,1.4,0.8};
		simpleHiddenSelections[] = {"hide_barrel","folding_raised","folding_lowered"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"sample_weapon\data\scar_h\data\scar_h_co.paa"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Sample_ScarH_Shot_SoundSet","Sample_ScarH_Shot_SoundSet","Sample_ScarH_Shot_SoundSet"};
			soundSetShotExt[] = {{"Sample_ScarH_SilencedShot_SoundSet","Sample_ScarH_SilencedShot_SoundSet","Sample_ScarH_SilencedShot_SoundSet"}};
			reloadTime = 0.11;
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Sample_ScarH_Shot_SoundSet","Sample_ScarH_Shot_SoundSet","Sample_ScarH_Shot_SoundSet"};
			soundSetShotExt[] = {{"Sample_ScarH_SilencedShot_SoundSet","Sample_ScarH_SilencedShot_SoundSet","Sample_ScarH_SilencedShot_SoundSet"}};
			reloadTime = 0.075;
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 40;
				shotsToStartOverheating = 5;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.8};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.8,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800;
					healthLevels[] = {{1.0,{"sample_weapon\data\scar_h\data\scar_h.rvmat"}},{0.7,{"sample_weapon\data\scar_h\data\scar_h.rvmat"}},{0.5,{"sample_weapon\data\scar_h\data\scar_h_damage.rvmat"}},{0.3,{"sample_weapon\data\scar_h\data\scar_h_damage.rvmat"}},{0.0,{"sample_weapon\data\scar_h\data\scar_h_destruct.rvmat"}}};
				};
			};
		};
	};
	class Sample_ScarH: Sample_ScarH_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"sample_weapon\data\scar_h\data\scar_h_co.paa"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class Mag_Sample_SCARH_30rnd: Magazine_Base
	{
		scope = 2;
		displayName = "SCAR-H Magazine (extended)";
		descriptionShort = "Detachable box magazine for the FN SCAR-H. Holds up to 30 rounds of .338";
		model = "sample_weapon\data\scar_h\data\scar_h_mag.p3d";
		weight = 100;
		itemSize[] = {1,3};
		count = 30;
		ammo = "Bullet_Sample_338";
		ammoItems[] = {"Ammo_Sample_338"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800;
					healthLevels[] = {{1.0,{"sample_weapon\data\scar_h\data\scar_h.rvmat"}},{0.7,{"sample_weapon\data\scar_h\data\scar_h.rvmat"}},{0.5,{"sample_weapon\data\scar_h\data\scar_h_damage.rvmat"}},{0.3,{"sample_weapon\data\scar_h\data\scar_h_damage.rvmat"}},{0.0,{"sample_weapon\data\scar_h\data\scar_h_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyscar_h_mag: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "sample_weapon\data\scar_h\data\scar_h_mag.p3d";
	};
};
