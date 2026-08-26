modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );

 
  		pType.AddItemInHandsProfileIK("VAL556_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_vss.asi", pBehavior, "dz/anims/anm/player/ik/weapons/val_ik.anm", "dz/anims/anm/player/reloads/val/w_val_states.anm");	 

	}		
};