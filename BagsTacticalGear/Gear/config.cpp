class CfgPatches
{
    class Gear
    {
        units[] = {
            "Flag_Med",
            "Flag_Peace",
            "Flag_Plz",
            "Flag_Snek",
            "Flag_USAF",
            "Flag_USArmy",
            "Flag_USCG",
            "Flag_USMC",
            "Flag_USN",
            "Flag_USSF",
            "Flag_KRG",
            "Flag_CAF",
            "Flag_Takistan",
            "Armband_Med",
            "Armband_Peace",
            "Armband_Plz",
            "Armband_Snek",
            "Armband_USAF",
            "Armband_USArmy",
            "Armband_USCG",
            "Armband_USMC",
            "Armband_USN",
            "Armband_USSF",
            "Armband_KRG",
            "Armband_CAF",
            "Armband_Takistan",
            "Tortillabag_ACU",
            "Tortillabag_UKR",
            "Tortillabag_CAN",
            "Tortillabag_CC",
            "Tortillabag_CHN",
            "Tortillabag_DCU",
            "Tortillabag_Digi",
            "Tortillabag_DST",
            "Tortillabag_EGT",
            "Tortillabag_FLK",
            "Tortillabag_Multicam",
            "Tortillabag_NK",
            "Tortillabag_OP4",
            "Tortillabag_Pink",
            "Tortillabag_RUS",
            "Tortillabag_SAF",
            "Tortillabag_SWD",
            "Tortillabag_UKR",
            "Tortillabag_URB",
            "Tortillabag_USN",
            "Tortillabag_USN2",
            "Tortillabag_USCG",
            "Tortillabag_WW2",
            "Mich2001Helmet_ACU",
            "Mich2001Helmet_CAN",
            "Mich2001Helmet_CC",
            "Mich2001Helmet_CHN",
            "Mich2001Helmet_DCU",
            "Mich2001Helmet_Digi",
            "Mich2001Helmet_DST",
            "Mich2001Helmet_FLK",
            "Mich2001Helmet_EGT",
            "Mich2001Helmet_Multicam",
            "Mich2001Helmet_NK",
            "Mich2001Helmet_OP4",
            "Mich2001Helmet_Pink",
            "Mich2001Helmet_RUS",
            "Mich2001Helmet_SAF",
            "Mich2001Helmet_SWD",
            "Mich2001Helmet_UKR",
            "Mich2001Helmet_URB",
            "Mich2001Helmet_USN",
            "Mich2001Helmet_USN2",
            "Mich2001Helmet_WW2",
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
    class Flag_Takistan: Flag_Base
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
    class Flag_CAF: Flag_Base
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
    class Flag_KRG: Flag_Base
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
    class Flag_Med: Flag_Base
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
    class Flag_Peace: Flag_Base
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
    class Flag_Plz: Flag_Base
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
    class Flag_Snek: Flag_Base
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
    class Flag_USAF: Flag_Base
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
    class Flag_USArmy: Flag_Base
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
    class Flag_USCG: Flag_Base
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
    class Flag_USMC: Flag_Base
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
    class Flag_USN: Flag_Base
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
    class Flag_USSF: Flag_Base
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


    //Armbands
    class Armband_ColorBase;
    class Armband_Takistan: Armband_ColorBase
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
    class Armband_KRG: Armband_ColorBase
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
    class Armband_CAF: Armband_ColorBase
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
    class Armband_Med: Armband_ColorBase
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
    class Armband_Peace: Armband_ColorBase
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
    class Armband_Plz: Armband_ColorBase
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
    class Armband_Snek: Armband_ColorBase
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
    class Armband_USAF: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Air Force Armband";
        descriptionShort = "The flag of the US Air Force. Pinky out fancy branch.";
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
    class Armband_USArmy: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Army Armband";
        descriptionShort = "The flag of the US Army. Hooah or whatever.";
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
    class Armband_USCG: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Coast Guard Armband";
        descriptionShort = "The flag of the US Coast Guard. Puddle Pirates to the rescue!";
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
    class Armband_USMC: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Marine Corps Armband";
        descriptionShort = "The flag of the USMC. Oorah Devil Dogs. Yut, Kill, Nut.";
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
    class Armband_USN: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Navy Armband";
        descriptionShort = "The flag of the US Navy. Ahoy there sailor, UwU!";
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
    class Armband_USSF: Armband_ColorBase
    {
        scope = 2;
        displayName = "US Space Force Armband";
        descriptionShort = "The flag of the US Space Force. Robotic noises 01001010010011010";
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

    //Press Vest
    class PressVest_ColorBase;
    class PressVest_ACU: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest UCP";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_acu_co.paa"
        };
    };
    class PressVest_BLK: PressVest_ColorBase
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
    class PressVest_CAN: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest CADPAT";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_can_co.paa"
        };
    };
    class PressVest_CC: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest 6-Color Desert";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_cc_co.paa"
        };
    };
    class PressVest_CHN: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest PLA";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_chn_co.paa"
        };
    };
    class PressVest_DCU: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest DCU";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_dcu_co.paa"
        };
    };
    class PressVest_Digi: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest EMR Arid";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_digi_co.paa"
        };
    };
    class PressVest_DST: PressVest_ColorBase
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
    class PressVest_EGT: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Egyptian";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_egt_co.paa"
        };
    };
    class PressVest_ERDL: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Woodland";
        descriptionShort = "ERDL camo, also known as the Leaf or Woodland pattern, is a military camouflage design developed by the United States Army in 1948.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_erdl_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_erdl_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_erdl_co.paa"
        };
    };
    class PressVest_FLK: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Flektarn";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_flk_co.paa"
        };
    };
    class PressVest_Multicam: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Multicam";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_multicam_co.paa"
        };
    };
    class PressVest_NK: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest KPA";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_nk_co.paa"
        };
    };
    class PressVest_OLV: PressVest_ColorBase
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
    class PressVest_OP4: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest OPFOR";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_op4_co.paa"
        };
    };
    class PressVest_Pink: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Pink";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_pink_co.paa"
        };
    };
    class PressVest_TGR: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Tiger-Stripe";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_tgr_co.paa"
        };
    };
    class PressVest_RUS: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest EMR Tsifra";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_rus_co.paa"
        };
    };
    class PressVest_SAF: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest SANDF";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_saf_co.paa"
        };
    };
    class PressVest_SPN: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Policia Nacional";
        descriptionShort = "A vest stylized after the Policia Nacional or National Police of Spain.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_spn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_spn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_spn_co.paa"
        };
    };
    class PressVest_SWD: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest SAF";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_swd_co.paa"
        };
    };
    class PressVest_UKR: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest MM-14";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ukr_co.paa"
        };
    };
    class PressVest_URB: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Urban";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_urb_co.paa"
        };
    };
    class PressVest_USCG: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest USCG";
        descriptionShort = "A Ballistic Vest with USCG insigna. Used by Boarding Team members while conducting Law Enforcement on the high seas.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_uscg_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_uscg_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_uscg_co.paa"
        };
    };
    class PressVest_USN: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest Kamysh";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn_co.paa"
        };
    };
    class PressVest_USN2: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest NWU III";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_usn2_co.paa"
        };
    };
    class PressVest_WW2: PressVest_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Vest WW2";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa",
            "BagsTacticalGear\Gear\Vests\pressvest_ww2_co.paa"
        };
    };


//BallisticHelmet
    class BallisticHelmet_ColorBase;
    class BallisticHelmet_ACU: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet UCP";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_acu_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_acu_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_acu_co.paa"
        };
    };
    class BallisticHelmet_CAN: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet CADPAT";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_can_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_can_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_can_co.paa"
        };
    };
    class BallisticHelmet_CC: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet 6-Color Desert";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_cc_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_cc_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_cc_co.paa"
        };
    };
    class BallisticHelmet_CHN: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet PLA";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_chn_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_chn_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_chn_co.paa"
        };
    };
    class BallisticHelmet_DCU: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet DCU";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_dcu_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_dcu_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_dcu_co.paa"
        };
    };
    class BallisticHelmet_Digi: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet EMR Arid";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_digi_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_digi_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_digi_co.paa"
        };
    };
    class BallisticHelmet_DST: BallisticHelmet_ColorBase
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
    class BallisticHelmet_EGT: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet Egyptian";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_egt_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_egt_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_egt_co.paa"
        };
    };
    class BallisticHelmet_FLK: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet Flektarn";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_flk_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_flk_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_flk_co.paa"
        };
    };
    class BallisticHelmet_Multicam: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet Multicam";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_multicam_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_multicam_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_multicam_co.paa"
        };
    };
    class BallisticHelmet_NK: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet KPA";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_nk_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_nk_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_nk_co.paa"
        };
    };
    class BallisticHelmet_OP4: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet OPFOR";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_op4_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_op4_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_op4_co.paa"
        };
    };
    class BallisticHelmet_Pink: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet Pink";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_pink_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_pink_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_pink_co.paa"
        };
    };
    class BallisticHelmet_TGR: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet Tiger-Stripe";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_tgr_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_tgr_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_tgr_co.paa"
        };
    };
    class BallisticHelmet_RUS: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet EMR Tsifra";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_rus_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_rus_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_rus_co.paa"
        };
    };
    class BallisticHelmet_SAF: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet SANDF";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_saf_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_saf_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_saf_co.paa"
        };
    };
    class BallisticHelmet_SWD: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet SAF";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_swd_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_swd_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_swd_co.paa"
        };
    };
    class BallisticHelmet_UKR: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet MM-14";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_ukr_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_ukr_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_ukr_co.paa"
        };
    };
    class BallisticHelmet_URB: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet Urban";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_urb_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_urb_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_urb_co.paa"
        };
    };
    class BallisticHelmet_USN: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet Kamysh Digital";
        descriptionShort = "The Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn_co.paa"
        };
    };
    class BallisticHelmet_USN2: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet NWU III";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn2_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn2_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_usn2_co.paa"
        };
    };
    class BallisticHelmet_WW2: BallisticHelmet_ColorBase
    {
        scope = 2;
        displayName = "Ballistic Helmet WW2";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Gear\Helmets\helmetmich_ww2_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_ww2_co.paa",
            "BagsTacticalGear\Gear\Helmets\helmetmich_ww2_co.paa"
        };
    };


//Mich2001Helmet
    class Mich2001Helmet;
    class Mich2001Helmet_ACU: Mich2001Helmet
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
    class Mich2001Helmet_BLK: Mich2001Helmet
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
    class Mich2001Helmet_CAN: Mich2001Helmet
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
    class Mich2001Helmet_CC: Mich2001Helmet
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
    class Mich2001Helmet_CHN: Mich2001Helmet
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
    class Mich2001Helmet_DCU: Mich2001Helmet
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
    class Mich2001Helmet_Digi: Mich2001Helmet
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
    class Mich2001Helmet_DST: Mich2001Helmet
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
    class Mich2001Helmet_EGT: Mich2001Helmet
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
    class Mich2001Helmet_FLK: Mich2001Helmet
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
    class Mich2001Helmet_Multicam: Mich2001Helmet
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
    class Mich2001Helmet_OP4: Mich2001Helmet
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
    class Mich2001Helmet_NK: Mich2001Helmet
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
    class Mich2001Helmet_Pink: Mich2001Helmet
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
    class Mich2001Helmet_TGR: Mich2001Helmet
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
    class Mich2001Helmet_RUS: Mich2001Helmet
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
    class Mich2001Helmet_SAF: Mich2001Helmet
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
        class Mich2001Helmet_SWD: Mich2001Helmet
    {
        scope = 2;
        displayName = "Tactical Helmet SAF";
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
    class Mich2001Helmet_UKR: Mich2001Helmet
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
    class Mich2001Helmet_URB: Mich2001Helmet
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
    class Mich2001Helmet_USN: Mich2001Helmet
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
    class Mich2001Helmet_USN2: Mich2001Helmet
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
    class Mich2001Helmet_WW2: Mich2001Helmet
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
    class Tortillabag_ACU: TortillaBag
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
    class Tortillabag_BLK: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Black";
        descriptionShort = "A Tortillabag with a Black Hue.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_blk.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_blk.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_blk.paa"
        };
    };
    class Tortillabag_CAN: TortillaBag
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
    class Tortillabag_CC: TortillaBag
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
    class Tortillabag_CHN: TortillaBag
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
    class Tortillabag_DCU: TortillaBag
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
    class Tortillabag_Digi: TortillaBag
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
    class Tortillabag_DST: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag Flat-Tan";
        descriptionShort = "A Tortillabag with a Flat-Tan hue.";
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[] =
        {
            "\BagsTacticalGear\Gear\Bags\tortilla_dst.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_dst.paa",
            "\BagsTacticalGear\Gear\Bags\tortilla_dst.paa"
        };
    };
    class Tortillabag_EGT: TortillaBag
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
    class Tortillabag_FLK: TortillaBag
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
    class Tortillabag_Multicam: TortillaBag
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
    class Tortillabag_NK: TortillaBag
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
    class Tortillabag_OP4: TortillaBag
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
    class Tortillabag_Pink: TortillaBag
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
    class Tortillabag_TGR: TortillaBag
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
    class Tortillabag_RUS: TortillaBag
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
    class Tortillabag_SAF: TortillaBag
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
    class Tortillabag_SWD: TortillaBag
    {
        scope = 2;
        displayName = "Tortillabag SAF";
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
    class Tortillabag_UKR: TortillaBag
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
    class Tortillabag_URB: TortillaBag
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
    class Tortillabag_USN: TortillaBag
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
    class Tortillabag_USN2: TortillaBag
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
    class Tortillabag_WW2: TortillaBag
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
	class Shemag_Kufiya: Shemag_ColorBase
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
    class Shemag_KufiyaWhiteRed: Shemag_ColorBase
    {
        scope = 2;
        displayName = "Kufiyah White and Red";
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
    class Shemag_KufiyaRed: Shemag_ColorBase
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
    class Shemag_KufiyaBlue: Shemag_ColorBase
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
    class Shemag_KufiyaGreen: Shemag_ColorBase
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
    class Shemag_KufiyaTan: Shemag_ColorBase
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
    class Shemag_KufiyaOrange: Shemag_ColorBase
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
    class Shemag_KufiyaGrey: Shemag_ColorBase
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
};