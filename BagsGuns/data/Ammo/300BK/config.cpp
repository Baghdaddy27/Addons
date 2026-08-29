class CfgPatches
{
	class Bags_Ammo_300BK
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Ammunition"};
		magazines[] = {"Ammo_300BK"};
		ammo[] = {"Bullet_300BK"};
	};
};
class cfgMagazines
{
	class Ammunition_Base;
	class Ammo_300BK: Ammunition_Base
	{
		scope=2;
		displayName="300 Blackout Tracer";
		descriptionShort="The.300 AAC Blackout, also known as 7.62×35 mm, is an intermediate cartridge developed in the United States by Advanced Armament Corporation for use in the M4 carbine.";
		model="\dz\weapons\ammunition\357_looseRounds.p3d";
		iconCartridge=1;
		weight=8;
		count=20;
		ammo="Bullet_300BK";
		muzzleFlashParticle="weapon_shot_izh18_01";
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
								"DZ\weapons\ammunition\data\357mag_loose.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\357mag_loose.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\357mag_loose_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\357mag_loose_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\357mag_loose_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Ammo_300BKTracer: Ammunition_Base
	{
		scope=2;
		displayName="300 Blackout Tracer";
		descriptionShort="The.300 AAC Blackout, also known as 7.62×35 mm, is an intermediate cartridge developed in the United States by Advanced Armament Corporation for use in the M4 carbine.";
		model="\dz\weapons\ammunition\357_LooseRounds.p3d";
		iconCartridge=1;
		iconType=1;
		weight=8;
		count=20;
		ammo="Bullet_300BKTracer";
		muzzleFlashParticle="weapon_shot_izh18_01";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\ammunition\data\762x39_tracer_co.paa"
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
								"DZ\weapons\ammunition\data\357mag_loose.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\357mag_loose.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\357mag_loose_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\357mag_loose_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\357mag_loose_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_300BK: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_357";
		round="FxRound_357";
		spawnPileType="Ammo_357";
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
	class Bullet_300BKTracer: Bullet_300BK
	{
		scope=1;
		model="\dz\weapons\projectiles\tracer_green.p3d";
		spawnPileType="Ammo_357";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=3;
	};
};
