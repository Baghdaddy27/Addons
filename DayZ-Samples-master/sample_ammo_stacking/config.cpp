class CfgPatches
{
	class sample_ammo_stacks
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
	
	////ammo stack override
	
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

	
	////magazine override
	
	class Mag_STANAG_30Rnd: Magazine_Base
	{
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556_AP"};
	};
	class Mag_STANAGCoupled_30Rnd: Magazine_Base
	{
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556_AP"};
	};
	class Mag_CMAG_10Rnd: Magazine_Base
	{
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556_AP"};
	};
	class Mag_CMAG_20Rnd: Magazine_Base
	{
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556_AP"};
	};
	class Mag_CMAG_30Rnd: Magazine_Base
	{
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556_AP"};
	};
	class Mag_CMAG_40Rnd: Magazine_Base
	{
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556_AP"};
	};
	class Mag_AK101_30Rnd: Magazine_Base
	{
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556_AP"};
	};
	class Mag_M249_Box200Rnd: Magazine_Base
	{
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556_AP"};
	};
	class Mag_AKM_30Rnd: Magazine_Base
	{
		ammoItems[] = {"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39_AP"};
	};
	class Mag_AKM_Drum75Rnd: Magazine_Base
	{
		ammoItems[] = {"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39_AP"};
	};
	class Mag_FAL_20Rnd: Magazine_Base
	{
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_308_AP"};
	};
};