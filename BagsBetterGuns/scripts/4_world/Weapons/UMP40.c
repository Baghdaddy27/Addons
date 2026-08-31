class Bags_UMP40_Base : RifleBoltLock_Base
{ 
	override RecoilBase SpawnRecoilObject()
	{
		return new Ump45Recoil(this);
	}
	
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "PistolSuppressor" );
		inventory.CreateInInventory( "ReflexOptic" );
		inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("Bags_Mag_UMP40_30Rnd");
	}
};

class Bags_UMP40 : Bags_UMP40_Base {};