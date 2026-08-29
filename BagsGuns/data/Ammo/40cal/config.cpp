class CfgPatches
{
	class Bags_Ammo_40CAL
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Ammunition"};
		magazines[] = {"Ammo_40CAL"};
		ammo[] = {"Bullet_40CAL"};
	};
};
class cfgMagazines
{
	class Ammunition_Base;
	class Ammo_40CAL: Ammunition_Base
	{
		scope=2;
		displayName=".40 S&W Ammo Box";
		descriptionShort=" The.40 S&W was developed as a law enforcement cartridge designed to duplicate the performance of the Federal Bureau of Investigation's reduced-velocity 10mm Auto cartridge.";
		model="\dz\weapons\ammunition\45ACP_LooseRounds.p3d";
		iconCartridge=2;
		weight=8;
		count=25;
		ammo="Bullet_40CAL";
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
};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_40CAL: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_9mm";
		round="FxRound_45acp";
		spawnPileType="Ammo_45ACP";
		hit=6;
		indirectHit=0;
        indirectHitRange=0;
        tracerScale=1;
        caliber=0.80000001;
        deflecting=30;
        initSpeed=315;
        typicalSpeed=340;
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
};
