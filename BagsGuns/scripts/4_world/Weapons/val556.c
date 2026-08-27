class VAL556_Base : RifleBoltFree_Base
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
			entity.GetInventory().CreateInInventory( "PSO1Optic" );	
			entity.GetInventory().CreateInInventory( "Battery9V" );
			SpawnAttachedMagazine("Mag_Vikhr_30Rnd");
		}
	}
};

class VAL556 : VAL556_Base
{
	override bool CanEnterIronsights()
	{
		ItemOptics optic = GetAttachedOptics();
		if (optic && PSO1Optic.Cast(optic)
			return true;
		return super.CanEnterIronsights();
	}
};