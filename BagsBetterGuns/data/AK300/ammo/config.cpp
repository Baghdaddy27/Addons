class CfgPatches
{
	class Ammo_Bags_300
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Ammunition"};
		magazines[] = {"Ammo_Bags_300"};
		ammo[] = {"Bullet_Bags_300"};
	};
};
class cfgMagazines
{
	class Ammunition_Base;
	class Ammo_Bags_300: Ammunition_Base
	{
		scope = 2;
		displayName = ".338 Rounds";
		descriptionShort = ".338 Lapua Magnum cartridge. Used in select rifles.";
		model = "sample_weapon\data\ammo\338\data\Sample_338.p3d";
		weight = 60;
		count = 20;
		ammo = "Bullet_Bags_300";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"sample_weapon\data\ammo\338\data\Sample_338.rvmat"}},{0.7,{"sample_weapon\data\ammo\338\data\Sample_338.rvmat"}},{0.5,{"sample_weapon\data\ammo\338\data\Sample_338_damage.rvmat"}},{0.3,{"sample_weapon\data\ammo\338\data\Sample_338_damage.rvmat"}},{0.0,{"sample_weapon\data\ammo\338\data\Sample_338_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_Bags_300: Bullet_Base
	{
		scope = 2;
		cartridge = "FxCartridge_762";
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		spawnPileType = "Ammo_Bags_300";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 4;
		airLock = 1;
		initSpeed = 900;
		typicalSpeed = 900;
		airFriction = -0.00066;
		caliber = 1.5;
		deflecting = 20;
		damageBarrel = 0;
		damageBarrelDestroyed = 0;
		weight = 0.0162;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 147;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 125;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_Bags_300
	{
		name = "Bullet_Bags_300";
	};
};
