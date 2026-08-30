class CfgPatches
{
    class Bags_Ada
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {            
            "DZ_Data",
            "DZ_Vehicles_Parts",
            "DZ_Vehicles_Wheeled"
        };
    };
};

class cfgVehicles
{
    class OffroadHatchback;
    class Reflector_1_1;
	class Reflector_2_1;
    class HatchbackDoors_Driver;
    class HatchbackDoors_CoDriver;
    class HatchbackHood;
    class HatchbackTrunk;
 
    // Black
    class Bags_Ada_Black: OffroadHatchback
    {
        scope = 2;
        displayName = "ADA 4x4 Black";
        descriptionShort = "ADA 4x4 Black";

		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"dmgZone_chassis",
			"dmgZone_front",
			"dmgZone_back",
			"dmgZone_roof",
			"dmgZone_fender_1_1",
			"dmgZone_fender_1_2",
			"dmgZone_fender_2_1",
			"dmgZone_fender_2_2"
		};

        hiddenSelectionsMaterials[] = 
        {
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat",
            "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat",
            "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat",
            "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat",
            "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat",
            "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat",
            "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat",
            "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat",
            "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat",
            "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"
        };

        class DamageSystem
        {
            class DamageZones
            {
                class Chassis { class Health {}; };
                class Reflector_1_1 { class Health {}; };
                class Reflector_2_1 { class Health {}; };
                class WindowFront { class Health {}; };
                class Engine { class Health {}; };

                class Roof
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_body_destruct_black.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Ada_Doors_Driver_Black: HatchbackDoors_Driver
    {
        scope = 2;
        displayName = "ADA 4x4 Driver Door Black";
        descriptionShort = "ADA 4x4 Driver Door Black";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_door_black.rvmat" };
        
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_door_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_door_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_door_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_door_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_door_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_door_destruct_black.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Ada_Doors_CoDriver_Black: HatchbackDoors_CoDriver
    {
        scope = 2;
        displayName = "ADA 4x4 Co-Driver Door Black";
        descriptionShort = "ADA 4x4 Co-Driver Door Black";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_door_black.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_door_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_door_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_door_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_door_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_door_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_door_destruct_black.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Ada_Hood_Black: HatchbackHood
    {
        scope = 2;
        displayName = "ADA 4x4 Hood Black";
        descriptionShort = "ADA 4x4 Hood Black";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_hood_black.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_hood_black.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_hood_black.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_hood_black.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_hood_damage_black.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_hood_damage_black.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_hood_destruct_black.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Ada_Trunk_Black: HatchbackTrunk
    {
        scope = 2;
        displayName = "ADA 4x4 Trunk Black";
        descriptionShort = "ADA 4x4 Trunk Black";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_trunk_black.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\black\niva_trunk_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_trunk_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\black\niva_trunk_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\black\niva_trunk_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\black\niva_trunk_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\black\niva_trunk_destruct_black.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CC
    class Bags_Ada_CC: OffroadHatchback
    {
        scope = 2;
        displayName = "ADA 4x4 Desert (CC)";
        descriptionShort = "ADA 4x4 (CC)";

		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"dmgZone_chassis",
			"dmgZone_front",
			"dmgZone_back",
			"dmgZone_roof",
			"dmgZone_fender_1_1",
			"dmgZone_fender_1_2",
			"dmgZone_fender_2_1",
			"dmgZone_fender_2_2"
		};

        hiddenSelectionsMaterials[] = 
        {
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat",
            "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat",
            "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat",
            "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat",
            "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat",
            "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat",
            "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat",
            "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat",
            "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat",
            "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"
        };

        class DamageSystem
        {
            class DamageZones
            {
                class Chassis { class Health {}; };
                class Reflector_1_1 { class Health {}; };
                class Reflector_2_1 { class Health {}; };
                class WindowFront { class Health {}; };
                class Engine { class Health {}; };

                class Roof
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_body_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Ada_Doors_Driver_CC: HatchbackDoors_Driver
    {
        scope = 2;
        displayName = "ADA 4x4 Driver Door CC";
        descriptionShort = "ADA 4x4 Driver Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_door_cc.rvmat" };
        
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_door_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_door_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_door_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_door_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_door_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_door_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Ada_Doors_CoDriver_CC: HatchbackDoors_CoDriver
    {
        scope = 2;
        displayName = "ADA 4x4 Co-Driver Door CC";
        descriptionShort = "ADA 4x4 Co-Driver Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_door_cc.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_door_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_door_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_door_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_door_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_door_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_door_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Ada_Hood_CC: HatchbackHood
    {
        scope = 2;
        displayName = "ADA 4x4 Hood CC";
        descriptionShort = "ADA 4x4 Hood CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_hood_cc.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_hood_cc.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_hood_cc.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_hood_cc.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_hood_damage_cc.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_hood_damage_cc.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_hood_destruct_cc.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Ada_Trunk_CC: HatchbackTrunk
    {
        scope = 2;
        displayName = "ADA 4x4 Trunk CC";
        descriptionShort = "ADA 4x4 Trunk CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_trunk_cc.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\cc\niva_trunk_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_trunk_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\cc\niva_trunk_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\cc\niva_trunk_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\cc\niva_trunk_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\cc\niva_trunk_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // ERDL
    class Bags_Ada_ERDL: OffroadHatchback
    {
        scope = 2;
        displayName = "ADA 4x4 Woodland (ERDL)";
        descriptionShort = "ADA 4x4 Woodland (ERDL)";

		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"dmgZone_chassis",
			"dmgZone_front",
			"dmgZone_back",
			"dmgZone_roof",
			"dmgZone_fender_1_1",
			"dmgZone_fender_1_2",
			"dmgZone_fender_2_1",
			"dmgZone_fender_2_2"
		};

        hiddenSelectionsMaterials[] = 
        {
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat",
            "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat",
            "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat",
            "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat",
            "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat",
            "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat",
            "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat",
            "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat",
            "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat",
            "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"
        };

        class DamageSystem
        {
            class DamageZones
            {
                class Chassis { class Health {}; };
                class Reflector_1_1 { class Health {}; };
                class Reflector_2_1 { class Health {}; };
                class WindowFront { class Health {}; };
                class Engine { class Health {}; };

                class Roof
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_body_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Ada_Doors_Driver_ERDL: HatchbackDoors_Driver
    {
        scope = 2;
        displayName = "ADA 4x4 Driver Door ERDL";
        descriptionShort = "ADA 4x4 Driver Door ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_door_erdl.rvmat" };
        
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_door_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_door_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_door_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_door_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_door_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_door_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Ada_Doors_CoDriver_ERDL: HatchbackDoors_CoDriver
    {
        scope = 2;
        displayName = "ADA 4x4 Co-Driver Door ERDL";
        descriptionShort = "ADA 4x4 Co-Driver Door ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_door_erdl.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_door_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_door_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_door_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_door_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_door_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_door_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Ada_Hood_ERDL: HatchbackHood
    {
        scope = 2;
        displayName = "ADA 4x4 Hood ERDL";
        descriptionShort = "ADA 4x4 Hood ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_hood_erdl.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_hood_erdl.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_hood_erdl.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_hood_erdl.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_hood_damage_erdl.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_hood_damage_erdl.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_hood_destruct_erdl.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Ada_Trunk_ERDL: HatchbackTrunk
    {
        scope = 2;
        displayName = "ADA 4x4 Trunk ERDL";
        descriptionShort = "ADA 4x4 Trunk ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_trunk_erdl.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\erdl\niva_trunk_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_trunk_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_trunk_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_trunk_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_trunk_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\erdl\niva_trunk_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Orange
    class Bags_Ada_Orange: OffroadHatchback
    {
        scope = 2;
        displayName = "ADA 4x4 Orange";
        descriptionShort = "ADA 4x4 Orange";

		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"dmgZone_chassis",
			"dmgZone_front",
			"dmgZone_back",
			"dmgZone_roof",
			"dmgZone_fender_1_1",
			"dmgZone_fender_1_2",
			"dmgZone_fender_2_1",
			"dmgZone_fender_2_2"
		};

        hiddenSelectionsMaterials[] = 
        {
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat",
            "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat",
            "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat",
            "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat",
            "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat",
            "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat",
            "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat",
            "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat",
            "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat",
            "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"
        };

        class DamageSystem
        {
            class DamageZones
            {
                class Chassis { class Health {}; };
                class Reflector_1_1 { class Health {}; };
                class Reflector_2_1 { class Health {}; };
                class WindowFront { class Health {}; };
                class Engine { class Health {}; };

                class Roof
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_body_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Ada_Doors_Driver_Orange: HatchbackDoors_Driver
    {
        scope = 2;
        displayName = "ADA 4x4 Driver Door Orange";
        descriptionShort = "ADA 4x4 Driver Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_door_orange.rvmat" };
        
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_door_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_door_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_door_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_door_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_door_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_door_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Ada_Doors_CoDriver_Orange: HatchbackDoors_CoDriver
    {
        scope = 2;
        displayName = "ADA 4x4 Co-Driver Door Orange";
        descriptionShort = "ADA 4x4 Co-Driver Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_door_orange.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_door_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_door_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_door_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_door_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_door_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_door_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Ada_Hood_Orange: HatchbackHood
    {
        scope = 2;
        displayName = "ADA 4x4 Hood Orange";
        descriptionShort = "ADA 4x4 Hood Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_hood_orange.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_hood_orange.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_hood_orange.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_hood_orange.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_hood_damage_orange.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_hood_damage_orange.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_hood_destruct_orange.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Ada_Trunk_Orange: HatchbackTrunk
    {
        scope = 2;
        displayName = "ADA 4x4 Trunk Orange";
        descriptionShort = "ADA 4x4 Trunk Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_trunk_orange.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\orange\niva_trunk_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_trunk_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\orange\niva_trunk_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\orange\niva_trunk_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\orange\niva_trunk_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\orange\niva_trunk_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

     // Pink
    class Bags_Ada_Pink: OffroadHatchback
    {
        scope = 2;
        displayName = "ADA 4x4 Pink";
        descriptionShort = "ADA 4x4 Pink";

		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"dmgZone_chassis",
			"dmgZone_front",
			"dmgZone_back",
			"dmgZone_roof",
			"dmgZone_fender_1_1",
			"dmgZone_fender_1_2",
			"dmgZone_fender_2_1",
			"dmgZone_fender_2_2"
		};

        hiddenSelectionsMaterials[] = 
        {
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat",
            "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat",
            "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat",
            "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat",
            "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat",
            "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat",
            "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat",
            "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat",
            "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat",
            "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"
        };

        class DamageSystem
        {
            class DamageZones
            {
                class Chassis { class Health {}; };
                class Reflector_1_1 { class Health {}; };
                class Reflector_2_1 { class Health {}; };
                class WindowFront { class Health {}; };
                class Engine { class Health {}; };

                class Roof
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_body_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Ada_Doors_Driver_Pink: HatchbackDoors_Driver
    {
        scope = 2;
        displayName = "ADA 4x4 Driver Door Pink";
        descriptionShort = "ADA 4x4 Driver Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_door_pink.rvmat" };
        
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_door_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_door_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_door_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_door_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_door_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_door_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Ada_Doors_CoDriver_Pink: HatchbackDoors_CoDriver
    {
        scope = 2;
        displayName = "ADA 4x4 Co-Driver Door Pink";
        descriptionShort = "ADA 4x4 Co-Driver Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_door_pink.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_door_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_door_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_door_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_door_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_door_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_door_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Ada_Hood_Pink: HatchbackHood
    {
        scope = 2;
        displayName = "ADA 4x4 Hood Pink";
        descriptionShort = "ADA 4x4 Hood Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_hood_pink.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_hood_pink.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_hood_pink.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_hood_pink.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_hood_damage_pink.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_hood_damage_pink.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_hood_destruct_pink.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Ada_Trunk_Pink: HatchbackTrunk
    {
        scope = 2;
        displayName = "ADA 4x4 Trunk Pink";
        descriptionShort = "ADA 4x4 Trunk Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_trunk_pink.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\pink\niva_trunk_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_trunk_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\pink\niva_trunk_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\pink\niva_trunk_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\pink\niva_trunk_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\pink\niva_trunk_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Red
    class Bags_Ada_Red: OffroadHatchback
    {
        scope = 2;
        displayName = "ADA 4x4 Red";
        descriptionShort = "ADA 4x4 Red";

		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"dmgZone_chassis",
			"dmgZone_front",
			"dmgZone_back",
			"dmgZone_roof",
			"dmgZone_fender_1_1",
			"dmgZone_fender_1_2",
			"dmgZone_fender_2_1",
			"dmgZone_fender_2_2"
		};

        hiddenSelectionsMaterials[] = 
        {
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat",
            "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat",
            "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat",
            "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat",
            "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat",
            "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat",
            "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat",
            "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat",
            "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat",
            "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"
        };

        class DamageSystem
        {
            class DamageZones
            {
                class Chassis { class Health {}; };
                class Reflector_1_1 { class Health {}; };
                class Reflector_2_1 { class Health {}; };
                class WindowFront { class Health {}; };
                class Engine { class Health {}; };

                class Roof
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_destruct_red.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_destruct_red.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_destruct_red.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_destruct_red.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_destruct_red.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_destruct_red.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_destruct_red.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_red.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_damage_red.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_body_destruct_red.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Ada_Doors_Driver_Red: HatchbackDoors_Driver
    {
        scope = 2;
        displayName = "ADA 4x4 Driver Door Red";
        descriptionShort = "ADA 4x4 Driver Door Red";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_door_red.rvmat" };
        
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_door_red.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_door_red.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_door_red.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_door_damage_red.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_door_damage_red.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_door_destruct_red.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Ada_Doors_CoDriver_Red: HatchbackDoors_CoDriver
    {
        scope = 2;
        displayName = "ADA 4x4 Co-Driver Door Red";
        descriptionShort = "ADA 4x4 Co-Driver Door Red";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_door_red.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_door_red.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_door_red.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_door_red.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_door_damage_red.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_door_damage_red.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_door_destruct_red.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Ada_Hood_Red: HatchbackHood
    {
        scope = 2;
        displayName = "ADA 4x4 Hood Red";
        descriptionShort = "ADA 4x4 Hood Red";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_hood_red.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_hood_red.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_hood_red.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_hood_red.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_hood_damage_red.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_hood_damage_red.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_hood_destruct_red.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Ada_Trunk_Red: HatchbackTrunk
    {
        scope = 2;
        displayName = "ADA 4x4 Trunk Red";
        descriptionShort = "ADA 4x4 Trunk Red";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_trunk_red.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\red\niva_trunk_red.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_trunk_red.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\red\niva_trunk_red.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\red\niva_trunk_damage_red.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\red\niva_trunk_damage_red.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\red\niva_trunk_destruct_red.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Teal
    class Bags_Ada_Teal: OffroadHatchback
    {
        scope = 2;
        displayName = "ADA 4x4 Teal";
        descriptionShort = "ADA 4x4 Teal";

		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"dmgZone_chassis",
			"dmgZone_front",
			"dmgZone_back",
			"dmgZone_roof",
			"dmgZone_fender_1_1",
			"dmgZone_fender_1_2",
			"dmgZone_fender_2_1",
			"dmgZone_fender_2_2"
		};

        hiddenSelectionsMaterials[] = 
        {
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat",
            "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat",
            "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat",
            "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat",
            "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat",
            "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat",
            "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat",
            "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat",
            "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat",
            "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"
        };

        class DamageSystem
        {
            class DamageZones
            {
                class Chassis { class Health {}; };
                class Reflector_1_1 { class Health {}; };
                class Reflector_2_1 { class Health {}; };
                class WindowFront { class Health {}; };
                class Engine { class Health {}; };

                class Roof
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_body_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Ada_Doors_Driver_Teal: HatchbackDoors_Driver
    {
        scope = 2;
        displayName = "ADA 4x4 Driver Door Teal";
        descriptionShort = "ADA 4x4 Driver Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_door_teal.rvmat" };
        
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_door_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_door_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_door_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_door_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_door_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_door_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Ada_Doors_CoDriver_Teal: HatchbackDoors_CoDriver
    {
        scope = 2;
        displayName = "ADA 4x4 Co-Driver Door Teal";
        descriptionShort = "ADA 4x4 Co-Driver Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_door_teal.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_door_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_door_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_door_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_door_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_door_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_door_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Ada_Hood_Teal: HatchbackHood
    {
        scope = 2;
        displayName = "ADA 4x4 Hood Teal";
        descriptionShort = "ADA 4x4 Hood Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_hood_teal.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_hood_teal.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_hood_teal.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_hood_teal.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_hood_damage_teal.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_hood_damage_teal.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_hood_destruct_teal.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Ada_Trunk_Teal: HatchbackTrunk
    {
        scope = 2;
        displayName = "ADA 4x4 Trunk Teal";
        descriptionShort = "ADA 4x4 Trunk Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_trunk_teal.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\teal\niva_trunk_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_trunk_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\teal\niva_trunk_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\teal\niva_trunk_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\teal\niva_trunk_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\teal\niva_trunk_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // URB
    class Bags_Ada_URB: OffroadHatchback
    {
        scope = 2;
        displayName = "ADA 4x4 Urban";
        descriptionShort = "ADA 4x4 Urban";

		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"dmgZone_chassis",
			"dmgZone_front",
			"dmgZone_back",
			"dmgZone_roof",
			"dmgZone_fender_1_1",
			"dmgZone_fender_1_2",
			"dmgZone_fender_2_1",
			"dmgZone_fender_2_2"
		};

        hiddenSelectionsMaterials[] = 
        {
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat",
            "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat",
            "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat",
            "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat",
            "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat",
            "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat",
            "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat",
            "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat",
            "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat",
            "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"
        };

        class DamageSystem
        {
            class DamageZones
            {
                class Chassis { class Health {}; };
                class Reflector_1_1 { class Health {}; };
                class Reflector_2_1 { class Health {}; };
                class WindowFront { class Health {}; };
                class Engine { class Health {}; };

                class Roof
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_body_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Ada_Doors_Driver_URB: HatchbackDoors_Driver
    {
        scope = 2;
        displayName = "ADA 4x4 Driver Door URB";
        descriptionShort = "ADA 4x4 Driver Door URB";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_door_urb.rvmat" };
        
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_door_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_door_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_door_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_door_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_door_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_door_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Ada_Doors_CoDriver_URB: HatchbackDoors_CoDriver
    {
        scope = 2;
        displayName = "ADA 4x4 Co-Driver Door URB";
        descriptionShort = "ADA 4x4 Co-Driver Door URB";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_door_urb.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_door_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_door_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_door_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_door_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_door_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_door_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Ada_Hood_URB: HatchbackHood
    {
        scope = 2;
        displayName = "ADA 4x4 Hood URB";
        descriptionShort = "ADA 4x4 Hood URB";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_hood_urb.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_hood_urb.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_hood_urb.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_hood_urb.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_hood_damage_urb.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_hood_damage_urb.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_hood_destruct_urb.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Ada_Trunk_URB: HatchbackTrunk
    {
        scope = 2;
        displayName = "ADA 4x4 Trunk URB";
        descriptionShort = "ADA 4x4 Trunk URB";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_trunk_urb.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\urb\niva_trunk_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_trunk_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\urb\niva_trunk_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\urb\niva_trunk_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\urb\niva_trunk_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\urb\niva_trunk_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Yellow
    class Bags_Ada_Yellow: OffroadHatchback
    {
        scope = 2;
        displayName = "ADA 4x4 Yellow";
        descriptionShort = "ADA 4x4 Yellow";

		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"dmgZone_chassis",
			"dmgZone_front",
			"dmgZone_back",
			"dmgZone_roof",
			"dmgZone_fender_1_1",
			"dmgZone_fender_1_2",
			"dmgZone_fender_2_1",
			"dmgZone_fender_2_2"
		};

        hiddenSelectionsMaterials[] = 
        {
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
            "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat",
            "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat",
            "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat",
            "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat",
            "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat",
            "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat",
            "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat",
            "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat",
            "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat",
            "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"
        };

        class DamageSystem
        {
            class DamageZones
            {
                class Chassis { class Health {}; };
                class Reflector_1_1 { class Health {}; };
                class Reflector_2_1 { class Health {}; };
                class WindowFront { class Health {}; };
                class Engine { class Health {}; };

                class Roof
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_body_destruct_yellow.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Ada_Doors_Driver_Yellow: HatchbackDoors_Driver
    {
        scope = 2;
        displayName = "ADA 4x4 Driver Door Yellow";
        descriptionShort = "ADA 4x4 Driver Door Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_door_yellow.rvmat" };
        
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_door_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_door_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_door_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_door_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_door_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_door_destruct_yellow.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Ada_Doors_CoDriver_Yellow: HatchbackDoors_CoDriver
    {
        scope = 2;
        displayName = "ADA 4x4 Co-Driver Door Yellow";
        descriptionShort = "ADA 4x4 Co-Driver Door Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_door_yellow.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_door_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_door_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_door_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_door_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_door_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_door_destruct_yellow.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Ada_Hood_Yellow: HatchbackHood
    {
        scope = 2;
        displayName = "ADA 4x4 Hood Yellow";
        descriptionShort = "ADA 4x4 Hood Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_hood_yellow.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_hood_yellow.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_hood_yellow.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_hood_yellow.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_hood_damage_yellow.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_hood_damage_yellow.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_hood_destruct_yellow.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Ada_Trunk_Yellow: HatchbackTrunk
    {
        scope = 2;
        displayName = "ADA 4x4 Trunk Yellow";
        descriptionShort = "ADA 4x4 Trunk Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_trunk_yellow.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health {};
            };
            class DamageZones
            {
                class Window { class Health {}; };
                class Doors
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\offroadhatchback\yellow\niva_trunk_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_trunk_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_trunk_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_trunk_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_trunk_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\offroadhatchback\yellow\niva_trunk_destruct_yellow.rvmat"}}
                        };
                    };
                };
            };
        };
    };
};