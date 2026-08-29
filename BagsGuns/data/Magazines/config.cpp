class CfgPatches
{
    class Bags_Magazines
    {
        units[]=
        {
			"Bags_Mag_AR300_30Rnd",
			"Bags_Mag_UMP9mm_30Rnd",
			"Bags_Mag_Glock21_15Rnd",
			"Bags_Mag_AR10_20Rnd",
			"Bags_Mag_UMP40_30Rnd",
			"Bags_Mag_SCARX_30Rnd"
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
            "DZ_Weapons",
        };
    };
};
class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		scope=0;
		debug_ItemCategory=4;
		storageCategory=1;
		inventorySlot[]=
		{
			"magazine",
			"magazine2",
			"magazine3"
		};
		repairableWithKits[]={1};
		repairCosts[]={25};
		handheld="true";
		armAction="Disarm";
		isMeleeWeapon=1;
		rotationFlags=17;
		quantityBar=0;
		itemSize[]={1,2};
		absorbency=0;
		recoilModifier[]={0.94999999,0.94999999,0.94999999};
		value=1;
		modelSpecial="";
		spawnDamageRange[]={0,0.60000002};
		enlargeInventoryView=0;
		useAction=0;
		useActionTitle="";
		manipulationDamage=0.050000001;
		count=30;
		ammo="";
		ammoItems[]={};
		weightPerQuantityUnit=8;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		selectionFireAnim="zasleh";
		nameSound="magazine";
		soundUse="craft_rounds";
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
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		class Reliability
		{
			ChanceToJam[]={0,0.001,0.0099999998,0.050000001,1};
		};
		soundImpactType="metal";
	};

	// MAGS
	class Bags_Mag_SCARX_30Rnd: Magazine_Base
	{
		scope=2;
		displayName="SCAR-X Magazine";
		descriptionShort="A 30 round magazine chambered for 6.5mm Grendel.";
		model="dz\weapons\attachments\magazine\magazine_SCARH_20rnd.p3d";
		weight=275;
		weightPerQuantityUnit=10;
		itemSize[]={1,2};
		count=30;
		ammo="Bags_Bullet_65GR";
		ammoItems[]=
		{
			"Bags_Ammo_65GR"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\Magazines\magazine_scar_30rnd_co.paa"
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
								"DZ\weapons\attachments\magazine\data\magazine_scarh_20rnd.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\magazine\data\magazine_scarh_20rnd.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\magazine\data\magazine_scarh_20rnd_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\magazine\data\magazine_scarh_20rnd_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\magazine\data\magazine_scarh_20rnd_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class Bags_Mag_AR10_20Rnd: Magazine_Base
	{
		scope=2;
		displayName="AR15-357 Magazine";
		descriptionShort="A 20 round magazine chambered for .357 Magnum.";
		model="\DZ\weapons\attachments\magazine\magazine_val.p3d";
		weight=550;
		weightPerQuantityUnit=16;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_357";
		ammoItems[]=
		{
			"Ammo_357"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\Magazines\300bk_mag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\magazine\data\val_mag.rvmat"
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
								"DZ\weapons\attachments\magazine\data\val_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class Bags_Mag_AR300_30Rnd: Magazine_Base
	{
		scope=2;
		displayName="AR15-300 Blackout Magazine";
		descriptionShort="A 30 round magazine chambered for .300 Blackout.";
		model="\DZ\weapons\attachments\magazine\magazine_val.p3d";
		weight=550;
		weightPerQuantityUnit=16;
		itemSize[]={1,2};
		count=30;
		ammo="Bags_Bullet_300BK";
		ammoItems[]=
		{
			"Bags_Ammo_300BK"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\Magazines\300bk_mag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\magazine\data\val_mag.rvmat"
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
								"DZ\weapons\attachments\magazine\data\val_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class Bags_Mag_UMP9mm_30Rnd: Magazine_Base
	{
		scope=2;
		displayName="UMP-9mm Magazine";
		descriptionShort="A 30 round magazine chambered for 9mm.";
		model="\DZ\weapons\attachments\magazine\magazine_ump45_25rnd.p3d";
		weight=350;
		weightPerQuantityUnit=12;
		itemSize[]={1,3};
		count=30;
		ammo="Bullet_9x19";
		ammoItems[]=
		{
			"Ammo_9x19"
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
								"DZ\weapons\attachments\magazine\data\ump45_magazine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\magazine\data\ump45_magazine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\magazine\data\ump45_magazine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\magazine\data\ump45_magazine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\magazine\data\ump45_magazine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		tracersEvery=0;
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class Bags_Mag_UMP40_30Rnd: Magazine_Base
	{
		scope=2;
		displayName="UMP-40 Magazine";
		descriptionShort="A 30 round magazine chambered for .40 S&W.";
		model="\DZ\weapons\attachments\magazine\magazine_ump45_25rnd.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\Magazines\ump40_mag_co.paa"
		};
		weight=350;
		weightPerQuantityUnit=12;
		itemSize[]={1,3};
		count=30;
		ammo="Bags_Bullet_40CAL";
		ammoItems[]=
		{
			"Bags_Ammo_40CAL"
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
								"DZ\weapons\attachments\magazine\data\ump45_magazine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\magazine\data\ump45_magazine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\magazine\data\ump45_magazine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\magazine\data\ump45_magazine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\magazine\data\ump45_magazine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		tracersEvery=0;
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class Bags_Mag_GLOCK21_15Rnd: Magazine_Base
	{
		scope=2;
		displayName="Glock-21 Magazine";
		descriptionShort="A 15 round magazine chambered for .40 S&W.";
		model="\DZ\weapons\attachments\magazine\magazine_glock19.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BagsGuns\data\Magazines\glock21_mag_co.paa"
		};
		weight=131;
		weightPerQuantityUnit=8;
		itemSize[]={1,2};
		count=15;
		ammo="Bags_Bullet_40CAL";
		ammoItems[]=
		{
			"Bags_Ammo_40CAL"
		};
		tracersEvery=0;
		mass=10;
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
								"DZ\weapons\attachments\magazine\data\glock19_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\magazine\data\glock19_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\magazine\data\glock19_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\magazine\data\glock19_mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\magazine\data\glock19_mag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
};