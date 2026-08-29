class Bags_Glock21_Base : Pistol_Base
{ 
	override RecoilBase SpawnRecoilObject()
	{
		return new GlockRecoil(this);
	}
	
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		super.OnDebugSpawn();
		
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "PistolSuppressor" );
		inventory.CreateInInventory( "FNP45_MRDSOptic" );
		inventory.CreateInInventory( "TLRLight" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("Mag_Glock21_15Rnd");
	}
};

class Bags_Glock21 : Bags_Glock21_Base {};