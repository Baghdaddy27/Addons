class CfgPatches
{
	class Ammo_308_AP
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Pistols","DZ_Weapons_Ammunition"};
		magazines[] = {"Ammo_308_AP"};
		ammo[] = {"Bullet_308_AP"};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_308_AP: Ammunition_Base
	{
		scope = 2;
		displayName = ".308 AP Rounds";
		descriptionShort = "20 .308 Armor Piercing Rounds.";
		model = "\dz\weapons\ammunition\308Win_LooseRounds.p3d";
		iconCartridge = 1;
		rotationFlags = 34;
		weight = 20;
		count = 100;
		ammo = "Bullet_308_AP";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"sample_ammo_stacking\ap_ammo\308_AP\308AP_loose_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\attachments\magazine\data\shockpistol_battery.rvmat"}},{0.7,{"DZ\weapons\attachments\magazine\data\shockpistol_battery.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\shockpistol_battery.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\shockpistol_battery.rvmat"}},{0,{"DZ\weapons\attachments\magazine\data\shockpistol_battery.rvmat"}}};
				};
			};
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_308_AP
	{
		name = "Bullet_308_AP";
	};
};
class cfgAmmo
{
	class Bullet_Base;
	class Bullet_308_AP: Bullet_Base
	{
		scope = 2;
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		spawnPileType = "Ammo_308_AP";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 880;
		typicalSpeed = 1200;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.01;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.9,1}};
			class Health
			{
				damage = 210;
			};
			class Blood
			{
				damage = 160;
			};
			class Shock
			{
				damage = 180;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
};
