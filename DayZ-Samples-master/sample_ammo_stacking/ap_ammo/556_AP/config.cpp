class CfgPatches
{
	class Ammo_556_AP
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Pistols","DZ_Weapons_Ammunition"};
		magazines[] = {"Ammo_556_AP"};
		ammo[] = {"Bullet_556_AP"};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_556_AP: Ammunition_Base
	{
		scope = 2;
		displayName = ".556 AP Rounds";
		descriptionShort = "20 .556 Armor Piercing Rounds.";
		model = "\dz\weapons\ammunition\556_LooseRounds.p3d";
		iconCartridge = 1;
		rotationFlags = 34;
		weight = 20;
		count = 20;
		ammo = "Bullet_556_AP";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"sample_ammo_stacking\ap_ammo\556_AP\556_ap_loose_co.paa"};
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
	class AType_Bullet_556_AP
	{
		name = "Bullet_556_AP";
	};
};
class cfgAmmo
{
	class Bullet_Base;
	class Bullet_556_AP: Bullet_Base
	{
		scope = 2;
		casing = "FxCartridge_556";
		round = "FxRound_556";
		spawnPileType = "Ammo_556_AP";
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 1000;
		typicalSpeed = 1500;
		airFriction = -0.10125;
		caliber = 1;
		deflecting = 10;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		nvgOnly = 1;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.004;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.9,1}};
			class Health
			{
				damage = 180;
			};
			class Blood
			{
				damage = 140;
			};
			class Shock
			{
				damage = 125;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
};
