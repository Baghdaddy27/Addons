class CfgPatches
{
    class AR15_Magazines
    {
        units[]=
        {
            "Mag_AR15_20Rnd",
			"Mag_AR15_30Rnd"
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


    //5.45x39
    class Mag_AR15_20Rnd: Magazine_Base
    {
        scope=2;
        displayName="20 Round AR15-54 Magazine";
        descriptionShort="A 20 Round AR15 Magazine for 5.45x39";
        model="DZ\weapons\attachments\magazine\magazine_pmag_20.p3d";
        weight=60;
        weightPerQuantityUnit=4;
        itemSize[]={1,2};
        count=20;
        ammo="Bullet_545x39";
        ammoItems[]=
        {
            "Ammo_545x39",
            "Ammo_545x39Tracer"
        };
        tracersEvery=0;
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "BagsGuns\data\Magazines\ar15_mag_co.paa"
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
                        {1.0, {"DZ\weapons\attachments\data\pmag_black.rvmat"}},
                        {0.7, {"DZ\weapons\attachments\data\pmag_black.rvmat"}},
                        {0.5, {"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},
                        {0.3, {"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},
                        {0.0, {"DZ\weapons\attachments\data\pmag_black_destruct.rvmat"}}
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

    class Mag_AR15_30Rnd: Magazine_Base
    {
        scope=2;
        displayName="30 Round AR15-54 Magazine";
        descriptionShort="A 30 Round AR15 Magazine for 5.45x39";
        model="\DZ\weapons\attachments\magazine\magazine_pmag_30.p3d";
        weight=90;
        weightPerQuantityUnit=4;
        itemSize[]={1,3};
        count=30;
        ammo="Bullet_545x39";
        ammoItems[]=
        {
            "Ammo_545x39",
            "Ammo_545x39Tracer"
        };
        tracersEvery=0;
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "BagsGuns\data\Magazines\ar15_mag_co.paa"
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
                        {1.0, {"DZ\weapons\attachments\data\pmag_black.rvmat"}},
                        {0.7, {"DZ\weapons\attachments\data\pmag_black.rvmat"}},
                        {0.5, {"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},
                        {0.3, {"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},
                        {0.0, {"DZ\weapons\attachments\data\pmag_black_destruct.rvmat"}}
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
    	class Mag_VSS_10Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_CfgMagazines_Mag_VSS_10Rnd0";
		descriptionShort="$STR_CfgMagazines_Mag_VSS_10Rnd1";
		model="\DZ\weapons\attachments\magazine\magazine_vss.p3d";
		weight=350;
		weightPerQuantityUnit=8;
		itemSize[]={1,2};
		count=10;
		ammo="Bullet_9x39";
		ammoItems[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		tracersEvery=0;
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
								"DZ\weapons\attachments\magazine\data\vss_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\magazine\data\vss_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\magazine\data\vss_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\magazine\data\vss_mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\magazine\data\vss_mag_destruct.rvmat"
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
	class Mag_VAL_20Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_CfgMagazines_Mag_VAL_20Rnd0";
		descriptionShort="$STR_CfgMagazines_Mag_VAL_20Rnd1";
		model="\DZ\weapons\attachments\magazine\magazine_val.p3d";
		weight=550;
		weightPerQuantityUnit=16;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_9x39";
		ammoItems[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\magazine\data\val_mag_co.paa"
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
	class Mag_Vikhr_30Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_CfgMagazines_Mag_Vikhr_30Rnd0";
		descriptionShort="$STR_CfgMagazines_Mag_Vikhr_30Rnd1";
		model="\DZ\weapons\attachments\magazine\magazine_vikhr_30rnd.p3d";
		weight=750;
		weightPerQuantityUnit=16;
		itemSize[]={1,3};
		count=30;
		ammo="Bullet_9x39";
		ammoItems[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\magazine\data\magazine_vikhr_30rnd_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\magazine\data\magazine_vikhr_30rnd.rvmat"
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
								"DZ\weapons\attachments\magazine\data\magazine_vikhr_30rnd.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\magazine\data\magazine_vikhr_30rnd.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\magazine\data\magazine_vikhr_30rnd_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\magazine\data\magazine_vikhr_30rnd_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\magazine\data\magazine_vikhr_30rnd_destruct.rvmat"
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
	class Mag_M14_10Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_CfgMagazines_Mag_M14_10Rnd0";
		descriptionShort="$STR_CfgMagazines_Mag_M14_10Rnd1";
		model="\DZ\weapons\attachments\magazine\magazine_m14_10rnd.p3d";
		weight=100;
		weightPerQuantityUnit=10;
		itemSize[]={1,2};
		count=10;
		ammo="Bullet_308Win";
		ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\weapons\attachments\magazine\data\m14_mag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\magazine\data\m14_mag.rvmat"
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
								"dz\weapons\attachments\magazine\data\m14_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\weapons\attachments\magazine\data\m14_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\weapons\attachments\magazine\data\m14_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\weapons\attachments\magazine\data\m14_mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\weapons\attachments\magazine\data\m14_mag_destruct.rvmat"
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
	class Mag_M14_20Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_CfgMagazines_Mag_M14_20Rnd0";
		descriptionShort="$STR_CfgMagazines_Mag_M14_20Rnd1";
		model="\DZ\weapons\attachments\magazine\magazine_m14_20rnd.p3d";
		weight=100;
		weightPerQuantityUnit=10;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_308Win";
		ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\weapons\attachments\magazine\data\m14_mag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\magazine\data\m14_mag.rvmat"
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
								"dz\weapons\attachments\magazine\data\m14_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\weapons\attachments\magazine\data\m14_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\weapons\attachments\magazine\data\m14_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\weapons\attachments\magazine\data\m14_mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\weapons\attachments\magazine\data\m14_mag_destruct.rvmat"
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
	class Mag_1911_7Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_CfgMagazines_Mag_1911_7Rnd0";
		descriptionShort="$STR_CfgMagazines_Mag_1911_7Rnd1";
		model="\DZ\weapons\attachments\magazine\magazine_1911.p3d";
		weight=68;
		weightPerQuantityUnit=12;
		itemSize[]={1,2};
		count=7;
		ammo="Bullet_45ACP";
		ammoItems[]=
		{
			"Ammo_45ACP"
		};
		tracersEvery=0;
		mass=10;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\1911_mag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\1911.rvmat"
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
								"DZ\weapons\attachments\data\1911.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\1911.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\1911_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\1911_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\1911_destruct.rvmat"
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
	class Mag_Glock_15Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_CfgMagazines_Mag_Glock_15Rnd0";
		descriptionShort="$STR_CfgMagazines_Mag_Glock_15Rnd1";
		model="\DZ\weapons\attachments\magazine\magazine_glock19.p3d";
		weight=131;
		weightPerQuantityUnit=8;
		itemSize[]={1,2};
		count=15;
		ammo="Bullet_9x19";
		ammoItems[]=
		{
			"Ammo_9x19"
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
	class Mag_SCARH_20Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_CfgMagazines_Mag_SCARH_20Rnd0";
		descriptionShort="$STR_CfgMagazines_Mag_SCARH_20Rnd1";
		model="dz\weapons\attachments\magazine\magazine_SCARH_20rnd.p3d";
		weight=275;
		weightPerQuantityUnit=10;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_308Win";
		ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\magazine\data\magazine_scarh_20rnd_co.paa"
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
};