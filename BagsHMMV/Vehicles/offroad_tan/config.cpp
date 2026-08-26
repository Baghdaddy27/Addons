class CfgPatches
{
    class Offroadtan
    {
        units[] = {
            
            "Offroad_tan",
            "Offroad_tan_Door_1_1",
            "Offroad_tan_Door_2_1",
            "Offroad_tan_Door_1_2",
            "Offroad_tan_Door_2_2",
            "Offroad_tan_Hood",
            "Offroad_tan_Trunk",
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
    class Offroad_tan_Door_1_1;
    class Offroad_tan_Door_2_1;
    class Offroad_tan_Door_1_2;
    class Offroad_tan_Door_2_2;
    class Offroad_tan_Hood;
    class Offroad_tan_Trunk;

    // tan
	class Offroad_tan_Door_1_1: CarDoor
	{
		scope=2;
		displayName="M1025 Tan Driver Door";
		descriptionShort="$STR_Offroad_tan_Door_1_11";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_tan_Door_1_1.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Door_1_1"
		};
		rotationFlags=8;
		hiddenSelectionsMaterials[]=
		{
			"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						hitpoints=210;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_i.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_i.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_i_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_destruct.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint_destruct.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_i_destruct.rvmat"
								}
							},
							
							{
								0,
								"hidden",
								"hidden",
								"hidden"
							}
						};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Offroad_tan_Door_2_1: Offroad_tan_Door_1_1
	{
		displayName="M1025 Tan CoDriver Door";
		descriptionShort="$STR_Offroad_tan_Door_2_11";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_tan_Door_2_1.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Door_2_1"
		};
	};
	class Offroad_tan_Door_1_2: Offroad_tan_Door_1_1
	{
		displayName="M1025 Tan Back Left Door";
		descriptionShort="$STR_Offroad_tan_Door_1_21";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_tan_Door_1_2.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Door_1_2"
		};
	};
	class Offroad_tan_Door_2_2: Offroad_tan_Door_1_1
	{
		displayName="M1025 Tan Back Right Door";
		descriptionShort="$STR_Offroad_tan_Door_2_21";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_tan_Door_2_2.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Door_2_2"
		};
	};
	class Offroad_tan_Hood: CarDoor
	{
		scope=2;
		displayName="M1025 Tan Hood";
		descriptionShort="$STR_Offroad_tan_Hood1";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_tan_Hood.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Hood"
		};
		rotationFlags=8;
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
					hitpoints=500;
					RefTexsMats[]=
					{
						"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"
							}
						},
						
						{
							0.69999999,
							
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
							0.30000001,
							
							{
								"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Offroad_tan_Trunk: CarDoor
	{
		scope=2;
		displayName="M1025 Tan Trunk";
		descriptionShort="$STR_Offroad_tan_Trunk1";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_tan_Trunk.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Trunk"
		};
		rotationFlags=8;
		hiddenSelectionsMaterials[]=
		{
			"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					RefTexsMats[]=
					{
						"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Offroad_tan: CarScript
	{
		scope=2;
		displayName="Tan M1025";
		model="\DZ\vehicles\wheeled\Offroad_02\Offroad_02.p3d";
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"GlowPlug",
			"Offroad_tan_Hood",
			"Offroad_tan_Trunk",
			"Offroad_tan_Door_1_1",
			"Offroad_tan_Door_2_1",
			"Offroad_tan_Door_1_2",
			"Offroad_tan_Door_2_2",
			"Offroad_02_Wheel_1_1",
			"Offroad_02_Wheel_1_2",
			"Offroad_02_Wheel_2_1",
			"Offroad_02_Wheel_2_2",
			"Offroad_02_Wheel_Spare_1"
		};
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
			",
			",
			",
			",
			",
			",
			",
			",
			"
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
			"dz\vehicles\wheeled\Offroad_02\data\Offroad_02_gauges_e_nolight.rvmat"
		};
		dashboardMatOn="dz\vehicles\wheeled\Offroad_02\data\Offroad_02_gauges_e.rvmat";
		dashboardMatOff="dz\vehicles\wheeled\Offroad_02\data\Offroad_02_gauges_e_nolight.rvmat";
		frontReflectorMatOn="dz\vehicles\wheeled\offroad_02\data\Offroad_02_lights_e.rvmat";
		frontReflectorMatOff="dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat";
		brakeReflectorMatOn="dz\vehicles\wheeled\offroad_02\data\Offroad_02_lights_red.rvmat";
		brakeReflectorMatOff="dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat";
		ReverseReflectorMatOn="dz\vehicles\wheeled\offroad_02\data\Offroad_02_lights_e.rvmat";
		ReverseReflectorMatOff="dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat";
		TailReflectorMatOn="dz\vehicles\wheeled\offroad_02\data\Offroad_02_lights_e.rvmat";
		TailReflectorMatOff="dz\vehicles\wheeled\Offroad_02\data\Offroad_02_lights_nolight.rvmat";
		fuelCapacity=115;
		fuelConsumption=30;
		class Crew: Crew
		{
			class Driver: Driver
			{
			};
			class CoDriver: CoDriver
			{
			};
			class Cargo1
			{
				actionSel="seat_cargo1";
				proxyPos="crewCargo1";
				getInPos="pos_cargo1";
				getInDir="pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel="seat_cargo2";
				proxyPos="crewCargo2";
				getInPos="pos_cargo2";
				getInDir="pos_cargo2_dir";
			};
		};
		class SimulationModule: SimulationModule
		{
			class Steering
			{
				maxSteeringAngle=30;
				increaseSpeed[]={0,40,30,20,100,10};
				decreaseSpeed[]={0,80,60,40,90,20};
				centeringSpeed[]={0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime=1;
				defaultThrust=0.85000002;
				gentleThrust=0.69999999;
				turboCoef=4;
				gentleCoef=0.75;
			};
			class Brake
			{
				pressureBySpeed[]={0,0.85000002,10,0.75,20,0.64999998,50,0.44999999,80,0.60000002,100,0.75};
				gentleCoef=0.69999999;
				minPressure=0.2;
				reactionTime=0.15000001;
				driverless=0.1;
			};
			class Aerodynamics
			{
				frontalArea=3.05;
				dragCoefficient=0.57999998;
			};
			drive="DRIVE_AWD";
			class Engine
			{
				torqueCurve[]={525,0,1000,200,1300,313,2500,384,3600,316,5120,0};
				inertia=0.2;
				frictionTorque=90;
				rollingFriction=0.69999999;
				viscousFriction=1;
				rpmIdle=625;
				rpmMin=800;
				rpmClutch=1600;
				rpmRedline=3700;
			};
			class Clutch
			{
				maxTorqueTransfer=650;
				uncoupleTime=0.2;
				coupleTime=0.1;
			};
			class Gearbox
			{
				type="GEARBOX_AUTOMATIC";
				reverse=2.0799999;
				ratios[]={2.48,1.48,1,0.75};
			};
			class CentralDifferential
			{
				ratio=2.1210001;
				type="DIFFERENTIAL_LOCKED";
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxBrakeTorque=4700;
					maxHandbrakeTorque=10000;
					wheelHubMass=20;
					wheelHubRadius=0.15000001;
					class Differential
					{
						ratio=2.73;
						type="DIFFERENTIAL_LOCKED";
					};
					class Suspension
					{
						stiffness=50000;
						compression=3300;
						damping=4100;
						travelMaxUp=0.25;
						travelMaxDown=0.25;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_1";
							inventorySlot="Offroad_02_Wheel_1_1";
						};
						class Right: Right
						{
							animDamper="damper_2_1";
							inventorySlot="Offroad_02_Wheel_2_1";
						};
					};
				};
				class Rear: Rear
				{
					maxBrakeTorque=4000;
					maxHandbrakeTorque=10000;
					wheelHubMass=20;
					wheelHubRadius=0.15000001;
					class Differential
					{
						ratio=2.73;
						type="DIFFERENTIAL_LOCKED";
					};
					class Suspension
					{
						stiffness=37500;
						compression=3000;
						damping=3600;
						travelMaxUp=0.25;
						travelMaxDown=0.25;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_2";
							inventorySlot="Offroad_02_Wheel_1_2";
						};
						class Right: Right
						{
							animDamper="damper_2_2";
							inventorySlot="Offroad_02_Wheel_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,30};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		class AnimationSources: AnimationSources
		{
			class DoorsCargo1
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCargo2
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class damper_1_1
			{
				source="user";
				initPhase=0.5;
				animPeriod=1;
			};
			class damper_2_1: damper_1_1
			{
			};
			class damper_1_2: damper_1_1
			{
			};
			class damper_2_2: damper_1_2
			{
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
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
			class DamageZones
			{
				class Chassis
				{
					displayName="$STR_CfgVehicleDmg_Chassis0";
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_chassis"
					};
					class Health
					{
						hitpoints=3000;
						transferToGlobalCoef=0;
					};
					inventorySlots[]={};
				};
				class Front
				{
					displayName="$STR_CfgVehicleDmg_Bumper0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_front"
					};
					componentNames[]=
					{
						"dmgZone_front",
						"dmgZone_bumper_1"
					};
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
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
								0.30000001,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Engine",
						"Fender_1_1",
						"Fender_2_1",
						"Reflector_1_1",
						"Reflector_2_1"
					};
					transferToZonesCoefs[]={0.039999999,0.050000001,0.050000001,0.050000001,0.050000001};
					inventorySlots[]=
					{
						"Offroad_tan_Hood",
						"CarRadiator",
						"Offroad_02_Wheel_1_1",
						"Offroad_02_Wheel_2_1"
					};
					inventorySlotsCoefs[]={0.1,0.050000001,0.050000001,0.050000001};
				};
				class Reflector_1_1
				{
					displayName="$STR_CfgVehicleDmg_Reflector0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_lights_1_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_1_1"
					};
					class Health
					{
						hitpoints=10;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\glass_frontlights.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\glass_frontlights_damaged.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\glass_frontlights_damaged.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\glass_frontlights_ruined.rvmat"
								}
							},
							
							{
								0,
								"Hidden"
							}
						};
					};
					inventorySlots[]=
					{
						"Reflector_1_1"
					};
					inventorySlotsCoefs[]={1};
				};
				class Reflector_2_1: Reflector_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_lights_2_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_2_1"
					};
					inventorySlots[]=
					{
						"Reflector_2_1"
					};
				};
				class Back
				{
					displayName="$STR_CfgVehicleDmg_Bumper0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_back"
					};
					componentNames[]=
					{
						"dmgZone_back"
					};
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_destruct.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Fender_1_2",
						"Fender_2_2"
					};
					transferToZonesCoefs[]={0.050000001,0.050000001};
					inventorySlots[]=
					{
						"Offroad_tan_Trunk",
						"Offroad_02_Wheel_1_2",
						"Offroad_02_Wheel_2_2"
					};
					inventorySlotsCoefs[]={0.30000001,0.050000001,0.050000001};
				};
				class Roof
				{
					displayName="tan M1025 Roof";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_roof"
					};
					componentNames[]=
					{
						"dmgZone_roof"
					};
					class Health
					{
						hitpoints=600;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_damage.rvmat",
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_damage.rvmat",
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_destruct.rvmat",
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_destruct.rvmat"
								}
							}
						};
					};
					inventorySlots[]={};
				};
				class Fender_1_1
				{
					displayName="$STR_CfgVehicleDmg_Fender0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_fender_1_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_1"
					};
					class Health
					{
						hitpoints=800;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_base_multi.rvmat",
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_damage.rvmat",
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_damage.rvmat",
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"BagsHMMV\Vehicles\offroad_tan\Offroad_tan_base_multi_destruct.rvmat",
									"BagsHMMV\Vehicles\offroad_tan\offroad_tan_roof_multi_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Engine"
					};
					transferToZonesCoefs[]={0.1,0.079999998};
					inventorySlots[]=
					{
						"Offroad_tan_Hood",
						"Offroad_02_Wheel_1_1",
						"Offroad_tan_Door_1_1"
					};
					inventorySlotsCoefs[]={0.1,0.1,0.1};
				};
				class Fender_2_1: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_2_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_1"
					};
					transferToZonesNames[]=
					{
						"Front",
						"Engine"
					};
					inventorySlots[]=
					{
						"Offroad_tan_Hood",
						"Offroad_02_Wheel_2_1",
						"Offroad_tan_Door_2_1"
					};
				};
				class Fender_1_2: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_1_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_2"
					};
					transferToZonesNames[]=
					{
						"Back",
						"Fueltank"
					};
					transferToZonesCoefs[]={0.050000001,0.2};
					inventorySlots[]=
					{
						"Offroad_tan_Trunk",
						"Offroad_02_Wheel_1_2",
						"Offroad_tan_Door_1_2"
					};
					inventorySlotsCoefs[]={0.1,0.050000001,0.050000001};
				};
				class Fender_2_2: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_2_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_2"
					};
					transferToZonesNames[]=
					{
						"Back",
						"Fueltank"
					};
					transferToZonesCoefs[]={0.050000001,0.2};
					inventorySlots[]=
					{
						"Offroad_tan_Trunk",
						"Offroad_02_Wheel_2_2",
						"Offroad_tan_Door_2_2"
					};
					inventorySlotsCoefs[]={0.1,0.050000001,0.050000001};
				};
				class WindowLeft
				{
					displayName="$STR_CfgVehicleDmg_Window0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_windowLeft"
					};
					componentNames[]=
					{
						"dmgZone_windowLeft"
					};
					class Health
					{
						hitpoints=160;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_i.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_i.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_i_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_destruct.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint_destruct.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\Offroad_02_Windows_i_destruct.rvmat"
								}
							},
							
							{
								0,
								"hidden",
								"hidden",
								"hidden"
							}
						};
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class WindowRight: WindowLeft
				{
					memoryPoints[]=
					{
						"dmgZone_windowRight"
					};
					componentNames[]=
					{
						"dmgZone_windowRight"
					};
				};
				class Engine
				{
					displayName="$STR_CfgVehicleDmg_Engine0";
					fatalInjuryCoef=0.001;
					memoryPoints[]=
					{
						"dmgZone_engine"
					};
					componentNames[]=
					{
						"dmgZone_engine"
					};
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\engine_offroad_02.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\engine_offroad_02.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\engine_Offroad_tan_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\engine_Offroad_tan_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\engine_Offroad_tan_destruct.rvmat"
								}
							}
						};
					};
					inventorySlots[]=
					{
						"CarBattery",
						"GlowPlug"
					};
					inventorySlotsCoefs[]={0.1,0.0099999998};
				};
				class Fueltank
				{
					displayName="$STR_CfgVehicleDmg_Fueltank0";
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_fueltank"
					};
					class Health
					{
						hitpoints=400;
						transferToGlobalCoef=0;
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
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
			};
		};
		class ObstacleGenerator
		{
			carve=1;
			timeToStationary=5;
			moveThreshold=0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius=1.5;
						height=1.5;
						center[]={0,0,0.80000001};
					};
					class Cyl3
					{
						radius=1.5;
						height=1.5;
						center[]={0,0,-0.80000001};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="$STR_attachment_Engine0";
				description=";
				icon="set:dayz_inventory image:cat_vehicle_engine";
				attachmentSlots[]=
				{
					"CarBattery",
					"GlowPlug"
				};
			};
			class Body
			{
				name="$STR_attachment_Body0";
				description=";
				icon="set:dayz_inventory image:cat_vehicle_body";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Offroad_tan_Door_1_1",
					"Offroad_tan_Door_2_1",
					"Offroad_tan_Door_1_2",
					"Offroad_tan_Door_2_2",
					"Offroad_tan_Trunk",
					"Offroad_02_Wheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description=";
				icon="set:dayz_inventory image:cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Offroad_02_Wheel_1_1",
					"Offroad_02_Wheel_1_2",
					"Offroad_02_Wheel_2_1",
					"Offroad_02_Wheel_2_2"
				};
			};
		};
	};
};
