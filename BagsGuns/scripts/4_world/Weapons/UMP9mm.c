class Bags_UMP9mm_Base : RifleBoltLock_Base
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
		
		SpawnAttachedMagazine("Mag_UMP9mm_30Rnd");
	}
};

class Bags_UMP9mm : Bags_UMP9mm_Base {};