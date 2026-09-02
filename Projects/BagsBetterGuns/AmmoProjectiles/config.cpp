class CfgPatches
{
	class Ammo_Bags_Projectiles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons",
			"DZ_Weapons_Ammunition"
		};
		magazines[] = {"Ammo_Bags_65_Grendel","Ammo_Bags_300_Blackout","Ammo_Bags_40CAL"};
		ammo[] = {"Bullet_Bags_65_Grendel","Bullet_Bags_300_Blackout","Bullet_Bags_40CAL"};
	};
};
// BULLETS
class CfgAmmo
{
	// BULLET BASE
	class Bullet_Base;
	class Bullet_Bags_40CAL: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_9mm";
		round="FxRound_9mm";
		spawnPileType="Ammo_Bags_40CAL";
		hit=6;
		indirectHit=0;
        indirectHitRange=0;
        tracerScale=1;
        caliber=0.80000001;
        deflecting=30;
        initSpeed=305;
        typicalSpeed=335;
        airFriction=-0.00165;
        supersonicCrackNear[]={};
        supersonicCrackFar[]={};
        damageBarrel=177.0;
        damageBarrelDestroyed=177.0;
        weight=0.0116;
        impactBehaviour=0;
        hitAnimation=1;
        unconRefillModifier=6;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=40;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=40;
				damageOverride[]=
				{
					{0.89999998,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	class Bullet_Bags_65_Grendel: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_762x39";
		round="FxRound_762x39";
		spawnPileType="Ammo_Bags_65_Grendel";
		hit=8.354;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=760;
		typicalSpeed=760;
		airFriction=-0.00135;
		caliber=1;
		deflecting=10;
		damageBarrel=214.28572;
		damageBarrelDestroyed=214.28572;
		weight=0.00343;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=4;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			class Health
			{
				damage=112;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=112;
				damageOverride[]=
				{
					{0.80000001,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	class Bullet_Bags_300_Blackout: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_762x39";
		round="FxRound_762x39";
		spawnPileType="Ammo_Bags_300_Blackout";
		hit=8.354;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=760;
		typicalSpeed=760;
		airFriction=-0.00135;
		caliber=1;
		deflecting=10;
		damageBarrel=214.28572;
		damageBarrelDestroyed=214.28572;
		weight=0.00343;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=4;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			class Health
			{
				damage=112;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=112;
				damageOverride[]=
				{
					{0.80000001,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
};
class CfgVehicles
{
	class All;
	class Strategic;
	class ThingEffect;
	class FxCartridge: ThingEffect
	{
		model="\dz\weapons\projectiles\nabojnice_556.p3d";
		displayName="";
		submerged=0;
		submergeSpeed=0;
		timeToLive=5;
		disappearAtContact=1;
		airRotation=1.5;
	};
	class FxCartridge_Small: ThingEffect
	{
		model="\dz\weapons\projectiles\nabojnice_small.p3d";
		displayName="";
		submerged=0;
		submergeSpeed=0;
		timeToLive=5;
		disappearAtContact=1;
		airRotation=1.5;
	};
	class FxCartridge_9mm: FxCartridge_Small
	{
	};
	class FxCartridge_556: FxCartridge
	{
	};
	class FxCartridge_357: FxCartridge
	{
		model="\dz\weapons\projectiles\nabojnice_357.p3d";
	};
	class FxCartridge_762: FxCartridge
	{
		model="\dz\weapons\projectiles\nabojnice_762.p3d";
	};
	class FxCartridge_762x39: FxCartridge
	{
		model="\dz\weapons\projectiles\nabojnice_762x39.p3d";
	};
	class FxRound: FxCartridge
	{
		model="\dz\weapons\projectiles\556_SingleRound.p3d";
		displayName="";
		submerged=0;
		submergeSpeed=0;
		timeToLive=5;
		disappearAtContact=1;
		airRotation=1;
	};
	class FxRound_9mm: FxRound
	{
		model="\dz\weapons\projectiles\9mm_SingleRound.p3d";
	};
	class FxRound_45acp: FxRound
	{
		model="\dz\weapons\projectiles\45acp_SingleRound.p3d";
	};
	class FxRound_357: FxRound
	{
		model="\dz\weapons\projectiles\357_SingleRound.p3d";
	};
	class FxRound_556: FxRound
	{
		model="\dz\weapons\projectiles\556_SingleRound.p3d";
	};
	class FxRound_762: FxRound
	{
		model="\dz\weapons\projectiles\762_SingleRound.p3d";
	};
	class FxRound_762x39: FxRound
	{
		model="\dz\weapons\projectiles\762x39_SingleRound.p3d";
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_Bags_65_Grendel
	{
		name = "Bullet_Bags_65_Grendel";
	};
	class AType_Bullet_Bags_300_Blackout
	{
		name = "Bullet_Bags_300_Blackout";
	};
	class AType_Bullet_Bags_40CAL
	{
		name = "Bullet_Bags_40CAL";
	};
};