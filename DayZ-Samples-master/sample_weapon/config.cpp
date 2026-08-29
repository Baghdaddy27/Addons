class CfgPatches
{
	class sample_weapon
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgMods
{
	class sample_weapon
	{
		dir="sample_weapon";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="sample_weapon";
		credits="";
		author="";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"sample_weapon\scripts\4_World"};
			};
		};
	};
};

