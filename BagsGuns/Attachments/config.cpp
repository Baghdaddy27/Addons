class CfgPatches
{
    class BagsGuns_Attachments
    {
        units[]=
        {
            "AR15_Bttstck",
            "AR15_Hndgrd"
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

class CfgVehicles
{
    class Inventory_Base;
    class AR15_Bttstck: Inventory_Base
    {
        scope=2;
        displayName="AR15 Wooden Buttstock";
        descriptionShort="A wooden buttstock for AR15 style rifles.";
        model="\DZ\weapons\attachments\support\buttstock_m4_cqb.p3d";
        rotationFlags=17;
        reversed=0;
        inventorySlot[]=
        {
            "weaponButtstockM4"
        };
        weight=450;
        itemSize[]={2,1};
        recoilModifier[]={0.7,0.7,0.7};
        swayModifier[]={0.9,0.9,0.9};
        hiddenSelections[]=
        {
		    "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "BagsGuns\Weapons\Attachments\ar15_stock3_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=250;
                    healthLevels[]=
                    {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\m4_stock3.rvmat"
                            }
                        },
                        {
                            0.7,
                            {
                                "DZ\weapons\attachments\data\m4_stock3.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\m4_stock3_damage.rvmat"
                            }
                        },
                        {
                            0.3,
                            {
                                "DZ\weapons\attachments\data\m4_stock3_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\m4_stock3_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        isMeleeWeapon=1;
        class MeleeModes
        {
            class Default
            {
                ammo="MeleeLightBlunt";
                range=1;
            };
            class Heavy
            {
                ammo="MeleeLightBlunt_Heavy";
                range=1;
            };
            class Sprint
            {
                ammo="MeleeLightBlunt_Heavy";
                range=2.8;
            };
        };
    };

    // Hand Guard
    class AR15_Hndgrd: Inventory_Base
    {
        scope=2;
        displayName="AR15 Wooden Handguard";
        descriptionShort="A wood handguard for AR15 style rifles.";
        model="\DZ\weapons\attachments\support\handguard_m4_mp.p3d";
        itemSize[]={2,1};
        inventorySlot[]=
        {
            "weaponHandguardM4"
        };
        recoilModifier[]={0.9,0.9,0.9};
        swayModifier[]={0.5,0.5,0.5};
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "BagsGuns\Weapons\Attachments\ar15_handguard_mp_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=220;
                    healthLevels[]=
                    {
                        {
                            1,
                            {
                                "DZ\weapons\attachments\data\m4_handguard_mp.rvmat"
                            }
                        },
                        {
                            0.7,
                            {
                                "DZ\weapons\attachments\data\m4_handguard_mp.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\weapons\attachments\data\m4_handguard_mp_damage.rvmat"
                            }
                        },
                        {
                            0.3,
                            {
                                "DZ\weapons\attachments\data\m4_handguard_mp_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\weapons\attachments\data\m4_handguard_mp_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        isMeleeWeapon=1;
        class MeleeModes
        {
            class Default
            {
                ammo="MeleeLightBlunt";
                range=1;
            };
            class Heavy
            {
                ammo="MeleeLightBlunt_Heavy";
                range=1;
            };
            class Sprint
            {
                ammo="MeleeLightBlunt_Heavy";
                range=2.8;
            };
        };
        soundImpactType="plastic";
    };
};