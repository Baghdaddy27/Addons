class CfgPatches
{
    class BagsHatchback
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
    class Hatchback_02;
    class Reflector_1_1;
	class Reflector_2_1;
    class Hatchback_02_Door_1_1;
    class Hatchback_02_Door_2_1;
    class Hatchback_02_Door_1_2;
    class Hatchback_02_Door_2_2;
    class Hatchback_02_Hood;
    class Hatchback_02_Trunk;
    
    // Yellow
    class Hatchback_02_Yellow: Hatchback_02
    {
        scope = 2;
        displayName = "Gunter Yellow";
        descriptionShort = "Gunter Yellow";

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
			"camo_chassi"
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
            "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat",
            "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat",
            "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat",
            "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat",
            "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat",
            "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat",
            "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat",
            "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_destruct_yellow.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_body_destruct_yellow.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Hatchback_02_Yellow_Door_1_1: Hatchback_02_Door_1_1
    {
        scope = 2;
        displayName = "Gunter Driver Door Yellow";
        descriptionShort = "Gunter Driver Door Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_yellow.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_destruct_yellow.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Hatchback_02_Yellow_Door_2_1: Hatchback_02_Door_2_1
    {
        scope = 2;
        displayName = "Gunter CoDriver Door Yellow";
        descriptionShort = "Gunter CoDriver Door Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_yellow.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_frontdoor_destruct_yellow.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Hatchback_02_Yellow_Door_1_2: Hatchback_02_Door_1_2
    {
        scope = 2;
        displayName = "Gunter Back Left Door Yellow";
        descriptionShort = "Gunter Back Left Door Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_yellow.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_destruct_yellow.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Hatchback_02_Yellow_Door_2_2: Hatchback_02_Door_2_2
    {
        scope = 2;
        displayName = "Gunter Back Right Door Yellow";
        descriptionShort = "Gunter Back Right Door Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_yellow.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_backdoor_destruct_yellow.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Hatchback_02_Hood_Yellow: Hatchback_02_Hood
    {
        scope = 2;
        displayName = "Gunter Hood Yellow";
        descriptionShort = "Gunter Hood Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_hood_yellow.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_hood_yellow.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_hood_yellow.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_hood_yellow.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_hood_damage_yellow.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_hood_damage_yellow.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_hood_destruct_yellow.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Hatchback_02_Trunk_Yellow: Hatchback_02_Trunk
    {
        scope = 2;
        displayName = "Gunter Trunk Yellow";
        descriptionShort = "Gunter Trunk Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_trunk_yellow.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_trunk_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_trunk_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_trunk_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_trunk_damage_yellow.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_trunk_damage_yellow.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\yellow\hatchback_02_trunk_destruct_yellow.rvmat"}}
                        };
                    };
                };
            };
        };
    };  
    
    // White
    class Hatchback_02_White: Hatchback_02
    {
        scope = 2;
        displayName = "Gunter White";
        descriptionShort = "Gunter White";

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
			"camo_chassi"
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
            "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat",
            "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat",
            "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat",
            "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat",
            "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat",
            "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat",
            "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat",
            "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_destruct_white.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_destruct_white.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_destruct_white.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_destruct_white.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_destruct_white.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_destruct_white.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_destruct_white.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_body_destruct_white.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Hatchback_02_White_Door_1_1: Hatchback_02_Door_1_1
    {
        scope = 2;
        displayName = "Gunter Driver Door White";
        descriptionShort = "Gunter Driver Door White";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_white.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_destruct_white.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Hatchback_02_White_Door_2_1: Hatchback_02_Door_2_1
    {
        scope = 2;
        displayName = "Gunter CoDriver Door White";
        descriptionShort = "Gunter CoDriver Door White";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_white.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_frontdoor_destruct_white.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Hatchback_02_White_Door_1_2: Hatchback_02_Door_1_2
    {
        scope = 2;
        displayName = "Gunter Back Left Door White";
        descriptionShort = "Gunter Back Left Door White";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_white.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_destruct_white.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Hatchback_02_White_Door_2_2: Hatchback_02_Door_2_2
    {
        scope = 2;
        displayName = "Gunter Back Right Door White";
        descriptionShort = "Gunter Back Right Door White";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_white.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_backdoor_destruct_white.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Hatchback_02_Hood_White: Hatchback_02_Hood
    {
        scope = 2;
        displayName = "Gunter Hood White";
        descriptionShort = "Gunter Hood White";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_hood_white.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_hood_white.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_hood_white.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_hood_white.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_hood_damage_white.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_hood_damage_white.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_hood_destruct_white.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Hatchback_02_Trunk_White: Hatchback_02_Trunk
    {
        scope = 2;
        displayName = "Gunter Trunk White";
        descriptionShort = "Gunter Trunk White";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_trunk_white.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\white\hatchback_02_trunk_white.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_trunk_white.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_trunk_white.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_trunk_damage_white.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_trunk_damage_white.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\white\hatchback_02_trunk_destruct_white.rvmat"}}
                        };
                    };
                };
            };
        };
    };        
    
    // Urb
    class Hatchback_02_Urb: Hatchback_02
    {
        scope = 2;
        displayName = "Gunter Urban";
        descriptionShort = "Gunter Urban";

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
			"camo_chassi"
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
            "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat",
            "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat",
            "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat",
            "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat",
            "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat",
            "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat",
            "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat",
            "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_body_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Hatchback_02_Urb_Door_1_1: Hatchback_02_Door_1_1
    {
        scope = 2;
        displayName = "Gunter Driver Door Urb";
        descriptionShort = "Gunter Driver Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_urb.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Hatchback_02_Urb_Door_2_1: Hatchback_02_Door_2_1
    {
        scope = 2;
        displayName = "Gunter CoDriver Door Urb";
        descriptionShort = "Gunter CoDriver Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_urb.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_frontdoor_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Hatchback_02_Urb_Door_1_2: Hatchback_02_Door_1_2
    {
        scope = 2;
        displayName = "Gunter Back Left Door Urb";
        descriptionShort = "Gunter Back Left Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_urb.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Hatchback_02_Urb_Door_2_2: Hatchback_02_Door_2_2
    {
        scope = 2;
        displayName = "Gunter Back Right Door Urb";
        descriptionShort = "Gunter Back Right Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_urb.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_backdoor_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Hatchback_02_Hood_Urb: Hatchback_02_Hood
    {
        scope = 2;
        displayName = "Gunter Hood Urb";
        descriptionShort = "Gunter Hood Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_hood_urb.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_hood_urb.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_hood_urb.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_hood_urb.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_hood_damage_urb.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_hood_damage_urb.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_hood_destruct_urb.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Hatchback_02_Trunk_Urb: Hatchback_02_Trunk
    {
        scope = 2;
        displayName = "Gunter Trunk Urb";
        descriptionShort = "Gunter Trunk Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_trunk_urb.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\urb\hatchback_02_trunk_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_trunk_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_trunk_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_trunk_damage_urb.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_trunk_damage_urb.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\urb\hatchback_02_trunk_destruct_urb.rvmat"}}
                        };
                    };
                };
            };
        };
    };  
    
    // Teal
    class Hatchback_02_Teal: Hatchback_02
    {
        scope = 2;
        displayName = "Gunter Teal";
        descriptionShort = "Gunter Teal";

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
			"camo_chassi"
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
            "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat",
            "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat",
            "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat",
            "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat",
            "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat",
            "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat",
            "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat",
            "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_body_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Hatchback_02_Teal_Door_1_1: Hatchback_02_Door_1_1
    {
        scope = 2;
        displayName = "Gunter Driver Door Teal";
        descriptionShort = "Gunter Driver Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_teal.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Hatchback_02_Teal_Door_2_1: Hatchback_02_Door_2_1
    {
        scope = 2;
        displayName = "Gunter CoDriver Door Teal";
        descriptionShort = "Gunter CoDriver Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_teal.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_frontdoor_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Hatchback_02_Teal_Door_1_2: Hatchback_02_Door_1_2
    {
        scope = 2;
        displayName = "Gunter Back Left Door Teal";
        descriptionShort = "Gunter Back Left Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_teal.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Hatchback_02_Teal_Door_2_2: Hatchback_02_Door_2_2
    {
        scope = 2;
        displayName = "Gunter Back Right Door Teal";
        descriptionShort = "Gunter Back Right Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_teal.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_backdoor_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Hatchback_02_Hood_Teal: Hatchback_02_Hood
    {
        scope = 2;
        displayName = "Gunter Hood Teal";
        descriptionShort = "Gunter Hood Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_hood_teal.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_hood_teal.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_hood_teal.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_hood_teal.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_hood_damage_teal.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_hood_damage_teal.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_hood_destruct_teal.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Hatchback_02_Trunk_Teal: Hatchback_02_Trunk
    {
        scope = 2;
        displayName = "Gunter Trunk Teal";
        descriptionShort = "Gunter Trunk Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_trunk_teal.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\teal\hatchback_02_trunk_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_trunk_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_trunk_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_trunk_damage_teal.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_trunk_damage_teal.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\teal\hatchback_02_trunk_destruct_teal.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Pink
    class Hatchback_02_Pink: Hatchback_02
    {
        scope = 2;
        displayName = "Gunter Pink";
        descriptionShort = "Gunter Pink";

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
			"camo_chassi"
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
            "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat",
            "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat",
            "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat",
            "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat",
            "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat",
            "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat",
            "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat",
            "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_body_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Hatchback_02_Pink_Door_1_1: Hatchback_02_Door_1_1
    {
        scope = 2;
        displayName = "Gunter Driver Door Pink";
        descriptionShort = "Gunter Driver Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_pink.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Hatchback_02_Pink_Door_2_1: Hatchback_02_Door_2_1
    {
        scope = 2;
        displayName = "Gunter CoDriver Door Pink";
        descriptionShort = "Gunter CoDriver Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_pink.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_frontdoor_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Hatchback_02_Pink_Door_1_2: Hatchback_02_Door_1_2
    {
        scope = 2;
        displayName = "Gunter Back Left Door Pink";
        descriptionShort = "Gunter Back Left Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_pink.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Hatchback_02_Pink_Door_2_2: Hatchback_02_Door_2_2
    {
        scope = 2;
        displayName = "Gunter Back Right Door Pink";
        descriptionShort = "Gunter Back Right Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_pink.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_backdoor_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Hatchback_02_Hood_Pink: Hatchback_02_Hood
    {
        scope = 2;
        displayName = "Gunter Hood Pink";
        descriptionShort = "Gunter Hood Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_hood_pink.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_hood_pink.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_hood_pink.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_hood_pink.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_hood_damage_pink.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_hood_damage_pink.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_hood_destruct_pink.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Hatchback_02_Trunk_Pink: Hatchback_02_Trunk
    {
        scope = 2;
        displayName = "Gunter Trunk Pink";
        descriptionShort = "Gunter Trunk Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_trunk_pink.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\pink\hatchback_02_trunk_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_trunk_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_trunk_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_trunk_damage_pink.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_trunk_damage_pink.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\pink\hatchback_02_trunk_destruct_pink.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Orange
    class Hatchback_02_Orange: Hatchback_02
    {
        scope = 2;
        displayName = "Gunter Orange";
        descriptionShort = "Gunter Orange";

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
			"camo_chassi"
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
            "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat",
            "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat",
            "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat",
            "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat",
            "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat",
            "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat",
            "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat",
            "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_body_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Hatchback_02_Orange_Door_1_1: Hatchback_02_Door_1_1
    {
        scope = 2;
        displayName = "Gunter Driver Door Orange";
        descriptionShort = "Gunter Driver Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_orange.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Hatchback_02_Orange_Door_2_1: Hatchback_02_Door_2_1
    {
        scope = 2;
        displayName = "Gunter CoDriver Door Orange";
        descriptionShort = "Gunter CoDriver Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_orange.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_frontdoor_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Hatchback_02_Orange_Door_1_2: Hatchback_02_Door_1_2
    {
        scope = 2;
        displayName = "Gunter Back Left Door Orange";
        descriptionShort = "Gunter Back Left Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_orange.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Hatchback_02_Orange_Door_2_2: Hatchback_02_Door_2_2
    {
        scope = 2;
        displayName = "Gunter Back Right Door Orange";
        descriptionShort = "Gunter Back Right Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_orange.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_backdoor_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Hatchback_02_Hood_Orange: Hatchback_02_Hood
    {
        scope = 2;
        displayName = "Gunter Hood Orange";
        descriptionShort = "Gunter Hood Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_hood_orange.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_hood_orange.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_hood_orange.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_hood_orange.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_hood_damage_orange.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_hood_damage_orange.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_hood_destruct_orange.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Hatchback_02_Trunk_Orange: Hatchback_02_Trunk
    {
        scope = 2;
        displayName = "Gunter Trunk Orange";
        descriptionShort = "Gunter Trunk Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_trunk_orange.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\orange\hatchback_02_trunk_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_trunk_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_trunk_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_trunk_damage_orange.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_trunk_damage_orange.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\orange\hatchback_02_trunk_destruct_orange.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Green
    class Hatchback_02_Green: Hatchback_02
    {
        scope = 2;
        displayName = "Gunter Green";
        descriptionShort = "Gunter Green";

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
			"camo_chassi"
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
            "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat",
            "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat",
            "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat",
            "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat",
            "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat",
            "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat",
            "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat",
            "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_destruct_green.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_body_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Hatchback_02_Green_Door_1_1: Hatchback_02_Door_1_1
    {
        scope = 2;
        displayName = "Gunter Driver Door Green";
        descriptionShort = "Gunter Driver Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_green.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Hatchback_02_Green_Door_2_1: Hatchback_02_Door_2_1
    {
        scope = 2;
        displayName = "Gunter CoDriver Door Green";
        descriptionShort = "Gunter CoDriver Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_green.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_frontdoor_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Hatchback_02_Green_Door_1_2: Hatchback_02_Door_1_2
    {
        scope = 2;
        displayName = "Gunter Back Left Door Green";
        descriptionShort = "Gunter Back Left Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_green.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Hatchback_02_Green_Door_2_2: Hatchback_02_Door_2_2
    {
        scope = 2;
        displayName = "Gunter Back Right Door Green";
        descriptionShort = "Gunter Back Right Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_green.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_backdoor_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Hatchback_02_Hood_Green: Hatchback_02_Hood
    {
        scope = 2;
        displayName = "Gunter Hood Green";
        descriptionShort = "Gunter Hood Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_hood_green.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_hood_green.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_hood_green.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_hood_green.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_hood_damage_green.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_hood_damage_green.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_hood_destruct_green.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Hatchback_02_Trunk_Green: Hatchback_02_Trunk
    {
        scope = 2;
        displayName = "Gunter Trunk Green";
        descriptionShort = "Gunter Trunk Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_trunk_green.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\green\hatchback_02_trunk_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_trunk_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_trunk_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_trunk_damage_green.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_trunk_damage_green.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\green\hatchback_02_trunk_destruct_green.rvmat"}}
                        };
                    };
                };
            };
        };
    };    
        
    // ERDL
    class Hatchback_02_ERDL: Hatchback_02
    {
        scope = 2;
        displayName = "Gunter Woodland (ERDL)";
        descriptionShort = "Gunter Woodland (ERDL)";

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
			"camo_chassi"
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
            "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat",
            "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat",
            "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat",
            "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat",
            "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat",
            "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat",
            "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat",
            "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_body_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Hatchback_02_ERDL_Door_1_1: Hatchback_02_Door_1_1
    {
        scope = 2;
        displayName = "Gunter Driver Door ERDL";
        descriptionShort = "Gunter Driver Door ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_erdl.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Hatchback_02_ERDL_Door_2_1: Hatchback_02_Door_2_1
    {
        scope = 2;
        displayName = "Gunter CoDriver Door ERDL";
        descriptionShort = "Gunter CoDriver Door ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_erdl.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_frontdoor_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Hatchback_02_ERDL_Door_1_2: Hatchback_02_Door_1_2
    {
        scope = 2;
        displayName = "Gunter Back Left Door ERDL";
        descriptionShort = "Gunter Back Left Door ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_erdl.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Hatchback_02_ERDL_Door_2_2: Hatchback_02_Door_2_2
    {
        scope = 2;
        displayName = "Gunter Back Right Door ERDL";
        descriptionShort = "Gunter Back Right Door ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_erdl.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_backdoor_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Hatchback_02_Hood_ERDL: Hatchback_02_Hood
    {
        scope = 2;
        displayName = "Gunter Hood ERDL";
        descriptionShort = "Gunter Hood ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_hood_erdl.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_hood_erdl.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_hood_erdl.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_hood_erdl.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_hood_damage_erdl.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_hood_damage_erdl.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_hood_destruct_erdl.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Hatchback_02_Trunk_ERDL: Hatchback_02_Trunk
    {
        scope = 2;
        displayName = "Gunter Trunk ERDL";
        descriptionShort = "Gunter Trunk ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_trunk_erdl.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_trunk_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_trunk_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_trunk_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_trunk_damage_erdl.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_trunk_damage_erdl.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\erdl\hatchback_02_trunk_destruct_erdl.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CC
    class Hatchback_02_CC: Hatchback_02
    {
        scope = 2;
        displayName = "Gunter Desert (CC)";
        descriptionShort = "Gunter Desert (CC)";

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
			"camo_chassi"
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
            "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat",
            "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat",
            "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat",
            "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat",
            "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat",
            "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat",
            "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat",
            "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_body_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Hatchback_02_CC_Door_1_1: Hatchback_02_Door_1_1
    {
        scope = 2;
        displayName = "Gunter Driver Door CC";
        descriptionShort = "Gunter Driver Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_cc.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CoDriver Door
    class Hatchback_02_CC_Door_2_1: Hatchback_02_Door_2_1
    {
        scope = 2;
        displayName = "Gunter CoDriver Door CC";
        descriptionShort = "Gunter CoDriver Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_cc.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_frontdoor_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Hatchback_02_CC_Door_1_2: Hatchback_02_Door_1_2
    {
        scope = 2;
        displayName = "Gunter Back Left Door CC";
        descriptionShort = "Gunter Back Left Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_cc.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Hatchback_02_CC_Door_2_2: Hatchback_02_Door_2_2
    {
        scope = 2;
        displayName = "Gunter Back Right Door CC";
        descriptionShort = "Gunter Back Right Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_cc.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_backdoor_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Hatchback_02_Hood_CC: Hatchback_02_Hood
    {
        scope = 2;
        displayName = "Gunter Hood CC";
        descriptionShort = "Gunter Hood CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_hood_cc.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_hood_cc.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_hood_cc.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_hood_cc.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_hood_damage_cc.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_hood_damage_cc.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_hood_destruct_cc.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Hatchback_02_Trunk_CC: Hatchback_02_Trunk
    {
        scope = 2;
        displayName = "Gunter Trunk CC";
        descriptionShort = "Gunter Trunk CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_trunk_cc.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\hatchback_02\cc\hatchback_02_trunk_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_trunk_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_trunk_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_trunk_damage_cc.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_trunk_damage_cc.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\hatchback_02\cc\hatchback_02_trunk_destruct_cc.rvmat"}}
                        };
                    };
                };
            };
        };
    };
};