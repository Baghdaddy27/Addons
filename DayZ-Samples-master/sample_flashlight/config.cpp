class CfgPatches
{
	class Sample_Flashlight
	{
		units[]={"Sample_Flashlight"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
	class Flashlight;
	class Sample_Flashlight: Flashlight
	{
		scope=2;
		displayName="Sample Flashlight";
		descriptionShort="blah blah blah";
		model="sample_flashlight\data\sample_flashlight.p3d";
		rotationFlags=34;
		itemSize[]={3,1};
		weight=210;
		animClass="Pistol";
		hiddenSelections[]=
		{
			"zbytek",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"sample_flashlight\data\sample_flashlight_co.paa",
			"sample_flashlight\data\sample_flashlight_co.paa",
			"sample_flashlight\data\sample_flashlight_glass_co.paa",
			"sample_flashlight\data\sample_flashlight_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sample_flashlight\data\sample_flashlight.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"sample_flashlight\data\sample_flashlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"sample_flashlight\data\sample_flashlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"sample_flashlight\data\sample_flashlight.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"sample_flashlight\data\sample_flashlight.rvmat"
							}
						},
						
						{
							0,
							
							{
								"sample_flashlight\data\sample_flashlight.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFistLight";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFistHeavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFistHeavy";
				range=2.8;
			};
		};
		attachments[]=
		{
			"BatteryD"
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class Attack_flashlight_Light1
				{
					soundSet="Char_Attack_pipemetal_light1_SoundSet";
					id=806;
				};
				class Attack_flashlight_Light2
				{
					soundSet="Char_Attack_pipemetal_light2_SoundSet";
					id=807;
				};
				class Attack_flashlight_Heavy1
				{
					soundSet="Char_Attack_pipemetal_heavy1_SoundSet";
					id=808;
				};
				class Attack_flashlight_Heavy2
				{
					soundSet="Char_Attack_pipemetal_heavy2_SoundSet";
					id=809;
				};
			};
		};
	};
};