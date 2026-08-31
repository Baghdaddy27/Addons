class CfgPatches
{
	class Bags_Ammo_Stacks
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base: Magazine_Base{};
	
//AMMO STACKS
	class Ammo_45ACP: Ammunition_Base
	{
		count=100;
	};
	class Ammo_308Win: Ammunition_Base
	{
		count=100;
	};
	class Ammo_9x19: Ammunition_Base
	{
		count=100;
	};
	class Ammo_380: Ammunition_Base
	{
		count=100;
	};
	class Ammo_556x45: Ammunition_Base
	{
		count=100;
	};
	class Ammo_556x45Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x54: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x54Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x39: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x39Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_9x39: Ammunition_Base
	{
		count=100;
	};
	class Ammo_22: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12gaPellets: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12gaSlug: Ammunition_Base
	{
		count=100;
	};
	class Ammo_357: Ammunition_Base
	{
		count=100;
	};
	class Ammo_545x39: Ammunition_Base
	{
		count=100;
	};
};