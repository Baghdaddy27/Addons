modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );

 
  		pType.AddItemInHandsProfileIK("AR15_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");	 
  		
  		pType.AddItemInHandsProfileIK("AR10_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");	 

		pType.AddItemInHandsProfileIK("SCARL_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_scarh.asi", pBehavior, "dz/anims/anm/player/ik/weapons/scar_ik.anm", "dz/anims/anm/player/reloads/scar/w_scar_states.anm");	 
  		
		pType.AddItemInHandsProfileIK("SCARX_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_scarh.asi", pBehavior, "dz/anims/anm/player/ik/weapons/scar_ik.anm", "dz/anims/anm/player/reloads/scar/w_scar_states.anm");	 
	
		pType.AddItemInHandsProfileIK("UMP9mm_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_ump45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ump.anm", "dz/anims/anm/player/reloads/ump45/w_ump45_states.anm");	 
  		
		pType.AddItemInHandsProfileIK("Mini14_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_m14.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m14_ik.anm", "dz/anims/anm/player/reloads/m14/w_m14_states.anm");	 

		pType.AddItemInHandsProfileIK("VAL556_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_as_val.asi", pBehavior, "dz/anims/anm/player/ik/weapons/val.anm", "dz/anims/anm/player/reloads/m14/w_val_states.anm");	 

	}		
};