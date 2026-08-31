class CfgPatches
{
	class Bags_Ammunition
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
class CfgMagazines
{

//AMMO BASE
	class Ammunition_Base;
	class Ammo_Bags_40CAL: Ammunition_Base
	{
		scope=2;
		displayName=".40 S&W Ammo Box";
		descriptionShort=" The.40 S&W was developed as a law enforcement cartridge designed to duplicate the performance of the Federal Bureau of Investigation's reduced-velocity 10mm Auto cartridge.";
		model="\dz\weapons\ammunition\9mm_LooseRounds.p3d";
		iconCartridge=1;
		weight=8;
		count=25;
		ammo="Bullet_Bags_40CAL";
		muzzleFlashParticle="weapon_shot_mp5k_01";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\Ammunition\40_loose_co.paa"
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
	class Ammo_Bags_300_Blackout: Ammunition_Base
	{
		scope=2;
		displayName="300 Blackout Tracer";
		descriptionShort="The.300 AAC Blackout, also known as 7.62×35 mm, is an intermediate cartridge developed in the United States by Advanced Armament Corporation for use in the M4 carbine.";
		model="\dz\weapons\ammunition\762x39_LooseRounds.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\Ammunition\300bk_box_co.paa"
		};
		iconCartridge=2;
		weight=8;
		count=20;
		ammo="Bullet_762x39";
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
	class Ammo_Bags_65_Grendel: Ammunition_Base
	{
		scope=2;
		displayName="6.5mm Grendel";
		descriptionShort="The 6.5mm Grendel is an intermediate cartridge jointly designed by British-American armorer Bill Alexander, competitive shooter Arne Brennan and Lapua ballistician Janne Pohjoispää, as a low-recoil, high-precision rifle cartridge specifically for the AR-15 platform at medium/long range.";
		model="\dz\weapons\ammunition\308Win_LooseRounds.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\Ammunition\65gr_box_co.paa"
		};
		iconCartridge=3;
		weight=10;
		count=20;
		ammo="Bullet_308Win";
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
								"DZ\weapons\ammunition\data\308_loose.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\308_loose.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\308_loose_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\308_loose_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\308_loose_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	};
class CfgVehicles
{
	// BOX BASE
	class Box_Base;
	class AmmoBox_Bags_40CAL_25Rnd: Box_Base
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
			"BagsGuns\data\Ammunition\40cal_box_co.paa"
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
			class Ammo_Bags_40CAL
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
	class AmmoBox_Bags_65_Grendel_20Rnd: Box_Base
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
			"BagsGuns\data\Ammunition\65_box_co.paa"
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
			class Ammo_Bags_65_Grendel
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
	class AmmoBox_Bags_300_Blackout_20Rnd: Box_Base
	{
		scope=2;
		displayName="300 Blackout";
		descriptionShort="The.300 AAC Blackout, also known as 7.62x35 mm, is an intermediate cartridge developed in the United States by Advanced Armament Corporation for use in the M4 carbine.";
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
			"BagsGuns\data\Ammunition\300_Blackout_box_co.paa"
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
			class Ammo_Bags_300_Blackout
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