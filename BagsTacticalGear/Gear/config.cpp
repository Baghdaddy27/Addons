class CfgPatches
{
    class Gear
    {
        units[] = {
            "Bags_Armband_Ally",
            "Bags_Armband_CAF",
            "Bags_Armband_GDI",
            "Bags_Armband_KRG",
            "Bags_Armband_Med",
            "Bags_Armband_NOD",
            "Bags_Armband_Peace",
            "Bags_Armband_Plz",
            "Bags_Armband_Snek",
            "Bags_Armband_Takistan",
            "Bags_Armband_USAF",
            "Bags_Armband_USArmy",
            "Bags_Armband_USCG",
            "Bags_Armband_USMC",
            "Bags_Armband_USN",
            "Bags_Armband_USSF",
            "Bags_Armband_USSR",
            "Bags_Flag_Ally",
            "Bags_Flag_CAF",
            "Bags_Flag_GDI",
            "Bags_Flag_KRG",
            "Bags_Flag_Med",
            "Bags_Flag_NOD",
            "Bags_Flag_Peace",
            "Bags_Flag_Plz",
            "Bags_Flag_Snek",
            "Bags_Flag_Takistan",
            "Bags_Flag_USAF",
            "Bags_Flag_USArmy",
            "Bags_Flag_USCG",
            "Bags_Flag_USMC",
            "Bags_Flag_USN",
            "Bags_Flag_USSF",
            "Bags_Flag_USSR"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Characters",
            "DZ_Gear_Camping"
        };
    };
};
class CfgVehicles
{

    //Flags
    class Flag_Base;
    class Bags_Flag_Takistan: Flag_Base
    {
        scope = 2;
        displayName = "Takistan Flag";
        descriptionShort = "Flag of the county of Takistan. The origins of Takistan dates back to 636 CE when Muslim tribes founded a kingdom and established the first ruling dynasty.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_takistan_co.paa"
        };
        color="Takistan";
    };
    class Bags_Flag_CAF: Flag_Base
    {
        scope = 2;
        displayName = "CAF Flag";
        descriptionShort = "For people who like coffee.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_caf_co.paa"
        };
        color="CAF";
    };
    class Bags_Flag_KRG: Flag_Base
    {
        scope = 2;
        displayName = "Krieger Gaming Flag";
        descriptionShort = "Kriger Gaming is a Veteran and First Responder mental health peer-support community.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_krg_co.paa"
        };
        color="KRG";
    };
    class Bags_Flag_Med: Flag_Base
    {
        scope = 2;
        displayName = "Red Cross Flag";
        descriptionShort = "For people who like to render aid to others.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_med_co.paa"
        };
        color="Med";
    };
    class Bags_Flag_Peace: Flag_Base
    {
        scope = 2;
        displayName = "Goose Flag";
        descriptionShort = "Peace was never an option.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_peace_co.paa"
        };
        color="Peace";
    };
    class Bags_Flag_Plz: Flag_Base
    {
        scope = 2;
        displayName = "Please Tred on Me Flag";
        descriptionShort = "For people who want to be dominated. UwU.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_plz_co.paa"
        };
        color="Plz";
    };
    class Bags_Flag_Snek: Flag_Base
    {
        scope = 2;
        displayName = "Pride Snek Flag";
        descriptionShort = "For people who like Snek and Pride.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_snek_co.paa"
        };
        color="Snek";
    };
    class Bags_Flag_USAF: Flag_Base
    {
        scope = 2;
        displayName = "US Air Force Flag";
        descriptionShort = "The flag of the US Air Force. Pinky out fancy branch.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_usaf_co.paa"
        };
        color="USAF";
    };
    class Bags_Flag_USArmy: Flag_Base
    {
        scope = 2;
        displayName = "US Army Flag";
        descriptionShort = "The flag of the US Army. Hooah, Hooah.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_usarmy_co.paa"
        };
        color="USArmy";
    };
    class Bags_Flag_USCG: Flag_Base
    {
        scope = 2;
        displayName = "US Coast Guard Flag";
        descriptionShort = "The flag of the US Coast Guard. Puddle Pirates to the rescue!";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_uscg_co.paa"
        };
        color="USCG";
    };
    class Bags_Flag_USMC: Flag_Base
    {
        scope = 2;
        displayName = "US Marine Corps Flag";
        descriptionShort = "The flag of the USMC. Oorah Devil Dogs. Yut, Kill, Nut.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_usmc_co.paa"
        };
        color="USMC";
    };
    class Bags_Flag_USN: Flag_Base
    {
        scope = 2;
        displayName = "US Navy Flag";
        descriptionShort = "The flag of the US Navy. Ahoy there sailor, UwU!";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_usn_co.paa"
        };
        color="USN";
    };
    class Bags_Flag_USSF: Flag_Base
    {
        scope = 2;
        displayName = "US Space Force Flag";
        descriptionShort = "The flag of the US Space Force. Robotic noises 01001010010011010";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_ussf_co.paa"
        };
        color="USSF";
    };
    class Bags_Flag_Ally: Flag_Base
    {
        scope = 2;
        displayName = "Allies Flag";
        descriptionShort = "The flag of the Allies from Red Alert.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_ally_co.paa"
        };
        color="Ally";
    };
    class Bags_Flag_USSR: Flag_Base
    {
        scope = 2;
        displayName = "USSR Flag";
        descriptionShort = "The flag of the USSR from Red Alert.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_svt_co.paa"
        };
        color="USSR";
    };
    class Bags_Flag_GDI: Flag_Base
    {
        scope = 2;
        displayName = "GDI Flag";
        descriptionShort = "The flag of the Global Defense Initiative (GDI) from Tiberian Sun.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_gdi_co.paa"
        };
        color="GDI";
    };
    class Bags_Flag_NOD: Flag_Base
    {
        scope = 2;
        displayName = "NOD Flag";
        descriptionShort = "The flag of the Nrotherhood of Nod from Tiberian Sun.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_nod_co.paa"
        };
        color="NOD";
    };
    class Bags_Flag_ENC: Flag_Base
    {
        scope = 2;
        displayName = "Enclave Flag";
        descriptionShort = "The flag of the Enclave from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_enc_co.paa"
        };
        color="ENC";
    };
    class Bags_Flag_BHS: Flag_Base
    {
        scope = 2;
        displayName = "Brotherhood of Steel Flag";
        descriptionShort = "The flag of the Brotherhood of Steel from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_bhs_co.paa"
        };
        color="BHS";
    };
    class Bags_Flag_INST: Flag_Base
    {
        scope = 2;
        displayName = "Institute Flag";
        descriptionShort = "The flag of the Institute from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_inst_co.paa"
        };
        color="INST";
    };
    class Bags_Flag_LEG: Flag_Base
    {
        scope = 2;
        displayName = "Legion Flag";
        descriptionShort = "The flag of Caesar Legion from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_leg_co.paa"
        };
        color="LEG";
    };
    class Bags_Flag_MM: Flag_Base
    {
        scope = 2;
        displayName = "Minutemen Flag";
        descriptionShort = "The flag of the Minutemen from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_mm_co.paa"
        };
        color="MM";
    };
    class Bags_Flag_NCR: Flag_Base
    {
        scope = 2;
        displayName = "New California Republic Flag";
        descriptionShort = "The flag of the New California Republic from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_NCR_co.paa"
        };
        color="NCR";
    };


    //Armbands
    class Armband_ColorBase;
    class Bags_Armband_Takistan: Armband_ColorBase
    {
        scope = 2;
        displayName = "Takistan Armband";
        descriptionShort = "Armband of the county of Takistan. The origins of Takistan dates back to 636 CE when Muslim tribes founded a kingdom and established the first ruling dynasty.";
        color="Takistan";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_takistan_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_takistan_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_takistan_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_takistan_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_takistan_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_takistan_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_takistan_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_takistan_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_takistan_co.paa"
        };
    };
    class Bags_Armband_KRG: Armband_ColorBase
    {
        scope = 2;
        displayName = "Krieger Gaming Armband";
        descriptionShort = "For Veterans and First Responders.";
        color="KRG";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_krg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_krg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_krg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_krg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_krg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_krg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_krg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_krg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_krg_co.paa"
        };
    };
    class Bags_Armband_CAF: Armband_ColorBase
    {
        scope = 2;
        displayName = "CAF Armband";
        descriptionShort = "For people who like coffee.";
        color="CAF";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_caf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_caf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_caf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_caf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_caf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_caf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_caf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_caf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_caf_co.paa"
        };
    };
    class Bags_Armband_Med: Armband_ColorBase
    {
        scope = 2;
        displayName = "Red Cross Armband";
        descriptionShort = "For people who like to render aid to others.";
        color="Med";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_med_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_med_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_med_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_med_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_med_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_med_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_med_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_med_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_med_co.paa"
        };
    };
    class Bags_Armband_Peace: Armband_ColorBase
    {
        scope = 2;
        displayName = "Krieger Gaming Armband";
        descriptionShort = "Peace was never an option.";
        color="Peace";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_peace_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_peace_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_peace_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_peace_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_peace_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_peace_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_peace_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_peace_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_peace_co.paa"
        };
    };
    class Bags_Armband_Plz: Armband_ColorBase
    {
        scope = 2;
        displayName = "Please Tred on Me Armband";
        descriptionShort = "For people who want to be dominated. UwU.";
        color="Plz";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_plz_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_plz_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_plz_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_plz_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_plz_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_plz_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_plz_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_plz_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_plz_co.paa"
        };
    };
    class Bags_Armband_Snek: Armband_ColorBase
    {
        scope = 2;
        displayName = "Snek Armband";
        descriptionShort = "For people who like Snek and Pride.";
        color="Snek";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_snek_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_snek_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_snek_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_snek_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_snek_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_snek_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_snek_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_snek_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_snek_co.paa"
        };
    };
    class Bags_Armband_USAF: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Air Force Armband";
        descriptionShort = "The Armband of the US Air Force. Pinky out fancy branch.";
        color="USAF";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_usaf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usaf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usaf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usaf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usaf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usaf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usaf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usaf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usaf_co.paa"
        };
    };
    class Bags_Armband_USArmy: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Army Armband";
        descriptionShort = "The Armband of the US Army. Hooah or whatever.";
        color="USArmy";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_usarmy_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usarmy_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usarmy_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usarmy_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usarmy_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usarmy_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usarmy_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usarmy_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usarmy_co.paa"
        };
    };
    class Bags_Armband_USCG: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Coast Guard Armband";
        descriptionShort = "The Armband of the US Coast Guard. Puddle Pirates to the rescue!";
        color="USCG";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_uscg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_uscg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_uscg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_uscg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_uscg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_uscg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_uscg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_uscg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_uscg_co.paa"
        };
    };
    class Bags_Armband_USMC: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Marine Corps Armband";
        descriptionShort = "The Armband of the USMC. Oorah Devil Dogs. Yut, Kill, Nut.";
        color="USMC";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_usmc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usmc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usmc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usmc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usmc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usmc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usmc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usmc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usmc_co.paa"
        };
    };
    class Bags_Armband_USN: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Navy Armband";
        descriptionShort = "The Armband of the US Navy. Ahoy there sailor, UwU!";
        color="USN";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_usn_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usn_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usn_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usn_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usn_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usn_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usn_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usn_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_usn_co.paa"
        };
    };
    class Bags_Armband_USSF: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Space Force Armband";
        descriptionShort = "The Armband of the US Space Force. Robotic noises 01001010010011010";
        color="USSF";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_ussf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ussf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ussf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ussf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ussf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ussf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ussf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ussf_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ussf_co.paa"
        };
    }; 
    class Bags_Armband_Ally: Armband_ColorBase
    {
        scope = 2;
        displayName = "Allies Armband";
        descriptionShort = "The armband of the Allies from Red Alert.";
        color="Ally";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_ally_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ally_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ally_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ally_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ally_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ally_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ally_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ally_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_ally_co.paa"
        };
    };
    class Bags_Armband_USSR: Armband_ColorBase
    {
        scope = 2;
        displayName = "USSR Armband";
        descriptionShort = "The armband of the Soviets from Red Alert.";
        color="USSR";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_svt_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_svt_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_svt_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_svt_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_svt_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_svt_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_svt_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_svt_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_svt_co.paa"
        };
    }; 
    class Bags_Armband_GDI: Armband_ColorBase
    {
        scope = 2;
        displayName = "GDI Armband";
        descriptionShort = "The Armband of the Global Defense Initiaive (GDI) from Tiberian Sun.";
        color="GDI";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_gdi_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_gdi_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_gdi_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_gdi_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_gdi_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_gdi_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_gdi_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_gdi_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_gdi_co.paa"
        };
    };
    class Bags_Armband_NOD: Armband_ColorBase
    {
        scope = 2;
        displayName = "NOD Armband";
        descriptionShort = "The Armband of the Brotherhood of Nod from Tiberian Sun.";
        color="Nod";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_nod_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_nod_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_nod_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_nod_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_nod_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_nod_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_nod_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_nod_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_nod_co.paa"
        };
    }; 
    class Bags_Armband_ENC: Armband_ColorBase
    {
        scope = 2;
        displayName = "Enclave Armband";
        descriptionShort = "The Armband of the Enclave from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_enc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_enc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_enc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_enc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_enc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_enc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_enc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_enc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_enc_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_enc_co.paa"
        };
        color="ENC";
    };
    class Bags_Armband_BHS: Armband_ColorBase
    {
        scope = 2;
        displayName = "Brotherhood of Steel Armband";
        descriptionShort = "The Armband of the Brotherhood of Steel from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_bhs_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_bhs_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_bhs_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_bhs_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_bhs_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_bhs_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_bhs_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_bhs_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_bhs_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_bhs_co.paa"
        };
        color="BHS";
    };
    class Bags_Armband_INST: Armband_ColorBase
    {
        scope = 2;
        displayName = "Institute Armband";
        descriptionShort = "The Armband of the Institute from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_inst_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_inst_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_inst_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_inst_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_inst_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_inst_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_inst_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_inst_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_inst_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_inst_co.paa"
        };
        color="INST";
    };
    class Bags_Armband_LEG: Armband_ColorBase
    {
        scope = 2;
        displayName = "Legion Armband";
        descriptionShort = "The Armband of Caesar Legion from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_leg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_leg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_leg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_leg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_leg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_leg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_leg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_leg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_leg_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_leg_co.paa"
        };
        color="LEG";
    };
    class Bags_Armband_MM: Armband_ColorBase
    {
        scope = 2;
        displayName = "Minutemen Armband";
        descriptionShort = "The Armband of the Minutemen from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_mm_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_mm_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_mm_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_mm_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_mm_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_mm_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_mm_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_mm_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_mm_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_mm_co.paa"
        };
        color="MM";
    };
    class Bags_Armband_NCR: Armband_ColorBase
    {
        scope = 2;
        displayName = "New California Republic Armband";
        descriptionShort = "The Armband of the New California Republic from Fallout.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Flags\flag_NCR_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_NCR_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_NCR_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_NCR_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_NCR_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_NCR_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_NCR_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_NCR_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_NCR_co.paa",
            "BagsTacticalGear\Gear\Flags\flag_NCR_co.paa"
        };
        color="NCR";
    };   


//Press Vest
    class PressVest_ColorBase;
    class Bags_PressVest_BLK: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Black";
        descriptionShort = "A flat-black ballistic vest.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_blk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_blk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_blk_co.paa"
        };
    };
    class Bags_PressVest_DST: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Tan";
        descriptionShort = "A flat-tan Ballistic Vest.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_dst_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_dst_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_dst_co.paa"
        };
    };
    class Bags_PressVest_ERDL: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Woodland";
        descriptionShort = "ERDL camo, also known as the Leaf or Woodland pattern, is a military camouflage design developed by the United States Army in 1948.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_erdl_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_erdl_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_erdl_co.paa"
        };
    };
    class Bags_PressVest_OLV: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Olive";
        descriptionShort = "A flat-olive ballistic vest.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_olv_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_olv_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_olv_co.paa"
        };
    };

// PLATE CARRIERS
    class PlateCarrierVest;
    class Bags_PressVest_ACU: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest UCP";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa"
        };
    };
    class Bags_PressVest_CAN: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest CADPAT";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa"
        };
    };
    class Bags_PressVest_CC: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest 6-Color Desert";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa"
        };
    };
    class Bags_PressVest_CCI: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest Iraqi";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_irq_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_irq_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_irq_co.paa"
        };
    };
    class Bags_PressVest_CHN: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest PLA";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa"
        };
    };
    class Bags_PressVest_DCU: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest DCU";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa"
        };
    };
    class Bags_PressVest_Digi: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest EMR Arid";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa"
        };
    };
    class Bags_PressVest_EGT: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest Egyptian";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa"
        };
    };
    class Bags_PressVest_FLK: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest Flektarn";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa"
        };
    };
    class Bags_PressVest_Multicam: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest Multicam";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa"
        };
    };
    class Bags_PressVest_MulticamG: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest Multicam Green";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_gmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_gmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_gmulti_co.paa"
        };
    };
    class Bags_PressVest_MulticamB: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest Multicam Black";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_bmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_bmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_bmulti_co.paa"
        };
    };
    class Bags_PressVest_NK: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest KPA";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa"
        };
    };
    class Bags_PressVest_OP4: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest OPFOR";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa"
        };
    };
    class Bags_PressVest_Pink: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest Pink";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa"
        };
    };
    class Bags_PressVest_TGR: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest Tiger-Stripe";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa"
        };
    };
    class Bags_PressVest_TRK: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest M2008";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_trk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_trk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_trk_co.paa"
        };
    };
    class Bags_PressVest_RUS: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest EMR Tsifra";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa"
        };
    };
    class Bags_PressVest_SAF: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest SANDF";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa"
        };
    };
    class Bags_PressVest_SWD: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest M90";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa"
        };
    };
    class Bags_PressVest_UKR: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest MM-14";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa"
        };
    };
    class Bags_PressVest_URB: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest Urban";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa"
        };
    };
    class Bags_PressVest_USN: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest Kamysh";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa"
        };
    };
    class Bags_PressVest_USN2: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest NWU III";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa"
        };
    };
    class Bags_PressVest_WW2: PlateCarrierVest
    {
        scope = 2;
        displayName = "Ballistic Vest WW2";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa"
        };
    };

    // HOLSTER
    class PlateCarrierHolster;
    class Bags_Holster_ACU: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster UCP";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa"
        };
    };
    class Bags_Holster_CAN: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster CADPAT";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa"
        };
    };
    class Bags_Holster_CC: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster 6-Color Desert";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa"
        };
    };
    class Bags_Holster_CCI: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster Iraqi";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_irq_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_irq_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_irq_co.paa"
        };
    };
    class Bags_Holster_CHN: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster PLA";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa"
        };
    };
    class Bags_Holster_DCU: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster DCU";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa"
        };
    };
    class Bags_Holster_Digi: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster EMR Arid";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa"
        };
    };
    class Bags_Holster_EGT: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster Egyptian";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa"
        };
    };
    class Bags_Holster_FLK: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster Flektarn";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa"
        };
    };
    class Bags_Holster_Multicam: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster Multicam";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa"
        };
    };
    class Bags_Holster_MulticamG: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster Multicam Green";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_gmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_gmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_gmulti_co.paa"
        };
    };
    class Bags_Holster_MulticamB: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster Multicam Black";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_bmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_bmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_bmulti_co.paa"
        };
    };
    class Bags_Holster_NK: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster KPA";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa"
        };
    };
    class Bags_Holster_OP4: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster OPFOR";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa"
        };
    };
    class Bags_Holster_Pink: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster Pink";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa"
        };
    };
    class Bags_Holster_TGR: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster Tiger-Stripe";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa"
        };
    };
    class Bags_Holster_TRK: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster M2008";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_trk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_trk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_trk_co.paa"
        };
    };
    class Bags_Holster_RUS: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster EMR Tsifra";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa"
        };
    };
    class Bags_Holster_SAF: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster SANDF";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa"
        };
    };
    class Bags_Holster_SWD: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster M90";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa"
        };
    };
    class Bags_Holster_UKR: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster MM-14";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa"
        };
    };
    class Bags_Holster_URB: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster Urban";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa"
        };
    };
    class Bags_Holster_USN: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster Kamysh";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa"
        };
    };
    class Bags_Holster_USN2: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster NWU III";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa"
        };
    };
    class Bags_Holster_WW2: PlateCarrierHolster
    {
        scope = 2;
        displayName = "Holster WW2";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa"
        };
    };

// POUCHES
    class PlateCarrierPouches;
    class Bags_Pouches_ACU: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches UCP";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa"
        };
    };
    class Bags_Pouches_CAN: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches CADPAT";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa"
        };
    };
    class Bags_Pouches_CC: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches 6-Color Desert";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa"
        };
    };
    class Bags_Pouches_CCI: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches Iraqi";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_irq_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_irq_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_irq_co.paa"
        };
    };
    class Bags_Pouches_CHN: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches PLA";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa"
        };
    };
    class Bags_Pouches_DCU: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches DCU";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa"
        };
    };
    class Bags_Pouches_Digi: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches EMR Arid";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa"
        };
    };
    class Bags_Pouches_EGT: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches Egyptian";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa"
        };
    };
    class Bags_Pouches_FLK: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches Flektarn";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa"
        };
    };
    class Bags_Pouches_Multicam: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches Multicam";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa"
        };
    };
    class Bags_Pouches_MulticamG: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches Multicam Green";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_gmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_gmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_gmulti_co.paa"
        };
    };
    class Bags_Pouches_MulticamB: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches Multicam Black";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_bmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_bmulti_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_bmulti_co.paa"
        };
    };
    class Bags_Pouches_NK: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches KPA";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa"
        };
    };
    class Bags_Pouches_OP4: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches OPFOR";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa"
        };
    };
    class Bags_Pouches_Pink: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches Pink";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa"
        };
    };
    class Bags_Pouches_TGR: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches Tiger-Stripe";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa"
        };
    };
    class Bags_Pouches_TRK: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches M2008";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_trk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_trk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_trk_co.paa"
        };
    };
    class Bags_Pouches_RUS: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches EMR Tsifra";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa"
        };
    };
    class Bags_Pouches_SAF: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches SANDF";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa"
        };
    };
    class Bags_Pouches_SWD: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches M90";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa"
        };
    };
    class Bags_Pouches_UKR: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches MM-14";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa"
        };
    };
    class Bags_Pouches_URB: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches Urban";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa"
        };
    };
    class Bags_Pouches_USN: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches Kamysh";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa"
        };
    };
    class Bags_Pouches_USN2: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches NWU III";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa"
        };
    };
    class Bags_Pouches_WW2: PlateCarrierPouches
    {
        scope = 2;
        displayName = "Pouches WW2";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
        {
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa"
        };
    };


// Flat Helmet
class BallisticHelmet_Colorbase;
class Bags_BallisticHelmet_DST: BallisticHelmet_Colorbase
    {
        scope = 2;
        displayName = "Ballistic Helmet Flat-Tan";
        descriptionShort = "A Ballistic Helmet with a Flat-Tan hue.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_dst_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_dst_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_dst_co.paa"
        };
    };

//BallisticHelmet
    class BallisticHelmet_BDU;
    class Bags_BallisticHelmet_ACU: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet UCP";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_acu_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_acu_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_acu_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_CAN: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet CADPAT";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_can_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_can_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_can_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_CC: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet 6-Color Desert";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_cc_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_cc_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_cc_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_CCI: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet Iraqi";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_irq_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_irq_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_irq_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_CHN: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet PLA";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_chn_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_chn_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_chn_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_DCU: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet DCU";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_dcu_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_dcu_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_dcu_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_Digi: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet EMR Arid";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_digi_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_digi_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_digi_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_EGT: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet Egyptian";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_egt_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_egt_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_egt_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_FLK: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet Flektarn";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_flk_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_flk_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_flk_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_Multicam: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet Multicam";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_multicam_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_multicam_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_multicam_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_MulticamG: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet Multicam Green";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_gmulti_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_gmulti_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_gmulti_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_MulticamB: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet Multicam Black";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_bmulti_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_bmulti_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_bmulti_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_NK: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet KPA";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_nk_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_nk_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_nk_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_OP4: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet OPFOR";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_op4_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_op4_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_op4_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_Pink: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet Pink";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_pink_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_pink_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_pink_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_TGR: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet Tiger-Stripe";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_tgr_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_tgr_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_tgr_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_TRK: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet M2008";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_trk_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_trk_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_trk_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_RUS: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet EMR Tsifra";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_rus_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_rus_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_rus_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_SAF: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet SANDF";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_saf_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_saf_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_saf_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_SWD: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet M90";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_swd_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_swd_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_swd_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_UKR: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet MM-14";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_ukr_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_ukr_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_ukr_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_URB: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet Urban";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_urb_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_urb_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_urb_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_USN: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet Kamysh Digital";
        descriptionShort = "The Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_USN2: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet NWU III";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn2_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn2_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn2_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };
    class Bags_BallisticHelmet_WW2: BallisticHelmet_BDU
    {
        scope = 2;
        displayName = "Ballistic Helmet WW2";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        model="\DZ\characters\headgear\pasgt_g.p3d";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_ww2_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_ww2_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_ww2_co.paa"
        };
        class ClothingTypes
		{
			male="\DZ\characters\headgear\pasgt_m.p3d";
			female="\DZ\characters\headgear\pasgt_f.p3d";
		};
    };


//Mich2001Helmet
    class Mich2001Helmet;
    class Bags_Mich2001Helmet_ACU: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet UCP";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_acu_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_acu_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_acu_co.paa"
        };
    };
    class Bags_Mich2001Helmet_BLK: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Black";
        descriptionShort = "A Tactical Helmet with a Black Hue.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_blk_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_blk_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_blk_co.paa"
        };
    };
    class Bags_Mich2001Helmet_CAN: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet CADPAT";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_can_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_can_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_can_co.paa"
        };
    };
    class Bags_Mich2001Helmet_CC: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet 6-Color Desert";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_cc_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_cc_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_cc_co.paa"
        };
    };
    class Bags_Mich2001Helmet_CCI: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Iraqi";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_irq_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_irq_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_irq_co.paa"
        };
    };
    class Bags_Mich2001Helmet_CHN: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet PLA";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_chn_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_chn_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_chn_co.paa"
        };
    };
    class Bags_Mich2001Helmet_DCU: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet DCU";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_dcu_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_dcu_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_dcu_co.paa"
        };
    };
    class Bags_Mich2001Helmet_Digi: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet EMR Arid";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_digi_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_digi_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_digi_co.paa"
        };
    };
    class Bags_Mich2001Helmet_DST: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Flat Tan";
        descriptionShort = "A Tactical Helmet with a Flat-Tan hue.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_dst_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_dst_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_dst_co.paa"
        };
    };
    class Bags_Mich2001Helmet_EGT: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Egyptian";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_egt_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_egt_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_egt_co.paa"
        };
    };
    class Bags_Mich2001Helmet_FLK: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Flektarn";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_flk_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_flk_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_flk_co.paa"
        };
    };
    class Bags_Mich2001Helmet_Multicam: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Multicam";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_multicam_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_multicam_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_multicam_co.paa"
        };
    };
    class Bags_Mich2001Helmet_MulticamG: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Multicam Green";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_gmulti_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_gmulti_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_gmulti_co.paa"
        };
    };
    class Bags_Mich2001Helmet_MulticamB: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Multicam Black";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_bmulti_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_bmulti_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_bmulti_co.paa"
        };
    };
    class Bags_Mich2001Helmet_OP4: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet OPFOR";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_op4_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_op4_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_op4_co.paa"
        };
    };
    class Bags_Mich2001Helmet_NK: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet KPA";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_nk_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_nk_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_nk_co.paa"
        };
    };
    class Bags_Mich2001Helmet_Pink: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Pink";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_pink_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_pink_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_pink_co.paa"
        };
    };
    class Bags_Mich2001Helmet_TGR: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Tiger-Stripe";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_tgr_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_tgr_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_tgr_co.paa"
        };
    };
    class Bags_Mich2001Helmet_TRK: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet M2008";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_trk_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_trk_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_trk_co.paa"
        };
    };
    class Bags_Mich2001Helmet_RUS: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet EMR Tsifra";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_rus_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_rus_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_rus_co.paa"
        };
    };
    class Bags_Mich2001Helmet_SAF: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet SANDF";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_saf_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_saf_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_saf_co.paa"
        };
    };
        class Bags_Mich2001Helmet_SWD: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet M90";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_swd_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_swd_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_swd_co.paa"
        };
    };
    class Bags_Mich2001Helmet_UKR: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet MM-14";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_ukr_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_ukr_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_ukr_co.paa"
        };
    };
    class Bags_Mich2001Helmet_URB: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Urban";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_urb_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_urb_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_urb_co.paa"
        };
    };
    class Bags_Mich2001Helmet_USN: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet Kamysch Digital";
        descriptionShort = "The Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_usn_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_usn_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_usn_co.paa"
        };
    };
    class Bags_Mich2001Helmet_USN2: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet NWU III";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_usn2_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_usn2_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_usn2_co.paa"
        };
    };
    class Bags_Mich2001Helmet_WW2: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet WW2";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\mich2001_ww2_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_ww2_co.paa",
            "BagsTacticalGear\Gear\Helmets\mich2001_ww2_co.paa"
        };
    };


// Bags
    class TortillaBag;
    class Bags_Tortillabag_ACU: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag UCP";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_acu.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_acu.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_acu.paa"
        };
    };
    class Bags_Tortillabag_CAN: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag CADPAT";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_can.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_can.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_can.paa"
        };
    };
    class Bags_Tortillabag_CC: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag 6-Color Desert";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_cc.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_cc.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_cc.paa"
        };
    };
    class Bags_Tortillabag_CCI: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Iraqi";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_irq.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_irq.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_irq.paa"
        };
    };
    class Bags_Tortillabag_CHN: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag PLA";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_chn.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_chn.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_chn.paa"
        };
    };
    class Bags_Tortillabag_DCU: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag DCU";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_dcu.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_dcu.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_dcu.paa"
        };
    };
    class Bags_Tortillabag_Digi: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag EMR Arid";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_digi.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_digi.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_digi.paa"
        };
    };
    class Bags_Tortillabag_EGT: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Egyptian";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_egt.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_egt.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_egt.paa"
        };
    };
    class Bags_Tortillabag_FLK: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Flektarn";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_flk.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_flk.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_flk.paa"
        };
    };
    class Bags_Tortillabag_Multicam: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Multicam";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_multicam.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_multicam.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_multicam.paa"
        };
    };
    class Bags_Tortillabag_MulticamG: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Multicam Green";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_gmulti.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_gmulti.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_gmulti.paa"
        };
    };
    class Bags_Tortillabag_MulticamB: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Multicam Black";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_bmulti.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_bmulti.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_bmulti.paa"
        };
    };
    class Bags_Tortillabag_NK: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag KPA";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_nk.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_nk.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_nk.paa"
        };
    };
    class Bags_Tortillabag_OP4: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag OPFOR";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_op4.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_op4.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_op4.paa"
        };
    };
    class Bags_Tortillabag_Pink: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Pink";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_pink.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_pink.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_pink.paa"
        };
    };
    class Bags_Tortillabag_TGR: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Tiger-Stripe";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_tgr.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_tgr.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_tgr.paa"
        };
    };
    class Bags_Tortillabag_TRK: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag M2008";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_trk.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_trk.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_trk.paa"
        };
    };
    class Bags_Tortillabag_RUS: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag EMR Tsifra";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_rus.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_rus.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_rus.paa"
        };
    };
    class Bags_Tortillabag_SAF: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag SANDF";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_saf.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_saf.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_saf.paa"
        };
    };
    class Bags_Tortillabag_SWD: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag M90";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_swd.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_swd.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_swd.paa"
        };
    };
    class Bags_Tortillabag_UKR: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag MM-14";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_ukr.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_ukr.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_ukr.paa"
        };
    };
    class Bags_Tortillabag_URB: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Urban";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_urb.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_urb.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_urb.paa"
        };
    };
    class Bags_Tortillabag_USN: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Kamysh";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_usn.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_usn.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_usn.paa"
        };
    };
    class Bags_Tortillabag_USN2: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag NWU III";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_usn2.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_usn2.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_usn2.paa"
        };
    };
    class Bags_Tortillabag_WW2: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag WW2";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_ww2.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_ww2.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_ww2.paa"
        };
    };

    // Shemaghs
	class Shemag_ColorBase;
	class Bags_Shemag_Kufiya: Shemag_ColorBase
    {
        scope = 2;
        displayName = "Kufiyah White";
        descriptionShort = "The kufiya, also known as a keffiyeh, is a traditional Arabic scarf that is typically square and made of cotton.";
        heatIsolation=0.40000001;
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
        hiddenSelectionsTextures[] =
        {
			"\BagsTacticalGear\Gear\Shemaghs\ShemagFH_g_kufw_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufw_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufw_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufw_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufw_co.paa"
        };
    };
    class Bags_Shemag_KufiyaWhiteRed: Shemag_ColorBase
    {
        scope = 2;
        displayName = "Kufiyah White, Green, and Red";
        descriptionShort = "The kufiya, also known as a keffiyeh, is a traditional Arabic scarf that is typically square and made of cotton.";
        heatIsolation=0.40000001;
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
        hiddenSelectionsTextures[] =
        {
			"\BagsTacticalGear\Gear\Shemaghs\ShemagFH_g_wr_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_wr_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_wr_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_wr_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_wr_co.paa"
        };
    };
    class Bags_Shemag_KufiyaRed: Shemag_ColorBase
    {
        scope = 2;
        displayName = "Kufiyah Red";
        descriptionShort = "The kufiya, also known as a keffiyeh, is a traditional Arabic scarf that is typically square and made of cotton.";
        heatIsolation=0.40000001;
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
        hiddenSelectionsTextures[] =
        {
			"\BagsTacticalGear\Gear\Shemaghs\ShemagFH_g_kufr_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufr_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufr_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufr_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufr_co.paa"
        };
    };
    class Bags_Shemag_KufiyaBlue: Shemag_ColorBase
    {
        scope = 2;
        displayName = "Kufiyah Blue";
        descriptionShort = "The kufiya, also known as a keffiyeh, is a traditional Arabic scarf that is typically square and made of cotton.";
        heatIsolation=0.40000001;
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
        hiddenSelectionsTextures[] =
        {
			"\BagsTacticalGear\Gear\Shemaghs\ShemagFH_g_kufb_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufb_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufb_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufb_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufb_co.paa"
        };
    };
    class Bags_Shemag_KufiyaGreen: Shemag_ColorBase
    {
        scope = 2;
        displayName = "Kufiyah Green";
        descriptionShort = "The kufiya, also known as a keffiyeh, is a traditional Arabic scarf that is typically square and made of cotton.";
        heatIsolation=0.40000001;
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
        hiddenSelectionsTextures[] =
        {
			"\BagsTacticalGear\Gear\Shemaghs\ShemagFH_g_kufg_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufg_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufg_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufg_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufg_co.paa"
        };
    };
    class Bags_Shemag_KufiyaTan: Shemag_ColorBase
    {
        scope = 2;
        displayName = "Kufiyah Beige";
        descriptionShort = "The kufiya, also known as a keffiyeh, is a traditional Arabic scarf that is typically square and made of cotton.";
        heatIsolation=0.40000001;
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
        hiddenSelectionsTextures[] =
        {
			"\BagsTacticalGear\Gear\Shemaghs\ShemagFH_g_kuft_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kuft_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kuft_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kuft_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kuft_co.paa"
        };
    };
    class Bags_Shemag_KufiyaOrange: Shemag_ColorBase
    {
        scope = 2;
        displayName = "Kufiyah Orange";
        descriptionShort = "The kufiya, also known as a keffiyeh, is a traditional Arabic scarf that is typically square and made of cotton.";
        heatIsolation=0.40000001;
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
        hiddenSelectionsTextures[] =
        {
			"\BagsTacticalGear\Gear\Shemaghs\ShemagFH_g_kufo_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufo_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufo_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufo_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufo_co.paa"
        };
    };
    class Bags_Shemag_KufiyaGrey: Shemag_ColorBase
    {
        scope = 2;
        displayName = "Kufiyah Grey";
        descriptionShort = "The kufiya, also known as a keffiyeh, is a traditional Arabic scarf that is typically square and made of cotton.";
        heatIsolation=0.40000001;
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
        hiddenSelectionsTextures[] =
        {
			"\BagsTacticalGear\Gear\Shemaghs\ShemagFH_g_kufbk_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufbk_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufbk_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagH_kufbk_co.paa",
			"\BagsTacticalGear\Gear\Shemaghs\ShemagF_kufbk_co.paa"
        };
	};

    // First Aid Kit
    class Container_Base;
    class FirstAidKit: Container_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_FirstAidKit0";
		descriptionShort="$STR_CfgVehicles_FirstAidKit1";
		model="\dz\gear\containers\FirstAidKit.p3d";
		rotationFlags=17;
		weight=140;
		itemSize[]={3,3};
		itemsCargoSize[]={4,4};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		canBeDigged=1;
		repairableWithKits[]={2};
		repairCosts[]={25};
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\FirsAidKit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\FirsAidKit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\FirsAidKit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\FirsAidKit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\FirsAidKit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="textile";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};

//Ghillie Suit
    class GhillieSuit_ColorBase;
    class Bags_GhillieSuit_Arid: GhillieSuit_ColorBase
	{
		scope=2;
        displayName="Ghillie Suit Arid";
		descriptionShort="A Ghillie Suit for arid or desert environments.";
		visibilityModifier=0.60000002;
        heatIsolation=0.40000001;
		hiddenSelectionsTextures[]=
		{
			"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
			"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
			"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
							    "BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
							}
						},
						
						{
							0.69999999,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
							}
						},
						
						{
							0.5,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
    
// Ghillie Wrap
    class GhillieAtt_ColorBase;
    class Bags_GhillieAtt_Arid: GhillieAtt_ColorBase
	{
		scope=2;
        displayName="Ghillie Wrap Arid";
		descriptionShort="A Ghillie weapon wrap for arid or desert environments.";
        heatIsolation=0.40000001;
		hiddenSelectionsTextures[]=
		{
			"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
							    "BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
							}
						},
						
						{
							0.69999999,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
							}
						},
						
						{
							0.5,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_destruct_co.paa"
							}
						}
					};
				};
			};
        };	
    };

    // Ghillie Top
    class GhillieTop_ColorBase;
    class Bags_GhillieTop_Arid: GhillieTop_ColorBase
	{
		scope=2;
        displayName="Ghillie Top Arid";
		descriptionShort="Ghillie clothing for arid or desert environments.";
        heatIsolation=0.40000001;
        visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
            "BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
            "BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
							    "BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
							}
						},
						
						{
							0.69999999,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
							}
						},
						
						{
							0.5,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_destruct_co.paa"
							}
						}
					};
				};
			};
        };	
    };

    //Ghillie Bushrag
    class GhillieBushrag_ColorBase;
    class Bags_GhillieBushrag_Arid: GhillieBushrag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
        displayName="Ghillie Bushrag Arid";
		descriptionShort="Ghillie clothing for arid or desert environments.";
        heatIsolation=0.40000001;
		hiddenSelectionsTextures[]=
		{
			"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
            "BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
            "BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
							    "BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
							}
						},
						
						{
							0.69999999,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
							}
						},
						
						{
							0.5,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_destruct_co.paa"
							}
						}
					};
				};
			};
        };	
    };

    class GhillieHood_ColorBase;
    class Bags_GhillieHood_Arid: GhillieHood_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
        displayName="Ghillie Hood Arid";
		descriptionShort="Ghillie clothing for arid or desert environments.";
        heatIsolation=0.40000001;
		hiddenSelectionsTextures[]=
		{
			"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
            "BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
            "BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
							    "BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
							}
						},
						
						{
							0.69999999,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_co.paa",
							}
						},
						
						{
							0.5,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"BagsTacticalGear\Gear\Ghillie\ghillie_arid_destruct_co.paa"
							}
						}
					};
				};
			};
        };	
    };
};