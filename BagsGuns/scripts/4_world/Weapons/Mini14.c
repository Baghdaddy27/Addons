class Mini14_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M14Recoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ACOGOptic_6x" );
		inventory.CreateInInventory( "ImprovisedSuppressor" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("Mag_CMAG_30Rnd");
	}
};

class Mini14 : Mini14_Base {};