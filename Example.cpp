class CfgPatches
{
	class DZ_Vehicles_Wheeled
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class CarWheel: Inventory_Base
	{
		scope=1;
		itemBehaviour=0;
		physLayer="item_large";
		itemSize[]={6,6};
		weight=12000;
		repairableWithKits[]={6};
		repairCosts[]={25};
		simulation="carwheel";
		lockType=3;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="hatchbackwheel_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CarDoor: Inventory_Base
	{
		scope=1;
		itemBehaviour=0;
		physLayer="item_large";
		itemSize[]={10,10};
		weight=20000;
		hiddenSelections[]=
		{
			"dmgZone_doors"
		};
		lockType=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
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
				class Window
				{
					class Health
					{
						hitpoints=70;
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
								
								{
									""
								}
							}
						};
					};
					componentNames[]=
					{
						"dmgZone_window"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Doors
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=1;
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
								
								{
									""
								}
							}
						};
					};
					componentNames[]=
					{
						"dmgZone_doors"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp
				{
					soundSet="hatchbackdoors_driver_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="hatchbackdoors_driver_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Car;
	class CarScript: Car
	{
		rotationFlags=64;
		storageCategory=4;
		debug_ItemCategory=8;
		displayWeight=0;
		insideSoundCoef=0.89999998;
		fuelCapacity=50;
		brakeFluidCapacity=1;
		oilCapacity=4;
		coolantCapacity=6;
		brakeFluidLeakDebit[]={0,0};
		oilLeakDebit[]={0,0};
		coolantLeakDebit[]={0,0};
		brakeFluidForceCoef[]={0,1,1,1};
		damageFromOil[]={0,0,1,0};
		damageFromCoolant[]={0,0,1,0};
		engineBeltSlot="EngineBelt";
		batterySlot="CarBattery";
		electricPowerResName="power";
		electricConsumptionIgnition=3001;
		electricConsumptionEngine=0;
		electricConsumptionLights=0;
		electricOutputEngine=5;
		selectionDashboard="light_dashboard";
		selectionLightFrontL="light_left";
		selectionLightFrontR="light_right";
		selectionBrakeLights="light_break";
		hasHistory=1;
		class Crew
		{
			class Driver
			{
				actionSel="seat_driver";
				proxyPos="crewDriver";
				getInPos="pos_driver";
				getInDir="pos_driver_dir";
				isDriver=1;
			};
			class CoDriver
			{
				actionSel="seat_coDriver";
				proxyPos="crewCoDriver";
				getInPos="pos_coDriver";
				getInDir="pos_coDriver_dir";
			};
		};
		class SimulationModule
		{
			class Axles
			{
				class Front
				{
					class Wheels
					{
						class Left
						{
							inventorySlot="";
							animTurn="turnfrontleft";
							animRotation="wheelfrontleft";
							animDamper="damperfrontleft";
							wheelHub="wheel_1_1_damper_land";
						};
						class Right
						{
							inventorySlot="";
							animTurn="turnfrontright";
							animRotation="wheelfrontright";
							animDamper="damperfrontright";
							wheelHub="wheel_2_1_damper_land";
						};
					};
				};
				class Rear
				{
					class Wheels
					{
						class Left
						{
							inventorySlot="";
							animTurn="turnbackleft";
							animRotation="wheelbackleft";
							animDamper="damperbackleft";
							wheelHub="wheel_1_2_damper_land";
						};
						class Right
						{
							inventorySlot="";
							animTurn="turnbackright";
							animRotation="wheelbackright";
							animDamper="damperbackright";
							wheelHub="wheel_2_2_damper_land";
						};
					};
				};
			};
		};
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1"
		};
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
		class AnimationSources
		{
			class DoorsDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCoDriver: DoorsDriver
			{
			};
			class DoorsHood: DoorsDriver
			{
			};
			class DoorsTrunk: DoorsDriver
			{
			};
			class HideDestroyed_1_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_1_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class AnimHitWheel_1_1
			{
				source="Hit";
				hitpoint="HitWheel_1_1";
				raw=1;
			};
			class AnimHitWheel_1_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_1_2";
			};
			class AnimHitWheel_2_1: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_1";
			};
			class AnimHitWheel_2_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_2";
			};
			class HitDoorsHood: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsHood";
			};
			class HitDoorsTrunk: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsTrunk";
			};
			class HitDoorsDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsDriver";
			};
			class HitDoorsCoDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCoDriver";
			};
			class HitDoorsCargo: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCargo";
			};
		};
		class NoiseCarHorn
		{
			strength=30;
			type="sound";
		};
	};
	class RearDrive: CarScript
	{
		class SimulationModule: SimulationModule
		{
			class Steering
			{
				maxSteeringAngle=35;
				increaseSpeed[]={0,50,10,40,30,30,60,15,100,7,120,4};
				decreaseSpeed[]={0,90,60,60,120,40};
				centeringSpeed[]={0,0,15,30,60,60,100,80};
			};
			class Throttle
			{
				reactionTime=0.34999999;
				defaultThrust=0.64999998;
				gentleThrust=0.55000001;
				turboCoef=6;
				gentleCoef=0.69999999;
			};
			class Brake
			{
				pressureBySpeed[]={0,0.43000001,10,0.38,20,0.34999999,40,0.25,50,0.27000001,80,0.28999999,100,0.31,140,0.38};
				reactionTime=0.25;
				driverless=0.1;
			};
			class Aerodynamics
			{
				frontalArea=2.2;
				dragCoefficient=0.44999999;
				downforceCoefficient=0.80000001;
				downforceOffset[]={0,0.40000001,-2.2};
			};
			drive="DRIVE_RWD";
			class Engine
			{
				torqueCurve[]={400,0,1000,157,1700,183,2500,187,4500,147,6000,0};
				inertia=0.44999999;
				frictionTorque=130;
				rollingFriction=1.5;
				viscousFriction=0.5;
				rpmIdle=900;
				rpmMin=1000;
				rpmClutch=1250;
				rpmRedline=4700;
			};
			class Clutch
			{
				maxTorqueTransfer=400;
				uncoupleTime=0.30000001;
				coupleTime=0.30000001;
			};
			class Gearbox
			{
				type="GEARBOX_MANUAL";
				reverse=3.51;
				ratios[]={3.5,2.26,1.45,1};
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxBrakeTorque=2000;
					wheelHubMass=10;
					wheelHubRadius=0.15000001;
					class Suspension
					{
						stiffness=60000;
						compression=2100;
						damping=5500;
						travelMaxUp=0.079000004;
						travelMaxDown=0.059999999;
					};
				};
				class Rear: Rear
				{
					maxBrakeTorque=1600;
					maxHandbrakeTorque=2200;
					wheelHubMass=10;
					wheelHubRadius=0.15000001;
					class Differential
					{
						ratio=4.0999999;
						type="DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness=34000;
						compression=2000;
						damping=5100;
						travelMaxUp=0.086000003;
						travelMaxDown=0.133;
					};
				};
			};
		};
	};
	class FrontDrive: CarScript
	{
		class SimulationModule: SimulationModule
		{
			class Steering
			{
				maxSteeringAngle=35;
				increaseSpeed[]={0,50,60,30,100,15};
				decreaseSpeed[]={0,90,60,45,100,20};
				centeringSpeed[]={0,0,15,27,60,45,100,63};
			};
			class Throttle
			{
				reactionTime=0.85000002;
				defaultThrust=0.69999999;
				gentleThrust=0.40000001;
				turboCoef=2.2;
				gentleCoef=0.5;
			};
			class Brake
			{
				pressureBySpeed[]={0,0.5,10,0.40000001,20,0.30000001,40,0.28,60,0.30000001,80,0.38,100,0.41999999,120,0.47999999,150,0.60000002};
				reactionTime=0.2;
				driverless=0.1;
			};
			class Aerodynamics
			{
				frontalArea=2.1500001;
				dragCoefficient=0.51999998;
				downforceCoefficient=0.0099999998;
				downforceOffset[]={0,0.80000001,-0.69999999};
			};
			drive="DRIVE_FWD";
			class Engine
			{
				torqueCurve[]={850,0,1150,90,2000,130,4400,186,5800,165,7500,0};
				inertia=0.20999999;
				frictionTorque=150;
				rollingFriction=0.2;
				viscousFriction=0.5;
				rpmIdle=1250;
				rpmMin=1500;
				rpmClutch=2000;
				rpmRedline=6250;
			};
			class Clutch
			{
				maxTorqueTransfer=360;
				uncoupleTime=0.25;
				coupleTime=0.34999999;
			};
			class Gearbox
			{
				type="GEARBOX_MANUAL";
				reverse=3.1670001;
				ratios[]={3.4549999,2.118,1.444,1.1289999,0.912};
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxBrakeTorque=1800;
					wheelHubMass=5;
					wheelHubRadius=0.125;
					class Differential
					{
						ratio=3.6670001;
						type="DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness=27000;
						compression=2000;
						damping=7500;
						travelMaxUp=0.16;
						travelMaxDown=0.16;
					};
				};
				class Rear: Rear
				{
					maxBrakeTorque=800;
					maxHandbrakeTorque=2000;
					wheelHubMass=5;
					wheelHubRadius=0.125;
					class Suspension
					{
						stiffness=27500;
						compression=2100;
						damping=8000;
						travelMaxUp=0.16;
						travelMaxDown=0.16;
					};
				};
			};
		};
	};
	class AllDrive: CarScript
	{
		class SimulationModule: SimulationModule
		{
			class Steering
			{
				maxSteeringAngle=30;
				increaseSpeed[]={0,40,30,20,100,5};
				decreaseSpeed[]={0,80,60,40,90,20};
				centeringSpeed[]={0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime=0.89999998;
				defaultThrust=0.85000002;
				gentleThrust=0.69999999;
				turboCoef=4;
				gentleCoef=0.75;
			};
			class Brake
			{
				pressureBySpeed[]={0,0.85000002,10,0.69999999,20,0.5,40,0.40000001,60,0.43000001,80,0.46000001,100,0.51999998,120,0.69999999};
				reactionTime=0.30000001;
				driverless=0.1;
			};
			class Aerodynamics
			{
				frontalArea=2.1800001;
				dragCoefficient=0.56;
			};
			drive="DRIVE_AWD";
			class Engine
			{
				torqueCurve[]={650,0,750,40,1400,80,3400,114,5400,95,8000,0};
				inertia=0.11;
				frictionTorque=100;
				rollingFriction=0.5;
				viscousFriction=0.5;
				rpmIdle=800;
				rpmMin=900;
				rpmClutch=1400;
				rpmRedline=6000;
			};
			class Clutch
			{
				maxTorqueTransfer=240;
				uncoupleTime=0.30000001;
				coupleTime=0.44999999;
			};
			class Gearbox
			{
				type="GEARBOX_MANUAL";
				reverse=3.526;
				ratios[]={3.6670001,2.0999999,1.3609999,1};
			};
			class CentralDifferential
			{
				ratio=1.5;
				type="DIFFERENTIAL_LOCKED";
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxBrakeTorque=2000;
					maxHandbrakeTorque=2500;
					wheelHubMass=5;
					wheelHubRadius=0.15000001;
					class Differential
					{
						ratio=4.0999999;
						type="DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness=40000;
						compression=2100;
						damping=7500;
						travelMaxUp=0.088200003;
						travelMaxDown=0.083300002;
					};
				};
				class Rear: Rear
				{
					maxBrakeTorque=1000;
					maxHandbrakeTorque=2500;
					wheelHubMass=5;
					wheelHubRadius=0.15000001;
					class Differential
					{
						ratio=4.0999999;
						type="DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness=40000;
						compression=2200;
						damping=7600;
						travelMaxUp=0.1587;
						travelMaxDown=0.1059;
					};
				};
			};
		};
	};
	class TruckDrive: CarScript
	{
		class SimulationModule: SimulationModule
		{
			class Steering
			{
				maxSteeringAngle=35;
				increaseSpeed[]={0,25,50,15};
				decreaseSpeed[]={0,50,50,40};
				centeringSpeed[]={0,25,50,15};
			};
			class Throttle
			{
				reactionTime=0.30000001;
				defaultThrust=0.5;
				gentleThrust=0.2;
				turboCoef=1.25;
				gentleCoef=0.5;
			};
			class Brake
			{
				pressureBySpeed[]={0,0.5,10,0.46000001,30,0.43000001,40,0.40000001,60,0.5,80,0.60000002};
				reactionTime=0.30000001;
				driverless=0.1;
			};
			class Aerodynamics
			{
				frontalArea=5.75;
				dragCoefficient=0.52999997;
			};
			drive="DRIVE_642";
			class Engine
			{
				torqueCurve[]={525,0,1000,330,1400,360,1900,340,3000,0};
				inertia=1.15;
				frictionTorque=100;
				rollingFriction=4;
				viscousFriction=2.5;
				rpmIdle=650;
				rpmMin=750;
				rpmClutch=850;
				rpmRedline=2300;
			};
			class Clutch
			{
				maxTorqueTransfer=720;
				uncoupleTime=0.2;
				coupleTime=0.80000001;
			};
			class Gearbox
			{
				type="GEARBOX_MANUAL";
				reverse=6.2800002;
				ratios[]={6.1900001,3.1300001,1.75,1};
			};
			class CentralDifferential
			{
				ratio=0.75;
				type="DIFFERENTIAL_LOCKED";
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxBrakeTorque=5500;
					wheelHubMass=25;
					wheelHubRadius=0.30000001;
					class Suspension
					{
						stiffness=65000;
						compression=3000;
						damping=7000;
						travelMaxUp=0.14;
						travelMaxDown=0.15000001;
					};
				};
				class Middle: Rear
				{
					maxBrakeTorque=5000;
					maxHandbrakeTorque=6000;
					wheelHubMass=45;
					wheelHubRadius=0.30000001;
					class Differential
					{
						ratio=8.3500004;
						type="DIFFERENTIAL_LOCKED";
					};
					class Suspension
					{
						stiffness=55000;
						compression=2500;
						damping=8000;
						travelMaxUp=0.094999999;
						travelMaxDown=0.125;
					};
				};
				class Rear: Rear
				{
					maxBrakeTorque=5000;
					maxHandbrakeTorque=6000;
					wheelHubMass=45;
					wheelHubRadius=0.30000001;
					class Differential
					{
						ratio=8.3500004;
						type="DIFFERENTIAL_LOCKED";
					};
					class Suspension
					{
						stiffness=55000;
						compression=2500;
						damping=8000;
						travelMaxUp=0.094999999;
						travelMaxDown=0.125;
					};
				};
			};
		};
	};
	class Offroad_02_Wheel: CarWheel
	{
		scope=2;
		displayName="$STR_Offroad_02_Wheel0";
		descriptionShort="$STR_Offroad_02_Wheel1";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_02_Wheel.p3d";
		weight=65000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot[]=
		{
			"Offroad_02_Wheel_1_1",
			"Offroad_02_Wheel_1_2",
			"Offroad_02_Wheel_2_1",
			"Offroad_02_Wheel_2_2",
			"Offroad_02_Wheel_Spare_1"
		};
		rotationFlags=12;
		physLayer="item_large";
		radiusByDamage[]={0,0.5,0.30000001,0.40000001,0.99980003,0.30000001,0.99989998,0.2};
		radius=0.44;
		width=0.23;
		tyreOffroadResistance=1;
		tyreGrip=0.94999999;
		tyreRollResistance=0.017999999;
	};
	class Offroad_02_Wheel_Ruined: Offroad_02_Wheel
	{
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_02_Wheel_destroyed.p3d";
		radius=0.315;
		width=0.27000001;
		tyreOffroadResistance=0.1;
		tyreGrip=0.40000001;
		tyreRollResistance=0.31999999;
	};
	class Offroad_02_Door_1_1: CarDoor
	{
		scope=2;
		displayName="$STR_Offroad_02_Door_1_10";
		descriptionShort="$STR_Offroad_02_Door_1_11";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_02_Door_1_1.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Door_1_1"
		};
		rotationFlags=8;
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
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
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_destruct.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint_destruct.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_destruct.rvmat"
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
							"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Offroad_02_Door_1_2: Offroad_02_Door_1_1
	{
		displayName="$STR_Offroad_02_Door_1_20";
		descriptionShort="$STR_Offroad_02_Door_1_21";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_02_Door_1_2.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Door_1_2"
		};
	};
	class Offroad_02_Door_2_1: Offroad_02_Door_1_1
	{
		displayName="$STR_Offroad_02_Door_2_10";
		descriptionShort="$STR_Offroad_02_Door_2_11";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_02_Door_2_1.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Door_2_1"
		};
	};
	class Offroad_02_Door_2_2: Offroad_02_Door_1_1
	{
		displayName="$STR_Offroad_02_Door_2_20";
		descriptionShort="$STR_Offroad_02_Door_2_21";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_02_Door_2_2.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Door_2_2"
		};
	};
	class Offroad_02_Hood: CarDoor
	{
		scope=2;
		displayName="$STR_Offroad_02_Hood0";
		descriptionShort="$STR_Offroad_02_Hood1";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_02_Hood.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Hood"
		};
		rotationFlags=8;
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat"
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
						"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Offroad_02_Trunk: CarDoor
	{
		scope=2;
		displayName="$STR_Offroad_02_Trunk0";
		descriptionShort="$STR_Offroad_02_Trunk1";
		model="\DZ\vehicles\wheeled\Offroad_02\proxy\Offroad_02_Trunk.p3d";
		inventorySlot[]=
		{
			"Offroad_02_Trunk"
		};
		rotationFlags=8;
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
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
						"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Offroad_02: CarScript
	{
		scope=2;
		displayName="$STR_Offroad_020";
		model="\DZ\vehicles\wheeled\Offroad_02\Offroad_02.p3d";
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"GlowPlug",
			"Offroad_02_Hood",
			"Offroad_02_Trunk",
			"Offroad_02_Door_1_1",
			"Offroad_02_Door_1_2",
			"Offroad_02_Door_2_1",
			"Offroad_02_Door_2_2",
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
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
			"dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
			"dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
			"dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
			"dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
			"dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
			"dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
			"dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat",
			"dz\vehicles\wheeled\Offroad_02\data\offroad_02_gauges_e_nolight.rvmat"
		};
		dashboardMatOn="dz\vehicles\wheeled\Offroad_02\data\offroad_02_gauges_e.rvmat";
		dashboardMatOff="dz\vehicles\wheeled\Offroad_02\data\offroad_02_gauges_e_nolight.rvmat";
		frontReflectorMatOn="dz\vehicles\wheeled\offroad_02\data\offroad_02_lights_e.rvmat";
		frontReflectorMatOff="dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat";
		brakeReflectorMatOn="dz\vehicles\wheeled\offroad_02\data\offroad_02_lights_red.rvmat";
		brakeReflectorMatOff="dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat";
		ReverseReflectorMatOn="dz\vehicles\wheeled\offroad_02\data\offroad_02_lights_e.rvmat";
		ReverseReflectorMatOff="dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat";
		TailReflectorMatOn="dz\vehicles\wheeled\offroad_02\data\offroad_02_lights_e.rvmat";
		TailReflectorMatOff="dz\vehicles\wheeled\Offroad_02\data\offroad_02_lights_nolight.rvmat";
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
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_destruct.rvmat"
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
						"Offroad_02_Hood",
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
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_destruct.rvmat",
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
						"Offroad_02_Trunk",
						"Offroad_02_Wheel_1_2",
						"Offroad_02_Wheel_2_2"
					};
					inventorySlotsCoefs[]={0.30000001,0.050000001,0.050000001};
				};
				class Roof
				{
					displayName="$STR_CfgVehicleDmg_Roof0";
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
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_destruct.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_destruct.rvmat"
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
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi_destruct.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi_destruct.rvmat"
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
						"Offroad_02_Hood",
						"Offroad_02_Wheel_1_1",
						"Offroad_02_Door_1_1"
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
						"Offroad_02_Hood",
						"Offroad_02_Wheel_2_1",
						"Offroad_02_Door_1_2"
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
						"FuelTank"
					};
					transferToZonesCoefs[]={0.050000001,0.2};
					inventorySlots[]=
					{
						"Offroad_02_Trunk",
						"Offroad_02_Wheel_1_2",
						"Offroad_02_Door_2_1"
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
						"FuelTank"
					};
					transferToZonesCoefs[]={0.050000001,0.2};
					inventorySlots[]=
					{
						"Offroad_02_Trunk",
						"Offroad_02_Wheel_2_2",
						"Offroad_02_Door_2_2"
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
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint_damage.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_destruct.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\default_glassint_destruct.rvmat",
									"dz\vehicles\wheeled\offroad_02\data\offroad_02_windows_i_destruct.rvmat"
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
									"dz\vehicles\wheeled\offroad_02\data\engine_offroad_02_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\engine_offroad_02_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\engine_offroad_02_destruct.rvmat"
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
				class FuelTank
				{
					displayName="$STR_CfgVehicleDmg_FuelTank0";
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_fuelTank"
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
				description="";
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
				description="";
				icon="set:dayz_inventory image:cat_vehicle_body";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Offroad_02_Door_1_1",
					"Offroad_02_Door_1_2",
					"Offroad_02_Door_2_1",
					"Offroad_02_Door_2_2",
					"Offroad_02_Trunk",
					"Offroad_02_Wheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
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
	class Offroad_02_Door_1_1_Rust: Offroad_02_Door_1_1
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
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
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Offroad_02_Door_2_1_Rust: Offroad_02_Door_2_1
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
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
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Offroad_02_Door_1_2_Rust: Offroad_02_Door_1_2
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
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
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Offroad_02_Door_2_2_Rust: Offroad_02_Door_2_2
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
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
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Offroad_02_Trunk_Rust: Offroad_02_Trunk
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroad_02\data\offroad_02_roof_multi.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"dz\vehicles\wheeled\offroad_02\data\offroad_02_base_multi.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\vehicles\wheeled\offroad_02\data\abandoned\offroad_02_roof_multi_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};