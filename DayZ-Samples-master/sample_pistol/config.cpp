class CfgPatches
{
	class sample_pistol
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgMods
{
	class sample_pistol
	{
		dir="sample_pistol";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="sample_pistol";
		credits="Twe4ks";
		author="Twe4ks";
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
				files[] = {"sample_pistol\scripts\4_World"};
			};
		};
	};
};

