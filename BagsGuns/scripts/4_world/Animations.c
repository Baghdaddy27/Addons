modded class ModItemRegisterCallbacks
{
// RIFLES
    override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );

        pType.AddItemInHandsProfileIK("Bags_AR15_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");    
        pType.AddItemInHandsProfileIK("Bags_AR9_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");   
        pType.AddItemInHandsProfileIK("Bags_AR10_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");   

        pType.AddItemInHandsProfileIK("Bags_AK45_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_AKM_states.anm");    

        pType.AddItemInHandsProfileIK("Bags_SCARL_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_scarh.asi", pBehavior, "dz/anims/anm/player/ik/weapons/scar_ik.anm", "dz/anims/anm/player/reloads/scar/w_scar_states.anm");  

        pType.AddItemInHandsProfileIK("Bags_Mini14_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_m14.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m14_ik.anm", "dz/anims/anm/player/reloads/m14/w_m14_states.anm");  
    }
};