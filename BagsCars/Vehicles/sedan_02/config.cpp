class CfgPatches
{
    class Bags_Sarka
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
    class Sedan_02;
    class Reflector_1_1;
	class Reflector_2_1;
    class Sedan_02_Door_1_1;
    class Sedan_02_Door_2_1;
    class Sedan_02_Door_1_2;
    class Sedan_02_Door_2_2;
    class Sedan_02_Hood;
    class Sedan_02_Trunk;
 
    // Black
    class Bags_Sarka_Black: Sedan_02
    {
        scope = 2;
        displayName = "Sarka Black";
        descriptionShort = "Sarka Black";

        hiddenSelections[] = 
        {
			"light_1_1",
			"light_2_1",
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
            "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat",
            "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat",
            "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat",
            "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat",
            "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat",
            "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat",
            "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat",
            "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_destruct_black.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_body_destruct_black.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Sarka_Black_Door_1_1: Sedan_02_Door_1_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Black";
        descriptionShort = "Sarka Driver Door Black";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_black.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_destruct_black.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Bags_Sarka_Black_Door_2_1: Sedan_02_Door_2_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Black";
        descriptionShort = "Sarka Driver Door Black";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_black.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_fore_destruct_black.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Sarka_Black_Door_1_2: Sedan_02_Door_1_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Black";
        descriptionShort = "Sarka Driver Door Black";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_black.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_destruct_black.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Sarka_Black_Door_2_2: Sedan_02_Door_2_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Black";
        descriptionShort = "Sarka Driver Door Black";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_black.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_door_aft_destruct_black.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Sarka_Hood_Black: Sedan_02_Hood
    {
        scope = 2;
        displayName = "Sarka Hood Black";
        descriptionShort = "Sarka Hood Black";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_hood_black.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_hood_black.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_hood_black.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_hood_black.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_hood_damage_black.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_hood_damage_black.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_hood_destruct_black.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Sarka_Trunk_Black: Sedan_02_Trunk
    {
        scope = 2;
        displayName = "Sarka Trunk Black";
        descriptionShort = "Sarka Trunk Black";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_trunk_black.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\black\sedan_02_trunk_black.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_trunk_black.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\black\sedan_02_trunk_black.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\black\sedan_02_trunk_damage_black.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\black\sedan_02_trunk_damage_black.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\black\sedan_02_trunk_destruct_black.rvmat"}}
                        };
                    };
                };
            };
        };
    }; 

    // Blue
    class Bags_Sarka_Blue: Sedan_02
    {
        scope = 2;
        displayName = "Sarka Blue";
        descriptionShort = "Sarka Blue";

        hiddenSelections[] = 
        {
			"light_1_1",
			"light_2_1",
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
            "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat",
            "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat",
            "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat",
            "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat",
            "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat",
            "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat",
            "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat",
            "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_destruct_blue.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_destruct_blue.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_destruct_blue.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_destruct_blue.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_destruct_blue.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_destruct_blue.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_destruct_blue.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_body_destruct_blue.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Sarka_Blue_Door_1_1: Sedan_02_Door_1_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Blue";
        descriptionShort = "Sarka Driver Door Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_blue.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_destruct_blue.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Bags_Sarka_Blue_Door_2_1: Sedan_02_Door_2_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Blue";
        descriptionShort = "Sarka Driver Door Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_blue.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_fore_destruct_blue.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Sarka_Blue_Door_1_2: Sedan_02_Door_1_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Blue";
        descriptionShort = "Sarka Driver Door Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_blue.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_destruct_blue.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Sarka_Blue_Door_2_2: Sedan_02_Door_2_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Blue";
        descriptionShort = "Sarka Driver Door Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_blue.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_door_aft_destruct_blue.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Sarka_Hood_Blue: Sedan_02_Hood
    {
        scope = 2;
        displayName = "Sarka Hood Blue";
        descriptionShort = "Sarka Hood Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_hood_blue.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_hood_blue.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_hood_blue.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_hood_blue.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_hood_damage_blue.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_hood_damage_blue.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_hood_destruct_blue.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Sarka_Trunk_Blue: Sedan_02_Trunk
    {
        scope = 2;
        displayName = "Sarka Trunk Blue";
        descriptionShort = "Sarka Trunk Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_trunk_blue.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\blue\sedan_02_trunk_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_trunk_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_trunk_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_trunk_damage_blue.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_trunk_damage_blue.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\blue\sedan_02_trunk_destruct_blue.rvmat"}}
                        };
                    };
                };
            };
        };
    }; 

    // CC
    class Bags_Sarka_CC: Sedan_02
    {
        scope = 2;
        displayName = "Sarka Desert (CC)";
        descriptionShort = "Sarka Desert (CC)";

        hiddenSelections[] = 
        {
			"light_1_1",
			"light_2_1",
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
            "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat",
            "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat",
            "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat",
            "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat",
            "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat",
            "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat",
            "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat",
            "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Sarka_CC_Door_1_1: Sedan_02_Door_1_1
    {
        scope = 2;
        displayName = "Sarka Driver Door CC";
        descriptionShort = "Sarka Driver Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_cc.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Bags_Sarka_CC_Door_2_1: Sedan_02_Door_2_1
    {
        scope = 2;
        displayName = "Sarka Driver Door CC";
        descriptionShort = "Sarka Driver Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_cc.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_fore_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Sarka_CC_Door_1_2: Sedan_02_Door_1_2
    {
        scope = 2;
        displayName = "Sarka Driver Door CC";
        descriptionShort = "Sarka Driver Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_cc.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Sarka_CC_Door_2_2: Sedan_02_Door_2_2
    {
        scope = 2;
        displayName = "Sarka Driver Door CC";
        descriptionShort = "Sarka Driver Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_cc.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_door_aft_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Sarka_Hood_CC: Sedan_02_Hood
    {
        scope = 2;
        displayName = "Sarka Hood CC";
        descriptionShort = "Sarka Hood CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_hood_cc.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_hood_cc.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_hood_cc.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_hood_cc.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_hood_damage_cc.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_hood_damage_cc.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_hood_destruct_cc.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Sarka_Trunk_CC: Sedan_02_Trunk
    {
        scope = 2;
        displayName = "Sarka Trunk CC";
        descriptionShort = "Sarka Trunk CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_trunk_cc.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\cc\sedan_02_trunk_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_trunk_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_trunk_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_trunk_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_trunk_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\cc\sedan_02_trunk_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    }; 
       
    // ERDL
    class Bags_Sarka_ERDL: Sedan_02
    {
        scope = 2;
        displayName = "Sarka Woodland (ERDL)";
        descriptionShort = "Sarka Woodland (ERDL)";

        hiddenSelections[] = 
        {
			"light_1_1",
			"light_2_1",
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
            "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat",
            "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat",
            "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat",
            "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat",
            "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat",
            "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat",
            "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat",
            "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Sarka_ERDL_Door_1_1: Sedan_02_Door_1_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Woodland";
        descriptionShort = "Sarka Driver Door Woodland";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_erdl.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Bags_Sarka_ERDL_Door_2_1: Sedan_02_Door_2_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Woodland";
        descriptionShort = "Sarka Driver Door Woodland";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_erdl.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_fore_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Sarka_Woodland_Door_1_2: Sedan_02_Door_1_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Woodland";
        descriptionShort = "Sarka Driver Door Woodland";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_erdl.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Sarka_Woodland_Door_2_2: Sedan_02_Door_2_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Woodland";
        descriptionShort = "Sarka Driver Door Woodland";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_erdl.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_door_aft_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Sarka_Hood_Woodland: Sedan_02_Hood
    {
        scope = 2;
        displayName = "Sarka Hood Woodland";
        descriptionShort = "Sarka Hood Woodland";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_hood_erdl.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_hood_erdl.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_hood_erdl.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_hood_erdl.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_hood_damage_erdl.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_hood_damage_erdl.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_hood_destruct_erdl.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Sarka_Trunk_Woodland: Sedan_02_Trunk
    {
        scope = 2;
        displayName = "Sarka Trunk Woodland";
        descriptionShort = "Sarka Trunk Woodland";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_trunk_erdl.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\erdl\sedan_02_trunk_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_trunk_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_trunk_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_trunk_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_trunk_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\erdl\sedan_02_trunk_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    }; 
        
    // Green
    class Bags_Sarka_Green: Sedan_02
    {
        scope = 2;
        displayName = "Sarka Green";
        descriptionShort = "Sarka Green";

        hiddenSelections[] = 
        {
			"light_1_1",
			"light_2_1",
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
            "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat",
            "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat",
            "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat",
            "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat",
            "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat",
            "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat",
            "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat",
            "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_body_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Sarka_Green_Door_1_1: Sedan_02_Door_1_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Green";
        descriptionShort = "Sarka Driver Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_green.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Bags_Sarka_Green_Door_2_1: Sedan_02_Door_2_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Green";
        descriptionShort = "Sarka Driver Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_green.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_fore_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Sarka_Green_Door_1_2: Sedan_02_Door_1_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Green";
        descriptionShort = "Sarka Driver Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_green.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Sarka_Green_Door_2_2: Sedan_02_Door_2_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Green";
        descriptionShort = "Sarka Driver Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_green.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_door_aft_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Sarka_Hood_Green: Sedan_02_Hood
    {
        scope = 2;
        displayName = "Sarka Hood Green";
        descriptionShort = "Sarka Hood Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_hood_green.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_hood_green.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_hood_green.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_hood_green.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_hood_damage_green.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_hood_damage_green.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_hood_destruct_green.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Sarka_Trunk_Green: Sedan_02_Trunk
    {
        scope = 2;
        displayName = "Sarka Trunk Green";
        descriptionShort = "Sarka Trunk Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_trunk_green.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\green\sedan_02_trunk_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_trunk_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\green\sedan_02_trunk_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\green\sedan_02_trunk_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\green\sedan_02_trunk_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\green\sedan_02_trunk_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    }; 

    // Orange
    class Bags_Sarka_Orange: Sedan_02
    {
        scope = 2;
        displayName = "Sarka Orange";
        descriptionShort = "Sarka Orange";

        hiddenSelections[] = 
        {
			"light_1_1",
			"light_2_1",
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
            "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat",
            "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat",
            "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat",
            "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat",
            "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat",
            "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat",
            "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat",
            "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Sarka_Orange_Door_1_1: Sedan_02_Door_1_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Orange";
        descriptionShort = "Sarka Driver Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_orange.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Bags_Sarka_Orange_Door_2_1: Sedan_02_Door_2_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Orange";
        descriptionShort = "Sarka Driver Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_orange.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_fore_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Sarka_Orange_Door_1_2: Sedan_02_Door_1_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Orange";
        descriptionShort = "Sarka Driver Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_orange.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Sarka_Orange_Door_2_2: Sedan_02_Door_2_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Orange";
        descriptionShort = "Sarka Driver Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_orange.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_door_aft_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Sarka_Hood_Orange: Sedan_02_Hood
    {
        scope = 2;
        displayName = "Sarka Hood Orange";
        descriptionShort = "Sarka Hood Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_hood_orange.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_hood_orange.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_hood_orange.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_hood_orange.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_hood_damage_orange.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_hood_damage_orange.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_hood_destruct_orange.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Sarka_Trunk_Orange: Sedan_02_Trunk
    {
        scope = 2;
        displayName = "Sarka Trunk Orange";
        descriptionShort = "Sarka Trunk Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_trunk_orange.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\orange\sedan_02_trunk_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_trunk_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_trunk_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_trunk_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_trunk_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\orange\sedan_02_trunk_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    }; 
   
    // Pink
    class Bags_Sarka_Pink: Sedan_02
    {
        scope = 2;
        displayName = "Sarka Pink";
        descriptionShort = "Sarka Pink";

        hiddenSelections[] = 
        {
			"light_1_1",
			"light_2_1",
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
            "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat",
            "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat",
            "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat",
            "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat",
            "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat",
            "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat",
            "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat",
            "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Sarka_Pink_Door_1_1: Sedan_02_Door_1_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Pink";
        descriptionShort = "Sarka Driver Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_pink.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Bags_Sarka_Pink_Door_2_1: Sedan_02_Door_2_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Pink";
        descriptionShort = "Sarka Driver Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_pink.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_fore_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Sarka_Pink_Door_1_2: Sedan_02_Door_1_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Pink";
        descriptionShort = "Sarka Driver Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_pink.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Sarka_Pink_Door_2_2: Sedan_02_Door_2_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Pink";
        descriptionShort = "Sarka Driver Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_pink.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_door_aft_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Sarka_Hood_Pink: Sedan_02_Hood
    {
        scope = 2;
        displayName = "Sarka Hood Pink";
        descriptionShort = "Sarka Hood Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_hood_pink.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_hood_pink.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_hood_pink.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_hood_pink.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_hood_damage_pink.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_hood_damage_pink.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_hood_destruct_pink.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Sarka_Trunk_Pink: Sedan_02_Trunk
    {
        scope = 2;
        displayName = "Sarka Trunk Pink";
        descriptionShort = "Sarka Trunk Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_trunk_pink.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\pink\sedan_02_trunk_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_trunk_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_trunk_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_trunk_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_trunk_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\pink\sedan_02_trunk_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    }; 
        
    // Teal
    class Bags_Sarka_Teal: Sedan_02
    {
        scope = 2;
        displayName = "Sarka Teal";
        descriptionShort = "Sarka Teal";

        hiddenSelections[] = 
        {
			"light_1_1",
			"light_2_1",
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
            "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat",
            "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat",
            "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat",
            "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat",
            "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat",
            "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat",
            "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat",
            "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Sarka_Teal_Door_1_1: Sedan_02_Door_1_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Teal";
        descriptionShort = "Sarka Driver Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_teal.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Bags_Sarka_Teal_Door_2_1: Sedan_02_Door_2_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Teal";
        descriptionShort = "Sarka Driver Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_teal.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_fore_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Sarka_Teal_Door_1_2: Sedan_02_Door_1_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Teal";
        descriptionShort = "Sarka Driver Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_teal.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Sarka_Teal_Door_2_2: Sedan_02_Door_2_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Teal";
        descriptionShort = "Sarka Driver Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_teal.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_door_aft_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Sarka_Hood_Teal: Sedan_02_Hood
    {
        scope = 2;
        displayName = "Sarka Hood Teal";
        descriptionShort = "Sarka Hood Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_hood_teal.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_hood_teal.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_hood_teal.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_hood_teal.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_hood_damage_teal.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_hood_damage_teal.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_hood_destruct_teal.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Sarka_Trunk_Teal: Sedan_02_Trunk
    {
        scope = 2;
        displayName = "Sarka Trunk Teal";
        descriptionShort = "Sarka Trunk Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_trunk_teal.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\teal\sedan_02_trunk_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_trunk_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_trunk_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_trunk_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_trunk_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\teal\sedan_02_trunk_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    }; 

    // Urb
    class Bags_Sarka_Urb: Sedan_02
    {
        scope = 2;
        displayName = "Sarka Urban";
        descriptionShort = "Sarka Urban";

        hiddenSelections[] = 
        {
			"light_1_1",
			"light_2_1",
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
            "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat",
            "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat",
            "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat",
            "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat",
            "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat",
            "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat",
            "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat",
            "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Sarka_Urb_Door_1_1: Sedan_02_Door_1_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Urb";
        descriptionShort = "Sarka Driver Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_urb.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Bags_Sarka_Urb_Door_2_1: Sedan_02_Door_2_1
    {
        scope = 2;
        displayName = "Sarka Driver Door Urb";
        descriptionShort = "Sarka Driver Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_urb.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_fore_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Sarka_Urb_Door_1_2: Sedan_02_Door_1_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Urb";
        descriptionShort = "Sarka Driver Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_urb.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Sarka_Urb_Door_2_2: Sedan_02_Door_2_2
    {
        scope = 2;
        displayName = "Sarka Driver Door Urb";
        descriptionShort = "Sarka Driver Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_urb.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_door_aft_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Sarka_Hood_Urb: Sedan_02_Hood
    {
        scope = 2;
        displayName = "Sarka Hood Urb";
        descriptionShort = "Sarka Hood Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_hood_urb.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_hood_urb.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_hood_urb.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_hood_urb.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_hood_damage_urb.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_hood_damage_urb.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_hood_destruct_urb.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Sarka_Trunk_Urb: Sedan_02_Trunk
    {
        scope = 2;
        displayName = "Sarka Trunk Urb";
        descriptionShort = "Sarka Trunk Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_trunk_urb.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\sedan_02\urb\sedan_02_trunk_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_trunk_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_trunk_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_trunk_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_trunk_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\sedan_02\urb\sedan_02_trunk_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };  
};