modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );

 
  		pType.AddItemInHandsProfileIK("SCARX_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_scarh.asi", pBehavior, "dz/anims/anm/player/ik/weapons/scar_ik.anm", "dz/anims/anm/player/reloads/scar/w_scar_states.anm");	 

	}	
};