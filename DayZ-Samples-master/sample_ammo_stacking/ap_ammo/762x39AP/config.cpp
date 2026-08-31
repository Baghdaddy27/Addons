////////////////////////////////////////////////////////////////////
//DeRap: data\Ammo\762x39AP\config.bin
//Produced from mikero's Dos Tools Dll version 8.90
//https://mikero.bytex.digital/Downloads
//'now' is Sun Oct 01 11:51:30 2023 : 'file' last modified on Sun Jun 18 12:22:59 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ammo_762x39_AP
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Pistols","DZ_Weapons_Ammunition"};
		magazines[] = {"Ammo_762x39_AP"};
		ammo[] = {"Bullet_308_AP"};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_762x39_AP: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x39 AP Rounds";
		descriptionShort = "20 7.62 x .39 Armor Piercing Rounds.";
		model = "\dz\weapons\ammunition\308Win_LooseRounds.p3d";
		iconCartridge = 1;
		rotationFlags = 34;
		weight = 20;
		count = 20;
		ammo = "Bullet_762x39_AP";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"sample_ammo_stacking\ap_ammo\762x39AP\AP_762x39_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\attachments\magazine\data\shockpistol_battery.rvmat"}},{0.7,{"DZ\weapons\attachments\magazine\data\shockpistol_battery.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\shockpistol_battery.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\shockpistol_battery.rvmat"}},{0,{"DZ\weapons\attachments\magazine\data\shockpistol_battery.rvmat"}}};
				};
			};
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_762x39_AP
	{
		name = "Bullet_762x39_AP";
	};
};
class cfgAmmo
{
	class Bullet_Base;
	class Bullet_762x39_AP: Bullet_Base
	{
		scope = 2;
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		spawnPileType = "Ammo_762x39_AP";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 880;
		typicalSpeed = 1200;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.01;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{1.25,1}};
			class Health
			{
				damage = 220;
			};
			class Blood
			{
				damage = 180;
			};
			class Shock
			{
				damage = 135;
				damageOverride[] = {{1.2,1}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
};
