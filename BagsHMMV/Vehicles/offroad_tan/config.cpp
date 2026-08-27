class CfgPatches
{
    class BagsOffroad_02
    {
        units[] = {
            "Offroad_Tan",
            "Offroad_Tan_Hood",
            "Offroad_Tan_Trunk",
            "Offroad_Tan_Door_1_1",
            "Offroad_Tan_Door_2_1",
            "Offroad_Tan_Door_1_2",
            "Offroad_Tan_Door_2_2"
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
    class Reflector_1_1;
    class Reflector_2_1;
    class Offroad_02_Hood;
    class Offroad_02_Trunk;
    class Offroad_02_Door_1_1;
    class Offroad_02_Door_2_1;
    class Offroad_02_Door_1_2;
    class Offroad_02_Door_2_2;

    // Tan HMMV
    class Offroad_Tan: Offroad_02
    {
        scope = 2;
        displayName = "Offroad Tan";
        descriptionShort = "Offroad Tan";
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
        hiddenSelectionsTextures[]=
        {
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base.paa",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base.paa",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base.paa",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base.paa",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base.paa",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base.paa",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base.paa",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base.paa",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat",
            "dz\vehicles\wheeled\Offroad_02\data\Offroad_02_gauges_e_nolight.rvmat",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"
        };

        class DamageSystem
        {
            class DamageZones
            {
            class Chassis
                {
                    class Health
                    {
                        RefTexsMats[]=
                        {
                            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"
                        };
                        healthLevels[]=
                        {
                            {
                                1.0,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"
                                }
                            },
                            {
                                0.7,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"
                                }
                            },
                            {
                                0.5,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat"
                                }
                            },
                            {
                                0.3,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat"
                                }
                            },
                            {
                                0.0,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_destruct.rvmat"
                                }
                            }
                        };
                    };
                };
                
                class Front
                {
                    class Health
                    {
                        healthLevels[]=
                        {
                            {
                                1.0,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"
                                }
                            },
                            {
                                0.7,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"
                                }
                            },
                            {
                                0.5,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_damage.rvmat"
                                }
                            },
                            {
                                0.3,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat"
                                }
                            },
                            {
                                0.0,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_destruct.rvmat"
                                }
                            }
                        };
                    };
                };

                class Roof
                {
                    class Health
                    {   
                        healthLevels[]=
                        {
                            {
                                1.0,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
                                }
                            },
                            {
                                0.7,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
                                }
                            },
                            {
                                0.5,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat",
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"
                                }
                            },
                            {
                                0.3,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat",
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"
                                }
                            },
                            {
                                0.0,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_destruct.rvmat",
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_destruct.rvmat"
                                }
                            }
                        };
                    };
                };

                class Back
                {
                    class Health
                    {
                        healthLevels[]=
                        {
                            {
                                1.0,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base.rvmat"
                                }
                            },
                            {
                                0.7,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base.rvmat"
                                }
                            },
                            {
                                0.5,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat",
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_damage.rvmat"
                                }
                            },
                            {
                                0.3,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat",
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_damage.rvmat"
                                }
                            },
                            {
                                0.0,
                                {
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_destruct.rvmat",
                                    "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_destruct.rvmat"
                                }
                            }
                        };
                    };
                };

                class Fender_1_1
                {
                    class Health
                    {
                        healthLevels[]=
                        {
                            {1.0, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat", "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"}},
                            {0.7, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat", "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"}},
                            {0.5, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat", "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"}},
                            {0.3, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat", "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"}},
                            {0.0, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_destruct.rvmat", "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_destruct.rvmat"}}
                        };
                    };
                };

                class Fender_2_2
                {
                    class Health
                    {
                        healthLevels[]=
                        {
                            {1.0, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat", "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"}},
                            {0.7, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat", "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"}},
                            {0.5, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat", "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"}},
                            {0.3, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat", "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"}},
                            {0.0, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_destruct.rvmat", "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_destruct.rvmat"}}
                        };
                    };
                };

                class Doors
                {
                    class Health
                    {
                        healthLevels[]=
                        {
                            {1.0, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"}},
                            {0.7, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"}},
                            {0.5, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"}},
                            {0.3, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"}},
                            {0.0, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };

    // Driver Door
    class Offroad_Tan_Door_1_1: Offroad_02_Door_1_1
    {
        scope = 2;
        displayName = "Offroad Driver Door Tan";
        descriptionShort = "Offroad Driver Door Tan";
        hiddenSelectionsMaterials[]=
        {
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
        };        
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
                        healthLevels[]=
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_damage.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint_damage.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_destruct.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint_destruct.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_destruct.rvmat"}},
                            {0.0, {"hidden", "hidden", "hidden"}}
                        };
                    };
                };
            };
        };
    };

    // Co-Driver Door
    class Offroad_Tan_Door_2_1: Offroad_02_Door_2_1
    {
        scope = 2;
        displayName = "Offroad Co-Driver Door Tan";
        descriptionShort = "Offroad Co-Driver Door Tan";
        hiddenSelectionsMaterials[]=
        {
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
        };
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
                        healthLevels[]=
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_damage.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint_damage.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_destruct.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint_destruct.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_destruct.rvmat"}},
                            {0.0, {"hidden", "hidden", "hidden"}}
                        };
                    };
                };
            };
        };
    };

    // BackRight Door
    class Offroad_Tan_Door_2_2: Offroad_02_Door_2_2
    {
        scope = 2;
        displayName = "Offroad Back Right Door Tan";
        descriptionShort = "Offroad Back Right Door Tan";
        hiddenSelectionsMaterials[]=
        {
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
        };        
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
                        healthLevels[]=
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_damage.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint_damage.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_destruct.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint_destruct.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_destruct.rvmat"}},
                            {0.0, {"hidden", "hidden", "hidden"}}
                        };
                    };
                };
            };
        };
    };

    // BackLeft Door
    class Offroad_Tan_Door_1_2: Offroad_02_Door_1_2
    {
        scope = 2;
        displayName = "Offroad Back Left Door Tan";
        descriptionShort = "Offroad Back Left Door Tan";
        hiddenSelectionsMaterials[]=
        {
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
        };
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
                        healthLevels[]=
                        {
                            {1.0, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"}},
                            {0.7, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"}},
                            {0.5, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_damage.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint_damage.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_damage.rvmat"}},
                            {0.3, {"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_destruct.rvmat", "dz\vehicles\wheeled\offroad_02\data\default_glassint_destruct.rvmat", "dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_destruct.rvmat"}},
                            {0.0, {"hidden", "hidden", "hidden"}}
                        };
                    };
                };
            };
        };
    };

    // Hood
    class Offroad_Tan_Hood: Offroad_02_Hood
    {
        scope = 2;
        displayName = "Offroad Hood Tan";
        descriptionShort = "Offroad Hood Tan";
        hiddenSelectionsMaterials[]=
        {
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"
        };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    healthLevels[]=
                    {
                        {1.0, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"}},
                        {0.7, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"}},
                        {0.5, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat"}},
                        {0.3, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_damage.rvmat"}},
                        {0.0, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    // Trunk
    class Offroad_Tan_Trunk: Offroad_02_Trunk
    {
        scope = 2;
        displayName = "Offroad Trunk Tan";
        descriptionShort = "Offroad Trunk Tan";
        hiddenSelectionsMaterials[]=
        {
            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
        };

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
                        RefTexsMats[]=
                        {
                            "BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
                        };
                        healthLevels[]=
                        {
                            {1.0, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"}},
                            {0.7, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"}},
                            {0.5, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"}},
                            {0.3, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"}},
                            {0.0, {"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_destruct.rvmat"}}
                        };
                    };
                };
            };
        };
    };
};