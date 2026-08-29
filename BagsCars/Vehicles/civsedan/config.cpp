class CfgPatches
{
    class Bags_Olga
    {
        units[] = {
            "Bags_Olga_blue",
            "Bags_Olga_cc",
            "Bags_Olga_erdl",
            "Bags_Olga_green",
            "Bags_Olga_orange",
            "Bags_Olga_pink",
            "Bags_Olga_teal",
            "Bags_Olga_urb",
            "Bags_Olga_yellow"
        };
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
    class CivilianSedan;
    class Reflector_1_1;
	class Reflector_2_1;
	class CivSedan_Hood;
	class CivSedan_Trunk;
	class CivSedan_Doors_Driver;
	class CivSedan_Doors_CoDriver;
	class CivSedan_Doors_BackLeft;
	class CivSedan_Doors_BackRight;

    // Blue
    class Bags_Olga_Blue: CivilianSedan
    {
        scope = 2;
        displayName = "Olga Blue";
        descriptionShort = "Olga Blue";

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
            "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat",
            "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat",
            "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat",
            "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat",
            "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat",
            "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat",
            "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat",
            "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat",
            "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Olga_Doors_Driver_Blue: CivSedanDoors_Driver
    {
        scope = 2;
        displayName = "Olga Driver Door Blue";
        descriptionShort = "Olga Driver Door Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Olga_Doors_CoDriver_Blue: CivSedanDoors_CoDriver
    {
        scope = 2;
        displayName = "Olga Co-Driver Door Blue";
        descriptionShort = "Olga Co-Driver Door Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Olga_Doors_BackRight_Blue: CivSedanDoors_BackRight
    {
        scope = 2;
        displayName = "Olga Back Right Door Blue";
        descriptionShort = "Olga Back Right Door Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Olga_Doors_BackLeft_Blue: CivSedanDoors_BackLeft
    {
        scope = 2;
        displayName = "Olga Back Left Door Blue";
        descriptionShort = "Olga Back Left Door Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blueb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Olga_Hood_Blue: CivSedanHood
    {
        scope = 2;
        displayName = "Olga Hood Blue";
        descriptionShort = "Olga Hood Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Olga_Trunk_Blue: CivSedanTrunk
    {
        scope = 2;
        displayName = "Olga Trunk Blue";
        descriptionShort = "Olga Trunk Blue";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\blue\civiliansedan_blue_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // CC
    class Bags_Olga_CC: CivilianSedan
    {
        scope = 2;
        displayName = "Olga 6-Color Desert (CC)";
        descriptionShort = "Olga 6-Color Desert (CC)";

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
            "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat",
            "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat",
            "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat",
            "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat",
            "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat",
            "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat",
            "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat",
            "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat",
            "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Olga_Doors_Driver_cc: CivSedanDoors_Driver
    {
        scope = 2;
        displayName = "Olga Driver Door CC";
        descriptionShort = "Olga Driver Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Olga_Doors_CoDriver_CC: CivSedanDoors_CoDriver
    {
        scope = 2;
        displayName = "Olga CoDriver Door CC";
        descriptionShort = "Olga CoDriver Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };


    // BackRight Door
    class Bags_Olga_Doors_BackRight_CC: CivSedanDoors_BackRight
    {
        scope = 2;
        displayName = "Olga Back Right Door CC";
        descriptionShort = "Olga Back Right Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Olga_Doors_BackLeft_CC: CivSedanDoors_BackLeft
    {
        scope = 2;
        displayName = "Olga Back Left Door CC";
        descriptionShort = "Olga Back Left Door CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_ccb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Olga_Hood_CC: CivSedanHood
    {
        scope = 2;
        displayName = "Olga CC Hood";
        descriptionShort = "Olga CC Hood";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Olga_Trunk_CC: CivSedanTrunk
    {
        scope = 2;
        displayName = "Olga Trunk CC";
        descriptionShort = "Olga Trunk CC";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\cc\civiliansedan_cc_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Erdl
    class Bags_Olga_ERDL: CivilianSedan
    {
        scope = 2;
        displayName = "Olga Woodland (ERDL)";
        descriptionShort = "Olga Woodland (ERDL)";

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
            "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat",
            "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat",
            "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat",
            "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat",
            "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat",
            "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat",
            "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat",
            "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat",
            "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Olga_Doors_Driver_ERDL: CivSedanDoors_Driver
    {
        scope = 2;
        displayName = "Olga Driver Door ERDL";
        descriptionShort = "Olga Driver Door ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Olga_Doors_CoDriver_ERDL: CivSedanDoors_CoDriver
    {
        scope = 2;
        displayName = "Olga Co-Driver Door ERDL";
        descriptionShort = "Olga Co-Driver Door ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Olga_Doors_BackRight_ERDL: CivSedanDoors_BackRight
    {
        scope = 2;
        displayName = "Olga Back Right Door ERDL";
        descriptionShort = "Olga Back Right Door ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Olga_Doors_BackLeft_ERDL: CivSedanDoors_BackLeft
    {
        scope = 2;
        displayName = "Olga Back Left Door ERDL";
        descriptionShort = "Olga Back Left Door ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdlb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Olga_Hood_ERDL: CivSedanHood
    {
        scope = 2;
        displayName = "Olga Hood ERDL";
        descriptionShort = "Olga Hood ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Olga_Trunk_ERDL: CivSedanTrunk
    {
        scope = 2;
        displayName = "Olga Trunk ERDL";
        descriptionShort = "Olga Trunk ERDL";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\erdl\civiliansedan_erdl_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Green
    class Bags_Olga_Green: CivilianSedan
    {
        scope = 2;
        displayName = "Olga Green";
        descriptionShort = "Olga Green";

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
            "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat",
            "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat",
            "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat",
            "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat",
            "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat",
            "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat",
            "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat",
            "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat",
            "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Olga_Doors_Driver_Green: CivSedanDoors_Driver
    {
        scope = 2;
        displayName = "Olga Driver Door Green";
        descriptionShort = "Olga Driver Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Olga_Doors_CoDriver_Green: CivSedanDoors_CoDriver
    {
        scope = 2;
        displayName = "Olga Co-Driver Door Green";
        descriptionShort = "Olga Co-Driver Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Bags_Olga_Doors_BackRight_Green: CivSedanDoors_BackRight
    {
        scope = 2;
        displayName = "Olga Back Right Door Green";
        descriptionShort = "Olga Back Right Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Olga_Doors_BackLeft_Green: CivSedanDoors_BackLeft
    {
        scope = 2;
        displayName = "Olga Back Left Door Green";
        descriptionShort = "Olga Back Left Door Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_greenb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Olga_Hood_Green: CivSedanHood
    {
        scope = 2;
        displayName = "Olga Hood Green";
        descriptionShort = "Olga Hood Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Olga_Trunk_Green: CivSedanTrunk
    {
        scope = 2;
        displayName = "Olga Trunk Green";
        descriptionShort = "Olga Trunk Green";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\green\civiliansedan_green_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Orange
    class Bags_Olga_Orange: CivilianSedan
    {
        scope = 2;
        displayName = "Olga Orange";
        descriptionShort = "Olga Orange";

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
            "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat",
            "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat",
            "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat",
            "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat",
            "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat",
            "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat",
            "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat",
            "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat",
            "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Olga_Doors_Driver_Orange: CivSedanDoors_Driver
    {
        scope = 2;
        displayName = "Olga Driver Door Orange";
        descriptionShort = "Olga Driver Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Olga_Doors_CoDriver_Orange: CivSedanDoors_CoDriver
    {
        scope = 2;
        displayName = "Olga Co-Driver Door Orange";
        descriptionShort = "Olga Co-Driver Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };


    // BackRight Door
    class Bags_Olga_Doors_BackRight_Orange: CivSedanDoors_BackRight
    {
        scope = 2;
        displayName = "Olga Back Right Door Orange";
        descriptionShort = "Olga Back Right Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Olga_Doors_BackLeft_Orange: CivSedanDoors_BackLeft
    {
        scope = 2;
        displayName = "Olga Back left Door Orange";
        descriptionShort = "Olga Back Left Door Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orangeb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Olga_Hood_Orange: CivSedanHood
    {
        scope = 2;
        displayName = "Olga Hood Orange";
        descriptionShort = "Olga Hood Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Olga_Trunk_Orange: CivSedanTrunk
    {
        scope = 2;
        displayName = "Olga Trunk Orange";
        descriptionShort = "Olga Trunk Orange";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\orange\civiliansedan_orange_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };
    
    // Pink
    class Bags_Olga_Pink: CivilianSedan
    {
        scope = 2;
        displayName = "Olga Pink";
        descriptionShort = "Olga Pink";

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
            "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat",
            "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat",
            "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat",
            "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat",
            "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat",
            "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat",
            "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat",
            "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat",
            "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Olga_Doors_Driver_Pink: CivSedanDoors_Driver
    {
        scope = 2;
        displayName = "Olga Driver Door Pink";
        descriptionShort = "Olga Driver Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Olga_Doors_CoDriver_Pink: CivSedanDoors_CoDriver
    {
        scope = 2;
        displayName = "Olga Co-Driver Door Pink";
        descriptionShort = "Olga Co-Driver Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };


    // BackRight Door
    class Bags_Olga_Doors_BackRight_Pink: CivSedanDoors_BackRight
    {
        scope = 2;
        displayName = "Olga Back Right Door Pink";
        descriptionShort = "Olga Back Right Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Olga_Doors_BackLeft_Pink: CivSedanDoors_BackLeft
    {
        scope = 2;
        displayName = "Olga Back Left Door Pink";
        descriptionShort = "Olga Back Left Door Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pinkb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Olga_Hood_Pink: CivSedanHood
    {
        scope = 2;
        displayName = "Olga Hood Pink";
        descriptionShort = "Olga Hood Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Olga_Trunk_Pink: CivSedanTrunk
    {
        scope = 2;
        displayName = "Olga Trunk Pink";
        descriptionShort = "Olga Trunk Pink";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\pink\civiliansedan_pink_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Teal
    class Bags_Olga_Teal: CivilianSedan
    {
        scope = 2;
        displayName = "Olga Teal";
        descriptionShort = "Olga Teal";

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
            "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat",
            "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat",
            "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat",
            "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat",
            "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat",
            "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat",
            "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat",
            "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat",
            "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Olga_Doors_Driver_Teal: CivSedanDoors_Driver
    {
        scope = 2;
        displayName = "Olga Driver Door Teal";
        descriptionShort = "Olga Driver Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Olga_Doors_CoDriver_Teal: CivSedanDoors_CoDriver
    {
        scope = 2;
        displayName = "Olga Co-Driver Door Teal";
        descriptionShort = "Olga Co-Driver Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };


    // BackRight Door
    class Bags_Olga_Doors_BackRight_Teal: CivSedanDoors_BackRight
    {
        scope = 2;
        displayName = "Olga Back Right Door Teal";
        descriptionShort = "Olga Back Right Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Olga_Doors_BackLeft_Teal: CivSedanDoors_BackLeft
    {
        scope = 2;
        displayName = "Olga Back Left Door Teal";
        descriptionShort = "Olga Back Left Door Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_tealb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Olga_Hood_Teal: CivSedanHood
    {
        scope = 2;
        displayName = "Olga Hood Teal";
        descriptionShort = "Olga Hood Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Olga_Trunk_Teal: CivSedanTrunk
    {
        scope = 2;
        displayName = "Olga Trunk Teal";
        descriptionShort = "Olga Trunk Teal";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\teal\civiliansedan_teal_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Urb
    class Bags_Olga_Urb: CivilianSedan
    {
        scope = 2;
        displayName = "Olga Urban";
        descriptionShort = "Olga Urban";

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
            "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat",
            "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat",
            "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat",
            "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat",
            "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat",
            "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat",
            "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat",
            "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat",
            "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Olga_Doors_Driver_Urb: CivSedanDoors_Driver
    {
        scope = 2;
        displayName = "Olga Driver Door Urb";
        descriptionShort = "Olga Driver Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Olga_Doors_CoDriver_Urb: CivSedanDoors_CoDriver
    {
        scope = 2;
        displayName = "Olga Co-Driver Door Urb";
        descriptionShort = "Olga Co-Driver Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };


    // BackRight Door
    class Bags_Olga_Doors_BackRight_Urb: CivSedanDoors_BackRight
    {
        scope = 2;
        displayName = "Olga Back Right Door Urb";
        descriptionShort = "Olga Back Right Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Olga_Doors_BackLeft_Urb: CivSedanDoors_BackLeft
    {
        scope = 2;
        displayName = "Olga Back Left Door Urb";
        descriptionShort = "Olga Back Left Door Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urbb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Olga_Hood_Urb: CivSedanHood
    {
        scope = 2;
        displayName = "Olga Hood Urb";
        descriptionShort = "Olga Hood Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Olga_Trunk_Urb: CivSedanTrunk
    {
        scope = 2;
        displayName = "Olga Trunk Urb";
        descriptionShort = "Olga Trunk Urb";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\urb\civiliansedan_urb_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Yellow
    class Bags_Olga_Yellow: CivilianSedan
    {
        scope = 2;
        displayName = "Olga Yellow";
        descriptionShort = "Olga Yellow";

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
            "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat",
            "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat",
            "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat",
            "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat",
            "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat",
            "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat",
            "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat",
            "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat",
            "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Bags_Olga_Doors_Driver_Yellow: CivSedanDoors_Driver
    {
        scope = 2;
        displayName = "Olga Driver Door Yellow";
        descriptionShort = "Olga Driver Door Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Bags_Olga_Doors_CoDriver_Yellow: CivSedanDoors_CoDriver
    {
        scope = 2;
        displayName = "Olga Co-Driver Door Yellow";
        descriptionShort = "Olga Co-Driver Door Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };


    // BackRight Door
    class Bags_Olga_Doors_BackRight_Yellow: CivSedanDoors_BackRight
    {
        scope = 2;
        displayName = "Olga Back Right Door Yellow";
        descriptionShort = "Olga Back Right Door Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
        
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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Bags_Olga_Doors_BackLeft_Yellow: CivSedanDoors_BackLeft
    {
        scope = 2;
        displayName = "Olga Back Left Door Yellow";
        descriptionShort = "Olga Back Left Door Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellowb.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Bags_Olga_Hood_Yellow: CivSedanHood
    {
        scope = 2;
        displayName = "Olga Hood Yellow";
        descriptionShort = "Olga Hood Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                    healthLevels[] =
                    {
                        {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                        {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                        {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                        {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                        {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Bags_Olga_Trunk_Yellow: CivSedanTrunk
    {
        scope = 2;
        displayName = "Olga Trunk Yellow";
        descriptionShort = "Olga Trunk Yellow";
        hiddenSelectionsMaterials[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };

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
                        RefTexsMats[] = { "BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.7, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow.rvmat"}},
                            {0.5, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.3, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_damage.rvmat"}},
                            {0.0, {"BagsCars\Vehicles\civsedan\yellow\civiliansedan_yellow_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };
};