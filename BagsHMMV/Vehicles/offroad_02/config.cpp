class CfgPatches
{
    class Offroad3
    {
        units[] = {
            "Offroad_02_Tan"
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
    class Offroad_02;
    class Offroad_02_Door_1_1;
    class Offroad_02_Door_2_1;
    class Offroad_02_Door_1_2;
    class Offroad_02_Door_2_2;
    class Offroad_02_Hood;
    class Offroad_02_Trunk;

    // Tan
    class Offroad_02_Tan: Offroad_02
    {
        scope = 2;
        displayName = "M1025 Tan";
        descriptionShort = "M1025 Tan";

		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard"
		};

        hiddenSelectionsTextures[] =
        {
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat"
        };

        hiddenSelectionsMaterials[] = 
        {
            "dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\offroad_02_gauges_e_nolight.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat",
            "BagsCars\Vehicles\offroad_02\tan\offroad_02_base_tan.rvmat"
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
                        RefTexsMats[] = { "dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_destruct.rvmat"}}
                        };
                    };
                };

                class Front
                {
                    class Health
                    {
                        RefTexsMats[] = { "dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_destruct.rvmat"}}
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        RefTexsMats[] = { "dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_1_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_1
                {
                    class Health
                    {
                        RefTexsMats[] = { "dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        RefTexsMats[] = { "dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_destruct.rvmat"}}
                        };
                    };
                };

                class FuelTank
                {
                    class Health
                    {
                        RefTexsMats[] = { "dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat" };
                        healthLevels[] =
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"}},
                            {0.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };
};