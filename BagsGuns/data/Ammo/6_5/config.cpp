class CfgPatches
{
	class Bags_Ammo_65
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Ammunition"};
		magazines[] = {"Ammo_65GR"};
		ammo[] = {"Bullet_65GR"};
	};
};
class cfgMagazines
{
	class Ammunition_Base;
	class Ammo_65GR: Ammunition_Base
	{
		scope=2;
		displayName="6.5mm Grendel";
		descriptionShort="The 6.5mm Grendel is an intermediate cartridge jointly designed by British-American armorer Bill Alexander, competitive shooter Arne Brennan and Lapua ballistician Janne Pohjoispää, as a low-recoil, high-precision rifle cartridge specifically for the AR-15 platform at medium/long range.";
		model="\dz\weapons\ammunition\762x39_LooseRounds.p3d";
		iconCartridge=2;
		weight=8;
		count=20;
		ammo="Bullet_65GR";
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
								"DZ\weapons\ammunition\data\762x39.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\762x39.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\762x39_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\762x39_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\762x39_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Ammo_65GRTracer: Ammunition_Base
	{
		scope=2;
		displayName="6.5mm Grendel Tracer";
		descriptionShort="The 6.5mm Grendel is an intermediate cartridge jointly designed by British-American armorer Bill Alexander, competitive shooter Arne Brennan and Lapua ballistician Janne Pohjoispää, as a low-recoil, high-precision rifle cartridge specifically for the AR-15 platform at medium/long range.";
		model="\dz\weapons\ammunition\762x39_LooseRounds.p3d";
		iconCartridge=2;
		iconType=1;
		weight=8;
		count=20;
		ammo="Bullet_65GRTracer";
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
								"DZ\weapons\ammunition\data\762x39.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\762x39.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\762x39_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\762x39_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\762x39_destruct.rvmat"
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
	class Bullet_65GR: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_762x39";
		round="FxRound_762x39";
		spawnPileType="Ammo_762x39";
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
	class Bullet_65GRTracer: Bullet_65GR
	{
		scope=1;
		model="\dz\weapons\projectiles\tracer_green.p3d";
		spawnPileType="Ammo_762x39Tracer";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=3;
	};
};
