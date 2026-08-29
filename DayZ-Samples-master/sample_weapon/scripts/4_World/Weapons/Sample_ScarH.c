class Sample_ScarH_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};

class Sample_ScarH : Sample_ScarH_Base {};