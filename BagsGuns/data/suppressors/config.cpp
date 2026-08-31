class CfgPatches
{
	class Suppressor_Extenstion
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemBarrel: Inventory_Base
	{
	};
	class ItemSuppressor: Inventory_Base
	{
		scope=0;
		debug_ItemCategory=3;
		inventorySlot[]=
		{
			"weaponMuzzle"
		};
		simulation="ItemSuppressor";
		itemSize[]={1,1};
		selectionFireAnim="zasleh";
		soundIndex=1;
		repairableWithKits[]={1};
		repairCosts[]={25};
		muzzlePos="usti hlavne";
		barrelArmor=6000;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		isMeleeWeapon=1;
		soundImpactType="metal";
	};
	class M4_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_M4_Suppressor0";
		descriptionShort="$STR_cfgVehicles_M4_Suppressor1";
		model="\dz\weapons\attachments\muzzle\suppressor_556.p3d";
		rotationFlags=17;
		reversed=0;
		weight=73;
		itemSize[]={3,1};
		itemModelLength=0.148;
		barrelArmor=6000;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_west"
		};
		inventorySlot[]=
		{
			"weaponMuzzleM4"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00015000001;
		dispersionCondition="true";
		noiseShootModifier=-0.93000001;
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		swayModifier[]={1.3,1.3,1.3};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
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
							
							{
								"DZ\weapons\attachments\data\suppressor556.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\suppressor556.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\suppressor556_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\suppressor556_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\suppressor556_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokeTrail
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
	};
	class AK_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_AK_Suppressor0";
		descriptionShort="$STR_cfgVehicles_AK_Suppressor1";
		model="\dz\weapons\attachments\muzzle\suppressor_545.p3d";
		rotationFlags=17;
		reversed=0;
		weight=100;
		itemSize[]={3,1};
		itemModelLength=0.23;
		barrelArmor=6000;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east"
		};
		inventorySlot[]=
		{
			"weaponMuzzleAK"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00015000001;
		dispersionCondition="true";
		noiseShootModifier=-0.93000001;
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		swayModifier[]={1.3,1.3,1.3};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle="weapon_shot_akm_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=2;
				maxOverheatingValue=20;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
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
							
							{
								"DZ\weapons\attachments\data\tgpa.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\tgpa.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\tgpa_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\tgpa_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\tgpa_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PistolSuppressor: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_PistolSuppressor0";
		descriptionShort="$STR_cfgVehicles_PistolSuppressor1";
		model="\dz\weapons\attachments\muzzle\suppressor_45acp.p3d";
		rotationFlags=17;
		reversed=0;
		weight=70;
		itemSize[]={3,1};
		itemModelLength=0.176;
		barrelArmor=2000;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east",
			"Military_west",
			"Police",
			"Civilian"
		};
		inventorySlot[]=
		{
			"pistolMuzzle"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00015000001;
		dispersionCondition="true";
		noiseShootModifier=-0.93000001;
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		swayModifier[]={1.3,1.3,1.3};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=2;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
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
							
							{
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\gemtech_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySuppressor_556: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponMuzzleM4";
		model="\dz\weapons\attachments\muzzle\suppressor_556.p3d";
	};
	class ProxySuppressor_545: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponMuzzleAK";
		model="\dz\weapons\attachments\muzzle\suppressor_545.p3d";
	};
	class ProxySuppressor_45ACP: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistolMuzzle";
		model="\dz\weapons\attachments\muzzle\suppressor_45acp.p3d";
	};
};
