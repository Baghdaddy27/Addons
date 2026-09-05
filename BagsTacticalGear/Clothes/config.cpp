class CfgPatches
{
    class Bags_Clothes
    {
        units[] = {
            "Bags_NBCJacketERDL",
            "Bags_NBCPantsERDL",
            "Bags_NBCHoodERDL",
            "Bags_NBCBootsERDL"

        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Characters"
        };
    };
};
class CfgVehicles
{

//TShirt
    class TShirt_ColorBase;
    class Bags_TShirt_ACU: TShirt_ColorBase
    {
        scope = 2;
        displayName = "UCP Cargo TShirt";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_acu_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_acu_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_acu_co.paa"
        };
    };
    class Bags_TShirt_CAN: TShirt_ColorBase
    {
        scope = 2;
        displayName = "CADPAT Cargo TShirt";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_can_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_can_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_can_co.paa"
        };
    };
    class Bags_TShirt_CC: TShirt_ColorBase
    {
        scope = 2;
        displayName = "6-Color Desert Cargo TShirt";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_cc_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_cc_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_cc_co.paa"
        };
    };
    class Bags_TShirt_CCI: TShirt_ColorBase
    {
        scope = 2;
        displayName = "Iraqi Cargo TShirt";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_irq_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_irq_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_irq_co.paa"
        };
    };
    class Bags_TShirt_CHN: TShirt_ColorBase
    {
        scope = 2;
        displayName = "PLA Cargo TShirt";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_chn_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_chn_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_chn_co.paa"
        };
    };
    class Bags_TShirt_DCU: TShirt_ColorBase
    {
        scope = 2;
        displayName = "DCU Cargo TShirt";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_dcu_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_dcu_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_dcu_co.paa"
        };
    };
    class Bags_TShirt_Digi: TShirt_ColorBase
    {
        scope = 2;
        displayName = "EMR Arid Cargo TShirt";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_digi_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_digi_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_digi_co.paa"
        };
    };
    class Bags_TShirt_EGT: TShirt_ColorBase
    {
        scope = 2;
        displayName = "Egyptian Cargo TShirt";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_egt_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_egt_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_egt_co.paa"
        };
    };
    class Bags_TShirt_FLK: TShirt_ColorBase
    {
        scope = 2;
        displayName = "Flektarn Cargo TShirt";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_flk_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_flk_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_flk_co.paa"
        };
    };
    class Bags_TShirt_MultiB: TShirt_ColorBase
    {
        scope = 2;
        displayName = "Multicam Black Cargo TShirt";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_multib_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_multib_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_multib_co.paa"
        };
    };
    class Bags_TShirt_Multicam: TShirt_ColorBase
    {
        scope = 2;
        displayName = "Multicam Cargo TShirt";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_multicam_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_multicam_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_multicam_co.paa"
        };
    };
    class Bags_TShirt_MultiG: TShirt_ColorBase
    {
        scope = 2;
        displayName = "Multicam Green Cargo TShirt";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_multig_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_multig_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_multig_co.paa"
        };
    };
    class Bags_TShirt_NK: TShirt_ColorBase
    {
        scope = 2;
        displayName = "KPA Cargo TShirt";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_nk_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_nk_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_nk_co.paa"
        };
    };
    class Bags_TShirt_OP4: TShirt_ColorBase
    {
        scope = 2;
        displayName = "OPFOR Cargo TShirt";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_op4_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_op4_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_op4_co.paa"
        };
    };
    class Bags_TShirt_Pink: TShirt_ColorBase
    {
        scope = 2;
        displayName = "Pink Cargo TShirt";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_pink_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_pink_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_pink_co.paa"
        };
    };
    class Bags_TShirt_RUS: TShirt_ColorBase
    {
        scope = 2;
        displayName = "EMR Tsfira Cargo TShirt";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_rus_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_rus_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_rus_co.paa"
        };
    };
    class Bags_TShirt_SAF: TShirt_ColorBase
    {
        scope = 2;
        displayName = "SANDF Cargo TShirt";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_saf_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_saf_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_saf_co.paa"
        };
    };
    class Bags_TShirt_SWD: TShirt_ColorBase
    {
        scope = 2;
        displayName = "M90 Cargo TShirt";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_swd_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_swd_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_swd_co.paa"
        };
    };
    class Bags_TShirt_TGR: TShirt_ColorBase
    {
        scope = 2;
        displayName = "Tiger-Stripe Cargo TShirt";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_tgr_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_tgr_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_tgr_co.paa"
        };
    };
    class Bags_TShirt_TRK: TShirt_ColorBase
    {
        scope = 2;
        displayName = "M2008 TShirt";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_trk_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_trk_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_trk_co.paa"
        };
    };
    class Bags_TShirt_UKR: TShirt_ColorBase
    {
        scope = 2;
        displayName = "MM-14 Cargo TShirt";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_ukr_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_ukr_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_ukr_co.paa"
        };
    };
    class Bags_TShirt_URB: TShirt_ColorBase
    {
        scope = 2;
        displayName = "Urban Camo Cargo TShirt";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_urb_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_urb_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_urb_co.paa"
        };
    };
    class Bags_TShirt_USN: TShirt_ColorBase
    {
        scope = 2;
        displayName = "Kamysh TShirt";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_usn_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_usn_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_usn_co.paa"
        };
    };
    class Bags_TShirt_USN2: TShirt_ColorBase
    {
        scope = 2;
        displayName = "NWU III Cargo TShirt";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_usn2_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_usn2_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_usn2_co.paa"
        };
    };
    class Bags_TShirt_WW2: TShirt_ColorBase
    {
        scope = 2;
        displayName = "NWU III Cargo TShirt";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_ww2_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_ww2_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_ww2_co.paa"
        };
    };


//Tactical Shirt
    class TacticalShirt_ColorBase;
    class Bags_TacticalShirt_ACU: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "UCP Cold-Weather Shirt";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_acu_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_acu_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_acu_co.paa"
        };
    };
    class Bags_TacticalShirt_CAN: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "CADPAT Cold-Weather Shirt";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_can_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_can_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_can_co.paa"
        };
    };
    class Bags_TacticalShirt_CC: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "6-Color Desert Cold-Weather Shirt";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_cc_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_cc_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_cc_co.paa"
        };
    };
    class Bags_TacticalShirt_CCI: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "Iraqi Cold-Weather Shirt";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_irq_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_irq_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_irq_co.paa"
        };
    };
    class Bags_TacticalShirt_DCU: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "DCU Cold-Weather Shirt";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_dcu_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_dcu_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_dcu_co.paa"
        };
    };
    class Bags_TacticalShirt_Multicam: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "Multicam Cold-Weather Shirt";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_multicam_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_multicam_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_multicam_co.paa"
        };
    };
    class Bags_TacticalShirt_MultiG: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "Multicam Green Cold-Weather Shirt";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_gmulti_co.paa"
        };
    };
    class Bags_TacticalShirt_MultiB: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "Multicam Black Cold-Weather Shirt";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_bmulti_co.paa"
        };
    };
    class Bags_TacticalShirt_OP4: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "OPFOR Cold-Weather Shirt";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_op4_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_op4_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_op4_co.paa"
        };
    };
    class Bags_TacticalShirt_Pink: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "Pink Camo Cold-Weather Shirt";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_pink_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_pink_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_pink_co.paa"
        };
    };
    class Bags_TacticalShirt_TGR: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "Tiger-Stripe Camo Cold-Weather Shirt";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_tgr_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_tgr_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_tgr_co.paa"
        };
    };
    class Bags_TacticalShirt_TRK: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "M2008 Cold-Weather Shirt";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_trk_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_trk_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_trk_co.paa"
        };
    };
    class Bags_TacticalShirt_URB: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "Urban Camo Cold-Weather Shirt";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_urb_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_urb_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_urb_co.paa"
        };
    };
    class Bags_TacticalShirt_USN: TacticalShirt_ColorBase
    {
        scope = 2;
        displayName = "NWU III Cold-Weather Shirt";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_ground_usn2_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_usn2_co.paa",
            "BagsTacticalGear\Clothes\Jackets\pcu5jacket_usn2_co.paa"
        };
    };

//Uniform Shirt
    class Shirt_Colorbase;
    class Bags_Shirt_ACU: Shirt_Colorbase
    {
        scope = 2;
        displayName = "UCP Hot-Weather Shirt";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_acu_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_acu_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_acu_co.paa"
        };
    };
    class Bags_Shirt_CAN: Shirt_Colorbase
    {
        scope = 2;
        displayName = "CADPAT Hot-Weather Shirt";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_can_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_can_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_can_co.paa"
        };
    };
    class Bags_Shirt_CC: Shirt_Colorbase
    {
        scope = 2;
        displayName = "6-Color Desert Hot-Weather Shirt";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_cc_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_cc_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_cc_co.paa"
        };
    };
    class Bags_Shirt_CCI: Shirt_Colorbase
    {
        scope = 2;
        displayName = "Iraqi Hot-Weather Shirt";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_irq_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_irq_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_irq_co.paa"
        };
    };
    class Bags_Shirt_DCU: Shirt_Colorbase
    {
        scope = 2;
        displayName = "DCU Hot-Weather Shirt";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_dcu_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_dcu_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_dcu_co.paa"
        };
    };
    class Bags_Shirt_Multicam: Shirt_Colorbase
    {
        scope = 2;
        displayName = "Multicam Hot-Weather Shirt";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_multicam_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_multicam_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_multicam_co.paa"
        };
    };
    class Bags_Shirt_MulticamG: Shirt_Colorbase
    {
        scope = 2;
        displayName = "Multicam Green Hot-Weather Shirt";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_gmulti_co.paa"
        };
    };
    class Bags_Shirt_MulticamB: Shirt_Colorbase
    {
        scope = 2;
        displayName = "Multicam Black Hot-Weather Shirt";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_bmulti_co.paa"
        };
    };
    class Bags_Shirt_OP4: Shirt_Colorbase
    {
        scope = 2;
        displayName = "OPFOR Hot-Weather Shirt";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_op4_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_op4_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_op4_co.paa"
        };
    };
    class Bags_Shirt_Pink: Shirt_Colorbase
    {
        scope = 2;
        displayName = "Pink Camo Hot-Weather Shirt";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_pink_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_pink_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_pink_co.paa"
        };
    };
    class Bags_Shirt_TGR: Shirt_Colorbase
    {
        scope = 2;
        displayName = "Tiger-Stripe Hot-Weather Shirt";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_tgr_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_tgr_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_tgr_co.paa"
        };
    };
    class Bags_Shirt_TRK: Shirt_Colorbase
    {
        scope = 2;
        displayName = "M2008 Hot-Weather Shirt";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_trk_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_trk_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_trk_co.paa"
        };
    };
    class Bags_Shirt_URB: Shirt_Colorbase
    {
        scope = 2;
        displayName = "Urban Camo Hot-Weather Shirt";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_urb_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_urb_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_urb_co.paa"
        };
    };
    class Bags_Shirt_USN2: Shirt_Colorbase
    {
        scope = 2;
        displayName = "NWU III Hot-Weather Shirt";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_usn2_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_usn2_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_usn2_co.paa"
        };
    };


//Gorka Jacket Hot Weather
    class GorkaEJacket_ColorBase;
    class Bags_GorkaEJacket_CHN: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "PLA Hot-Weather Jacket";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_chn_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_chn_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_chn_co.paa"
        };
    };
    class Bags_GorkaEJacket_Digi: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "EMR Arid Hot-Weather Jacket";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_digi_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_digi_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_digi_co.paa"
        };
    };
    class Bags_GorkaEJacket_DST: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "Gorka Flat-Tan Hot-Weather Jacket";
        descriptionShort = "A Soviet-style Patrol Jacket with a flat-tan hue.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_dst_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_dst_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_dst_co.paa"
        };
    };
    class Bags_GorkaEJacket_EGT: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "Egyptian Hot-Weather Jacket";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_egt_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_egt_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_egt_co.paa"
        };
    };
    class Bags_GorkaEJacket_FLK: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "Fletktarn Hot-Weather Jacket";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_flk_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_flk_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_flk_co.paa"
        };
    };
    class Bags_GorkaEJacket_NK: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "KPA Hot-Weather Jacket";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_nk_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_nk_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_nk_co.paa"
        };
    };
    class Bags_GorkaEJacket_RUS: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "EMR Tsifra Hot-Weather Jacket";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_rus_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_rus_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_rus_co.paa"
        };
    };
    class Bags_GorkaEJacket_SAF: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "SANDF Hot-Weather Jacket";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_saf_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_saf_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_saf_co.paa"
        };
    };
    class Bags_GorkaEJacket_SWD: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "M90 Hot-Weather Jacket";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_swd_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_swd_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_swd_co.paa"
        };
    };
    class Bags_GorkaEJacket_UKR: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "MM-14 Hot-Weather Jacket";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_ukr_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_ukr_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_ukr_co.paa"
        };
    };
    class Bags_GorkaEJacket_USN: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "Kamysh Digital Hot-Weather Jacket";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_usn_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_usn_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_usn_co.paa"
        };
    };
    class Bags_GorkaEJacket_WW2: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "WW2 Hot-Weather Jacket";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_ww2_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_ww2_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_ww2_co.paa"
        };
    };


//Gorka Jacket Cold Weather
    class Bags_GorkaEJacketCJacket_Chn: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "PLA Cold-Weather Jacket";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_chn_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_chn_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_chn_co.paa"
        };
    };
    class Bags_GorkaEJacketCJacket_Digi: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "EMR Arid Cold-Weather Jacket";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_digi_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_digi_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_digi_co.paa"
        };
    };
    class Bags_GorkaEJacketCJacket_DST: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "Gorka Flat-Tan Cold-Weather Jacket";
        descriptionShort = "A Soviet-style Patrol Jacket with a flat-tan hue.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_dst_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_dst_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_dst_co.paa"
        };
    };
    class Bags_GorkaEJacketCJacket_EGT: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "Egyptian Gorka Cold-Weather Jacket";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_egt_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_egt_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_egt_co.paa"
        };
    };
    class Bags_GorkaEJacketCJacket_FLK: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "Fletktarn Cold-Weather Jacket";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_flk_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_flk_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_flk_co.paa"
        };
    };
    class Bags_GorkaEJacketCJacket_NK: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "KPA Cold-Weather Jacket";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_nk_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_nk_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_nk_co.paa"
        };
    };
    class Bags_GorkaEJacketCJacket_RUS: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "EMR Tsifra Cold-Weather Jacket";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_rus_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_rus_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_rus_co.paa"
        };
    };
    class Bags_GorkaEJacketCJacket_SAF: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "SANDF Cold-Weather Jacket";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_saf_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_saf_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_saf_co.paa"
        };
    };
    class Bags_GorkaEJacketCJacket_SWD: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "M90 Cold-Weather Jacket";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_swd_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_swd_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_swd_co.paa"
        };
    };
    class Bags_GorkaEJacketCJacket_UKR: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "MM-14 Cold-Weather Jacket";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_ukr_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_ukr_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_ukr_co.paa"
        };
    };
    class Bags_GorkaEJacketCJacket_USN: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "Kamysh Digital Cold-Weather Jacket";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_usn_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_usn_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_usn_co.paa"
        };
    };
    class Bags_GorkaEJacketCJacket_WW2: GorkaEJacket_ColorBase
    {
        scope = 2;
        displayName = "WW2 Cold-Weather Jacket";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Jackets\gorka_up_g_ww2_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_ww2_co.paa",
            "BagsTacticalGear\Clothes\Jackets\gorka_upper_ww2_co.paa"
        };
    };


//Cargo Pants Hot Weather
    class CargoPants_ColorBase;
    class Bags_CargoPants_ACU: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "UCP Hot-Weather Pants";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_acu_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_acu_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_acu_co.paa"
        };  
    };
    class Bags_CargoPants_CAN: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "CADPAT Hot-Weather Pants";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_can_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_can_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_can_co.paa"
        };  
    };
    class Bags_CargoPants_CC: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "6-Color Desert Hot-Weather Pants";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_cc_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_cc_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_cc_co.paa"
        };  
    };
    class Bags_CargoPants_CCI: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Iraqi Hot-Weather Pants";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_irq_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_irq_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_irq_co.paa"
        };  
    };
    class Bags_CargoPants_DCU: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "DCU Hot-Weather Pants";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_dcu_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_dcu_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_dcu_co.paa"
        };  
    };
    class Bags_CargoPants_Multicam: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Multicam Hot-Weather Pants";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_multicam_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_multicam_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_multicam_co.paa"
        };  
    };
    class Bags_CargoPants_MulticamG: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Multicam Green Hot-Weather Pants";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_gmulti_co.paa"
        };  
    };
    class Bags_CargoPants_MulticamB: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Multicam Black Hot-Weather Pants";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_bmulti_co.paa"
        };  
    };
    class Bags_CargoPants_OP4: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "OPFOR Hot-Weather Pants";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_op4_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_op4_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_op4_co.paa"
        };  
    };
    class Bags_CargoPants_Pink: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Pink Camo Hot-Weather Pants";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_pink_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_pink_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_pink_co.paa"
        };  
    };
    class Bags_CargoPants_TGR: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Tiger-Stripe Hot-Weather Pants";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_tgr_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_tgr_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_tgr_co.paa"
        };  
    };
    class Bags_CargoPants_TRK: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "M2008 Hot-Weather Pants";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_trk_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_trk_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_trk_co.paa"
        };  
    };
    class Bags_CargoPants_URB: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Urban Camo Hot-Weather Pants";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_urb_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_urb_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_urb_co.paa"
        };  
    };
    class Bags_CargoPants_USN2: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "NWU III Hot-Weather Pants";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        heatIsolation=0.40000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_usn2_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_usn2_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_usn2_co.paa"
        };  
    };


//Cargo Pants Cold Weather
    class Bags_CargoPantsC_ACU: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "UCP Cold-Weather Pants";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_acu_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_acu_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_acu_co.paa"
        };  
    };
    class Bags_CargoPantsC_CAN: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "CADPAT Cold-Weather Pants";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_can_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_can_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_can_co.paa"
        };  
    };
    class Bags_CargoPantsC_CC: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "6-Color Desert Cold-Weather Pants";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_cc_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_cc_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_cc_co.paa"
        };  
    };
    class Bags_CargoPantsC_CCI: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Iraqi Cold-Weather Pants";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_irq_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_irq_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_irq_co.paa"
        };  
    };
    class Bags_CargoPantsC_DCU: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "DCU Cold-Weather Pants";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_dcu_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_dcu_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_dcu_co.paa"
        };  
    };
    class Bags_CargoPantsC_Multicam: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Multicam Cold-Weather Pants";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_multicam_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_multicam_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_multicam_co.paa"
        };  
    };
    class Bags_CargoPantsC_MulticamG: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Multicam Green Cold-Weather Pants";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_gmulti_co.paa"
        };  
    };
    class Bags_CargoPantsC_MulticamB: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Multicam Black Cold-Weather Pants";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_bmulti_co.paa"
        };  
    };
    class Bags_CargoPantsC_OP4: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "OPFOR Cold-Weather Pants";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_op4_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_op4_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_op4_co.paa"
        };  
    };
    class Bags_CargoPantsC_Pink: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Pink Camo Cold-Weather Pants";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_pink_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_pink_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_pink_co.paa"
        };  
    };
    class Bags_CargoPantsC_TGR: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Tiger-Stripe Cold-Weather Pants";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_tgr_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_tgr_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_tgr_co.paa"
        };  
    };
    class Bags_CargoPantsC_TRK: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "M2008 Cold-Weather Pants";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_trk_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_trk_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_trk_co.paa"
        };  
    };
    class Bags_CargoPantsC_URB: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "Urban Camo Cold-Weather Pants";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_urb_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_urb_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_urb_co.paa"
        };  
    };
    class Bags_CargoPantsC_USN2: CargoPants_ColorBase
    {
        scope = 2;
        displayName = "NWU III Cold-Weather Pants";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\cargopants_g_usn2_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_usn2_co.paa",
            "BagsTacticalGear\Clothes\Pants\cargopants_usn2_co.paa"
        };  
    };


//Gorka Pants Hot Weather
    class GorkaPants_ColorBase;
    class Bags_GorkaPants_CHN: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "PLA Hot-Weather Pants";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_chn_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_chn_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_chn_co.paa"
        };  
    };
    class Bags_GorkaPants_Digi: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "EMR Arid Hot-Weather Pants";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_digi_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_digi_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_digi_co.paa"
        };  
    };
    class Bags_GorkaPants_DST: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "Gorka Flat-Tan Hot-Weather Pants";
        descriptionShort = "A Soviet-style Patrol Jacket with a flat-tan hue.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_dst_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_dst_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_dst_co.paa"
        };  
    };
    class Bags_GorkaPants_EGT: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "Egyptian Gorka Hot-Weather Pants";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_egt_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_egt_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_egt_co.paa"
        };  
    };
    class Bags_GorkaPants_FLK: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "Flektarn Hot-Weather Pants";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_flk_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_flk_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_flk_co.paa"
        };  
    };
    class Bags_GorkaPants_NK: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "KPA Hot-Weather Pants";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_nk_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_nk_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_nk_co.paa"
        };  
    };
    class Bags_GorkaPants_RUS: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "EMR Tsifra Hot-Weather Pants";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_rus_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_rus_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_rus_co.paa"
        };  
    };
    class Bags_GorkaPants_SAF: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "SANDF Hot-Weather Pants";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_saf_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_saf_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_saf_co.paa"
        };  
    };
    class Bags_GorkaPants_SWD: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "M90 Hot-Weather Pants";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_swd_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_swd_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_swd_co.paa"
        };  
    };
    class Bags_GorkaPants_UKR: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "MM-14 Hot-Weather Pants";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_ukr_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_ukr_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_ukr_co.paa"
        };  
    };
    class Bags_GorkaPants_USN: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "Kamysh Hot-Weather Pants";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_usn_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_usn_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_usn_co.paa"
        };  
    };
    class Bags_GorkaPants_WW2: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "WW2 Hot-Weather Pants";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_ww2_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_ww2_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_ww2_co.paa"
        };  
    };


//Gorka Pants Cold Weather
    class Bags_GorkaPantsC_CHN: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "PLA Cold-Weather Pants";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_chn_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_chn_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_chn_co.paa"
        };  
    };
    class Bags_GorkaPantsC_Digi: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "EMR Arid Cold-Weather Pants";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_digi_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_digi_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_digi_co.paa"
        };  
    };
    class Bags_GorkaPantsC_DST: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "Gorka Flat-Tan Cold-Weather Pants";
        descriptionShort = "A Soviet-style Patrol Jacket with a flat-tan hue.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_dst_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_dst_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_dst_co.paa"
        };  
    };
    class Bags_GorkaPantsC_EGT: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "Egyptian Gorka Cold-Weather Pants";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_egt_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_egt_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_egt_co.paa"
        };  
    };
    class Bags_GorkaPantsC_FLK: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "Flektarn Cold-Weather Pants";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_flk_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_flk_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_flk_co.paa"
        };  
    };
    class Bags_GorkaPantsC_NK: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "KPA Cold-Weather Pants";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_nk_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_nk_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_nk_co.paa"
        };  
    };
    class Bags_GorkaPantsC_RUS: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "EMR Tsifra Cold-Weather Pants";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_rus_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_rus_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_rus_co.paa"
        };  
    };
    class Bags_GorkaPantsC_SAF: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "SANDF Cold-Weather Pants";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_saf_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_saf_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_saf_co.paa"
        };  
    };
    class Bags_GorkaPantsC_SWD: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "M90 Cold-Weather Pants";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_swd_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_swd_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_swd_co.paa"
        };  
    };
    class Bags_GorkaPantsC_UKR: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "MM-14 Cold-Weather Pants";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_ukr_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_ukr_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_ukr_co.paa"
        };  
    };
    class Bags_GorkaPantsC_USN: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "Kamysh Cold-Weather Pants";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_usn_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_usn_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_usn_co.paa"
        };  
    };
    class Bags_GorkaPantsC_WW2: GorkaPants_ColorBase
    {
        scope = 2;
        displayName = "WW2 Cold-Weather Pants";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        heatIsolation=0.80000001;
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Pants\gorkapants_dropped_ww2_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_ww2_co.paa",
            "BagsTacticalGear\Clothes\Pants\gorka_pants_ww2_co.paa"
        };  
    };


//Boonie Hat
    class BoonieHat_ColorBase;
    class Bags_BoonieHat_ACU: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "UCP Booniehat";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_acu_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_acu_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_acu_co.paa"
        };
    }; 
    class Bags_BoonieHat_CAN: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "CADPAT Booniehat";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_can_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_can_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_can_co.paa"
        };
    };    
    class Bags_BoonieHat_CC: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "6-Color Desert Booniehat";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_cc_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_cc_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_cc_co.paa"
        };
    };  
    class Bags_BoonieHat_CCI: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "Iraqi Booniehat";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_irq_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_irq_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_irq_co.paa"
        };
    }; 
    class Bags_BoonieHat_CHN: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "PLA Booniehat";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_chn_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_chn_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_chn_co.paa"
        };
    };  
    class Bags_BoonieHat_DCU: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "DCU Booniehat";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_dcu_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_dcu_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_dcu_co.paa"
        };
    };   
    class Bags_BoonieHat_Digi: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "EMR Arid Booniehat";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_digi_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_digi_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_digi_co.paa"
        };
    };  
    class Bags_BoonieHat_EGT: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "Egpytian Booniehat";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_egt_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_egt_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_egt_co.paa"
        };
    };  
    class Bags_BoonieHat_FLK: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "Flektarn Booniehat";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_flk_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_flk_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_flk_co.paa"
        };
    };    
    class Bags_BoonieHat_Multicam: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "Multicam Booniehat";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_multicam_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_multicam_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_multicam_co.paa"
        };
    }; 
    class Bags_BoonieHat_MulticamG: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "Multicam Green Booniehat";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_gmulti_co.paa"
        };
    };  
    class Bags_BoonieHat_MulticamB: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "Multicam Black Booniehat";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_bmulti_co.paa"
        };
    };   
    class Bags_BoonieHat_NK: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "KPA Booniehat";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_nk_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_nk_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_nk_co.paa"
        };
    };  
    class Bags_BoonieHat_OP4: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "OPFOR Booniehat";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_op4_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_op4_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_op4_co.paa"
        };
    };    
    class Bags_BoonieHat_Pink: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "Pink Camo Booniehat";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_pink_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_pink_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_pink_co.paa"
        };
    };   
    class Bags_BoonieHat_TGR: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "Tiger-Stripe Booniehat";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_tgr_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_tgr_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_tgr_co.paa"
        };
    };  
    class Bags_BoonieHat_TRK: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "M2008 Booniehat";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_trk_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_trk_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_trk_co.paa"
        };
    }; 
    class Bags_BoonieHat_RUS: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "EMR Tsifra Booniehat";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_rus_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_rus_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_rus_co.paa"
        };
    };
    class Bags_BoonieHat_SAF: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "SANDF Booniehat";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_saf_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_saf_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_saf_co.paa"
        };
    };
    class Bags_BoonieHat_SWD: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "M90 Booniehat";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_swd_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_swd_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_swd_co.paa"
        };
    };
    class Bags_BoonieHat_UKR: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "MM-14 Booniehat";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_ukr_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_ukr_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_ukr_co.paa"
        };
    };
    
    class Bags_BoonieHat_URB: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "Urban Camo Booniehat";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_urb_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_urb_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_urb_co.paa"
        };
    };    
    class Bags_BoonieHat_USN: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "Kamysh Booniehat";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_usn_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_usn_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_usn_co.paa"
        };
    };
    class Bags_BoonieHat_USN2: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "NWU III Booniehat";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_usn2_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_usn2_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_usn2_co.paa"
        };
    };
    class Bags_BoonieHat_WW2: BoonieHat_ColorBase
    {
        scope = 2;
        displayName = "WW2 Booniehat";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\booniehat_ww2_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_ww2_co.paa",
            "BagsTacticalGear\Clothes\Hats\booniehat_ww2_co.paa"
        };
    };


//Military Cap
    class MilitaryCap_ColorBase;
    class Bags_BaseballCap_ACU: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "UCP Patrol Cap";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_acu_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_acu_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_acu_co.paa"
        };
    };
    class Bags_BaseballCap_CC: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "6-Color Desert Patrol Cap";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_cc_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_cc_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_cc_co.paa"
        };
    };
    class Bags_BaseballCap_CCI: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "Iraqi Patrol Cap";
        descriptionShort = "Iraqi Variation of the 6-Color Desert Pattern, which is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_irq_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_irq_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_irq_co.paa"
        };
    };
    class Bags_BaseballCap_CHN: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "PLA Patrol Cap";
        descriptionShort = "Chinese woodland camouflage is called Xingkong, which was adopted by the People's Liberation Army in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_chn_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_chn_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_chn_co.paa"
        };
    };
    class Bags_BaseballCap_DCU: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "DCU Patrol Cap";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_dcu_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_dcu_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_dcu_co.paa"
        };
    };
    class Bags_BaseballCap_Digi: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "EMR Arid Patrol Cap";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_digi_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_digi_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_digi_co.paa"
        };
    };
    class Bags_BaseballCap_Multicam: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "Multicam Patrol Cap";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_multicam_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_multicam_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_multicam_co.paa"
        };
    };
    class Bags_BaseballCap_MulticamG: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "Multicam Green Patrol Cap";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_gmulti_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_gmulti_co.paa"
        };
    };
    class Bags_BaseballCap_MulticamB: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "Multicam Black Patrol Cap";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_bmulti_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_bmulti_co.paa"
        };
    };
    class Bags_BaseballCap_Rus: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "EMR Tsifra Patrol Cap";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_rus_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_rus_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_rus_co.paa"
        };
    };
    class Bags_BaseballCap_TGR: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "Tiger-Stripe Patrol Cap";
        descriptionShort = "Tiger stripe camo is a type of camouflage pattern originally developed for jungle warfare, characterized by narrow stripes resembling a tiger's stripes, typically in green and brown colors.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_tgr_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_tgr_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_tgr_co.paa"
        };
    };
    class Bags_BaseballCap_TRK: MilitaryCap_ColorBase
    {
        scope = 2;
        displayName = "M2008 Patrol Cap";
        descriptionShort = "Turkey adopted the M2008 Camouflage, often called nano, in 2008.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\militarycap_trk_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_trk_co.paa",
            "BagsTacticalGear\Clothes\Hats\militarycap_trk_co.paa"
        };
    };


//Baseball Cap
    class BaseballCap_ColorBase;
    class Bags_BaseballCap_CAF: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "CAF Baseball Cap";
        descriptionShort = "For people who love coffee, and other stuff too.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_caf_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_caf_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_caf_co.paa"
        };
    };
    class Bags_BaseballCap_CAN: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "CADPAT Baseball Cap";
        descriptionShort = "CADPAT stands for Canadian Disruptive Pattern, which is a digital camouflage pattern used by the Canadian Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_can_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_can_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_can_co.paa"
        };
    };
    class Bags_BaseballCap_Deez: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Deez Nuts Baseball Cap";
        descriptionShort = "For people who want to make fun of how dumb politics and politicians and their followers are.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_deez_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_deez_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_deez_co.paa"
        };
    };
    class Bags_BaseballCap_EGT: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Egyptian Baseball Cap";
        descriptionShort = "This camouflage is part of the Egyptian Army's field service uniform, adopted around 1989.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_egt_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_egt_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_egt_co.paa"
        };
    };
    class Bags_BaseballCap_FLK: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Flektarn Baseball Cap";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_flk_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_flk_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_flk_co.paa"
        };
    };
    class Bags_BaseballCap_KRG: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Krieger Gaming Baseball Cap";
        descriptionShort = "Kriger Gaming is a Veteran and First Responder mental health peer-support community.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_krg_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_krg_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_krg_co.paa"
        };
    };
    class Bags_BaseballCap_MJ: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "MJ Medic Baseball Cap";
        descriptionShort = "For people who want to be a medic, but also like to smoke.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_mj_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_mj_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_mj_co.paa"
        };
    };
    class Bags_BaseballCap_NK: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "KPA Baseball Cap";
        descriptionShort = "The North Korean digital camouflage pattern is often referred to simply as the Digital Camouflage or Digital Pattern, and it is the most modern uniform worn by the Korean People's Army.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_nk_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_nk_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_nk_co.paa"
        };
    };
    class Bags_BaseballCap_OP4: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "OPFOR Baseball Cap";
        descriptionShort = "OPFOR or Red Urban camo is designed to blend into urban environments, typically featuring shades of red, black, and grey to provide concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_op4_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_op4_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_op4_co.paa"
        };
    };
    class Bags_BaseballCap_Peace: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Peace Baseball Cap";
        descriptionShort = "Peace, Love, Jamaica.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_peace_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_peace_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_peace_co.paa"
        };
    };
    class Bags_BaseballCap_PinkII: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Pink Camo Baseball Cap";
        descriptionShort = "High-Visibility Pink is often used in various applications, but it is not a traditional camouflage pattern like those used in military contexts.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_pink_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_pink_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_pink_co.paa"
        };
    };
    class Bags_BaseballCap_Pride: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Pride Baseball Cap";
        descriptionShort = "Pride. A noun meaning a sense of one's own proper dignity or value; self-respect.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_prd_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_prd_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_prd_co.paa"
        };
    };
    class Bags_BaseballCap_SAF: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "SANDF Baseball Cap";
        descriptionShort = "Soldier 2000 is a military camouflage pattern developed by the Council for Scientific and Industrial Research and is in use with the South African National Defence Force.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_saf_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_saf_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_saf_co.paa"
        };
    };
    class Bags_BaseballCap_SWD: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "M90 Baseball Cap";
        descriptionShort = "Swedish camouflage is called M90 camouflage, which was introduced in the late 1980s for the Swedish Armed Forces.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_swd_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_swd_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_swd_co.paa"
        };
    };
    class Bags_BaseballCap_UKR: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "MM-14 Baseball Cap";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ukr_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ukr_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ukr_co.paa"
        };
    };
    class Bags_BaseballCap_UKR2: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Ukrainian Crest Baseball Cap";
        descriptionShort = "The expression Glory to Ukraine is a national salute, known as a symbol of Ukrainian sovereignty and resistance to foreign aggression.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ukr2_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ukr2_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ukr2_co.paa"
        };
    };
    class Bags_BaseballCap_URB: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Urban Camo Baseball Cap";
        descriptionShort = "Urban Camouflage is designed to blend into urban environments, utilizing grayscale colors to enhance concealment in city settings.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_urb_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_urb_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_urb_co.paa"
        };
    };
    class Bags_BaseballCap_USCG: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "USCG Baseball Cap";
        descriptionShort = "An Operational Dress Uniform (ODU) Ballcover for US Coast Guard Airstation Kodiak.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_uscg_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_uscg_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_uscg_co.paa"
        };
    };
    class Bags_BaseballCap_USN: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Kamysh Baseball Cap";
        descriptionShort = "The Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_usn_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_usn_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_usn_co.paa"
        };
    };
    class Bags_BaseballCap_USN2: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "NWU III Baseball Cap";
        descriptionShort = "This green navy camouflage pattern is known as AOR2, which is part of the Navy Working Uniform Type III designed for temperate environments.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_usn2_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_usn2_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_usn2_co.paa"
        };
    };
    class Bags_BaseballCap_WW2: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "WW2 Baseball Cap";
        descriptionShort = "The USMC WW2 camouflage pattern was designed for jungle and beach environments and was first issued in 1942.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ww2_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ww2_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ww2_co.paa"
        };
    };


//NBC Gear    
    class NBCJacketBase;
    class Bags_NBCJacketERDL: NBCJacketBase
    {
        scope = 2;
        displayName = "NBC Jacket Woodland";
        descriptionShort = "MOPP gear, also known as NBC, is protective gear used by military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\NBC\nbcjacket_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbcjacket_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbcjacket_erdl_co.paa"
        };
    };
    class Bags_NBCJacketRUS: NBCJacketBase
    {
        scope = 2;
        displayName = "NBC Jacket Soviet";
        descriptionShort = "MOPP gear, also known as NBC, is protective gear used by military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\NBC\nbcjacket_rus_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbcjacket_rus_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbcjacket_rus_co.paa"
        };
    };
    class NBCPantsBase;
    class Bags_NBCPantsERDL: NBCPantsBase
    {
        scope = 2;
        displayName = "NBC Pants Woodland";
        descriptionShort = "MOPP gear, also known as NBC, is protective gear used by military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\NBC\nbcpants_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbcpants_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbcpants_erdl_co.paa"
        };
    };
    class Bags_NBCPantsRUS: NBCPantsBase
    {
        scope = 2;
        displayName = "NBC Pants Soviet";
        descriptionShort = "MOPP gear, also known as NBC, is protective gear used by military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\NBC\nbcpants_rus_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbcpants_rus_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbcpants_rus_co.paa"
        };
    };
    class NBCHoodBase;
    class Bags_NBCHoodERDL: NBCHoodBase
    {
        scope = 2;
        displayName = "NBC Hood Woodland";
        descriptionShort = "MOPP gear, also known as NBC, is protective gear used by military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\NBC\nbc_hood_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_hood_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_hood_erdl_co.paa"
        };
    };
    class Bags_NBCHoodRUS: NBCHoodBase
    {
        scope = 2;
        displayName = "NBC Hood Soviet";
        descriptionShort = "MOPP gear, also known as NBC, is protective gear used by military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\NBC\nbc_hood_rus_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_hood_rus_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_hood_rus_co.paa"
        };
    };
    class NBCBootsBase;
    class Bags_NBCBootsERDL: NBCBootsBase
    {
        scope = 2;
        displayName = "NBC Boots Woodland";
        descriptionShort = "MOPP gear, also known as NBC, is protective gear used by military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\NBC\nbc_boots_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_boots_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_boots_erdl_co.paa"
        };
        
    };
    class Bags_NBCBootsRUS: NBCBootsBase
    {
        scope = 2;
        displayName = "NBC Boots Soviet";
        descriptionShort = "MOPP gear, also known as NBC, is protective gear used by military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\NBC\nbc_boots_rus_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_boots_rus_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_boots_rus_co.paa"
        };
        
    };
};