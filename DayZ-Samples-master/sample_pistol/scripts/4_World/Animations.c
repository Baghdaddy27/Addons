modded class ModItemRegisterCallbacks
{

	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);
        //! magazine
		pType.AddItemInHandsProfileIK("Mag_Sample_Pistol_10rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");

	}	
 	override void RegisterPistol( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
        super.RegisterPistol( pType, pBehavior ); 
		
		pType.AddItemInHandsProfileIK("sample_pistol_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi", pBehavior, "dz/anims/anm/player/ik/weapons/glock19.anm", "dz/anims/anm/player/reloads/glock/w_glock19_states.anm");

	} 
};