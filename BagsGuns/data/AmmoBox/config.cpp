class CfgPatches
{
	class Bags_Ammo
	{
		units[] = {
			"Bags_Ammo_40CAL",
			"Bags_Ammo_65GR",
			"Bags_Ammo_300BK",
			"Bags_AmmoBox_40CAL_25Rnd",
			"Bags_AmmoBox_65GR_20Rnd",
			"Bags_AmmoBox_300BK_20Rnd",
			"Bags_Bullet_40CAL",
			"Bags_Bullet_65GR",
			"Bags_Bullet_300BK",
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Magazines"
		};
	};
};
class CfgMagazines
{
	// MAG BASE
	class Magazine_Base;
	class Ammunition_Base: Magazine_Base
	{
		debug_ItemCategory=5;
		rotationFlags=2;
		itemSize[]={1,1};
		iconCartridge=0;
		iconType=0;
		repairableWithKits[]={};
		ammo="";
		spawnDamageRange[]={0,0.60000002};
		particleStrIdentifier="";
		particleLifeTime=0;
		destroyOnEmpty=1;
		varQuantityDestroyOnMin=1;
		canBeSplit=1;
		simpleHeap=1;
		soundUse="craft_rounds";
		emptySound="craft_rounds";
	};
	class Bags_Ammo_40CAL: Ammunition_Base
	{
		scope=2;
		displayName=".40 S&W Ammo Box";
		descriptionShort=" The.40 S&W was developed as a law enforcement cartridge designed to duplicate the performance of the Federal Bureau of Investigation's reduced-velocity 10mm Auto cartridge.";
		model="\dz\weapons\ammunition\45ACP_LooseRounds.p3d";
		iconCartridge=2;
		weight=8;
		count=25;
		ammo="Bags_Bullet_40CAL";
		muzzleFlashParticle="weapon_shot_izh18_01";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AmmoBox\40_loose_co.paa"
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
	class Bags_Ammo_65GR: Ammunition_Base
	{
		scope=2;
		displayName="6.5mm Grendel";
		descriptionShort="The 6.5mm Grendel is an intermediate cartridge jointly designed by British-American armorer Bill Alexander, competitive shooter Arne Brennan and Lapua ballistician Janne Pohjoispää, as a low-recoil, high-precision rifle cartridge specifically for the AR-15 platform at medium/long range.";
		model="\dz\weapons\ammunition\762x39_LooseRounds.p3d";
		iconCartridge=2;
		weight=8;
		count=20;
		ammo="Bags_Bullet_65GR";
		muzzleFlashParticle="weapon_shot_izh18_01";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AmmoBox\65gr_co.paa"
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
	class Bags_Ammo_300BK: Ammunition_Base
	{
		scope=2;
		displayName="300 Blackout Tracer";
		descriptionShort="The.300 AAC Blackout, also known as 7.62×35 mm, is an intermediate cartridge developed in the United States by Advanced Armament Corporation for use in the M4 carbine.";
		model="\dz\weapons\ammunition\762x39_LooseRounds.p3d";
		iconCartridge=1;
		weight=8;
		count=20;
		ammo="Bags_Bullet_300BK";
		muzzleFlashParticle="weapon_shot_izh18_01";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AmmoBox\300bk_co.paa"
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
	// BULLET BASE
	class Bullet_Base;
	class Bags_Bullet_40CAL: Bullet_Base
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
	class Bags_Bullet_65GR: Bullet_Base
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
	class Bags_Bullet_300BK: Bullet_Base
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
};
class CfgVehicles
{
	// BOX BASE
	class Box_Base;
	class Bags_AmmoBox_40CAL_25Rnd: Box_Base
	{
		scope=2;
		displayName=".40 S&W Ammo Box";
		descriptionShort="The.40 S&W was developed as a law enforcement cartridge designed to duplicate the performance of the Federal Bureau of Investigation's reduced-velocity 10mm Auto cartridge.";
		model="\dz\weapons\ammunition\9x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		iconType=2;
		rotationFlags=17;
		weight=325;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AmmoBox\40cal_box_co.paa"
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
								"DZ\weapons\ammunition\data\762x39_box.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\762x39_box.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\762x39_box_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\762x39_box_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\762x39_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class Bags_Ammo_40CAL
			{
				value=25;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
	class Bags_AmmoBox_65GR_20Rnd: Box_Base
	{
		scope=2;
		displayName="6.5mm Grendel";
		descriptionShort="The 6.5mm Grendel is an intermediate cartridge jointly designed by British-American armorer Bill Alexander, competitive shooter Arne Brennan and Lapua ballistician Janne Pohjoispää, as a low-recoil, high-precision rifle cartridge specifically for the AR-15 platform at medium/long range.";
		model="\dz\weapons\ammunition\9x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		iconType=2;
		rotationFlags=17;
		weight=325;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AmmoBox\65_box_co.paa"
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
								"DZ\weapons\ammunition\data\762x39_box.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\762x39_box.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\762x39_box_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\762x39_box_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\762x39_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class Bags_Ammo_65GR
			{
				value=20;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
	class Bags_AmmoBox_300BK_20Rnd: Box_Base
	{
		scope=2;
		displayName="300 Blackout";
		descriptionShort="The.300 AAC Blackout, also known as 7.62×35 mm, is an intermediate cartridge developed in the United States by Advanced Armament Corporation for use in the M4 carbine.";
		model="\dz\weapons\ammunition\9x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		iconType=2;
		rotationFlags=17;
		weight=325;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\AmmoBox\300bk_box_co.paa"
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
								"DZ\weapons\ammunition\data\762x39_box.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\762x39_box.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\762x39_box_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\762x39_box_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\762x39_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class Bags_Ammo_300BK
			{
				value=20;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
};