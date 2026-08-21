class CfgPatches
{
    class AR15_Magazines
    {
        units[]=
        {};
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
		inventorySlot[]=
		{
			"magazine",
			"magazine2",
			"magazine3"
		};
	};
    class Mag_AR15_10Rnd: Magazine_Base
    {
        scope=2;
        displayName="10 Round AR15 Magazine";
        descriptionShort="A 10 Round AR15 Magazine for 5.45x39";
        model="BagsGuns\Weapons\Magazines\magazine_pmag_10.p3d";
        weight=30;
        weightPerQuantityUnit=4;
        itemSize[]={1,2};
        count=10;
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
            "BagsGuns\Weapons\Magazines\ar15_mag_co.paa"
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

    class Mag_AR15_20Rnd: Magazine_Base
    {
        scope=2;
        displayName="20 Round AR15 Magazine";
        descriptionShort="A 20 Round AR15 Magazine for 5.45x39";
        model="BagsGuns\Weapons\Magazines\magazine_pmag_20.p3d";
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
            "BagsGuns\Weapons\Magazines\ar15_mag_co.paa"
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
        displayName="30 Round AR15 Magazine";
        descriptionShort="A 30 Round AR15 Magazine for 5.45x39";
        model="\DZ\weapons\attachments\magazine\magazine_pmag30.p3d";
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
            "BagsGuns\Weapons\Magazines\ar15_mag_co.paa"
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

    class Mag_AR15_40Rnd: Magazine_Base
    {
        scope=2;
        displayName="40 Round AR15 Magazine";
        descriptionShort="A 40 Round AR15 Magazine for 5.45x39";
        model="BagsGuns\Weapons\Magazines\magazine_pmag_40.p3d";
        weight=100;
        weightPerQuantityUnit=4;
        itemSize[]={1,4};
        count=40;
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
            "BagsGuns\Weapons\Magazines\ar15_mag_co.paa"
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
};