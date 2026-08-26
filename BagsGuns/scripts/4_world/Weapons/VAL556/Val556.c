class VAL556_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new VSSRecoil(this);
	}
	
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "M4_T3NRDSOptic" );	
			entity.GetInventory().CreateInInventory( "Battery9V" );
			SpawnAttachedMagazine("Mag_VAL556_30Rnd");
		}
	}
};

class VAL556 : VAL556_Base {};