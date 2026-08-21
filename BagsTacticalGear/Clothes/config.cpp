class CfgPatches
{
    class Clothes
    {
        units[] = {
            "NBCJacketERDL",
            "NBCPantsERDL",
            "NBCHoodERDL",
            "NBCBootsERDL"

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

//Tactical Shirt
    class TacticalShirt_ColorBase;
    class TacticalShirt_ACU: TacticalShirt_ColorBase
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
    class TacticalShirt_CAN: TacticalShirt_ColorBase
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
    class TacticalShirt_CC: TacticalShirt_ColorBase
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
    class TacticalShirt_DCU: TacticalShirt_ColorBase
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
    class TacticalShirt_Multicam: TacticalShirt_ColorBase
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
    class TacticalShirt_OP4: TacticalShirt_ColorBase
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
    class TacticalShirt_Pink: TacticalShirt_ColorBase
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
    class TacticalShirt_URB: TacticalShirt_ColorBase
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
    class TacticalShirt_USN: TacticalShirt_ColorBase
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


//Gorka Jacket Hot Weather
    class GorkaEJacket_ColorBase;
    class GorkaEJacket_Digi: GorkaEJacket_ColorBase
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
    class GorkaEJacket_DST: GorkaEJacket_ColorBase
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
    class GorkaEJacket_FLK: GorkaEJacket_ColorBase
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
    class GorkaEJacket_RUS: GorkaEJacket_ColorBase
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
    class GorkaEJacket_UKR: GorkaEJacket_ColorBase
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
    class GorkaEJacket_USN: GorkaEJacket_ColorBase
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

//Gorka Jacket Cold Weather
    class GorkaEJacketCJacket_Digi: GorkaEJacket_ColorBase
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
    class GorkaEJacketCJacket_DST: GorkaEJacket_ColorBase
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
    class GorkaEJacketCJacket_FLK: GorkaEJacket_ColorBase
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
    class GorkaEJacketCJacket_RUS: GorkaEJacket_ColorBase
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
    class GorkaEJacketCJacket_UKR: GorkaEJacket_ColorBase
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
    class GorkaEJacketCJacket_USN: GorkaEJacket_ColorBase
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


//Uniform Shirt
    class Shirt_Colorbase;
    class Shirt_ACU: Shirt_Colorbase
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
    class Shirt_CAN: Shirt_Colorbase
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
    class Shirt_CC: Shirt_Colorbase
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
    class Shirt_DCU: Shirt_Colorbase
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
    class Shirt_Digi: Shirt_Colorbase
    {
        scope = 2;
        displayName = "EMR Arid Hot-Weather Shirt";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_digi_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_digi_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_digi_co.paa"
        };
    };
    class Shirt_DST: Shirt_Colorbase
    {
        scope = 2;
        displayName = "Flat-Tan Hot-Weather Shirt";
        descriptionShort = "A uniform shirt with a Flat-Tan hue.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_dst_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_dst_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_dst_co.paa"
        };
    };
    class Shirt_FLK: Shirt_Colorbase
    {
        scope = 2;
        displayName = "Flektarn Hot-Weather Shirt";
        descriptionShort = "Flecktarn translates to mottled camouflage in German, and has been in service since 1990.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_flk_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_flk_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_flk_co.paa"
        };
    };
    class Shirt_Multicam: Shirt_Colorbase
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
    class Shirt_OP4: Shirt_Colorbase
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
    class Shirt_Pink: Shirt_Colorbase
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
    class Shirt_Rus: Shirt_Colorbase
    {
        scope = 2;
        displayName = "EMR Tsifra Hot-Weather Shirt";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_rus_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_rus_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_rus_co.paa"
        };
    };
    class Shirt_UKR: Shirt_Colorbase
    {
        scope = 2;
        displayName = "MM-14 Hot-Weather Shirt";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_ukr_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_ukr_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_ukr_co.paa"
        };
    };
    class Shirt_URB: Shirt_Colorbase
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
    class Shirt_USN: Shirt_Colorbase
    {
        scope = 2;
        displayName = "Kamysh Hot-Weather Shirt";
        descriptionShort = "Russian blue camouflage is commonly referred to as Kamysh camo, which is used by police forces and some spetsnaz units operating in urban areas.";
        itemsCargoSize[]={6,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\shirt_ground_usn_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_usn_co.paa",
            "BagsTacticalGear\Clothes\Shirts\shirt_usn_co.paa"
        };
    };
    class Shirt_USN2: Shirt_Colorbase
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


//T-Shirt
    class TShirt_Colorbase;
    class TShirt_BACK: TShirt_Colorbase
    {
        scope = 2;
        displayName = "Stay-Back T-Shirt";
        descriptionShort = "A shirt with the wording of signs found on vehicles and around bases during the Global War on Terror.";
        itemsCargoSize[]={4,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_grey_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_back_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_back_co.paa"
        };
    };
    class TShirt_CAT: TShirt_Colorbase
    {
        scope = 2;
        displayName = "Cat T-Shirt";
        descriptionShort = "For people who really like cats, or for cats who know their place in the world.";
        itemsCargoSize[]={4,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_grey_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_cat_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_cat_co.paa"
        };
    };
    class TShirt_Doge: TShirt_Colorbase
    {
        scope = 2;
        displayName = "Doge Meme T-Shirt";
        descriptionShort = "The Doge meme features a Shiba Inu dog named Kabosu, and became popular in 2013.";
        itemsCargoSize[]={4,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_grey_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_doge_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_doge_co.paa"
        };
    };
    class TShirt_NASA: TShirt_Colorbase
    {
        scope = 2;
        displayName = "NASA T-Shirt";
        descriptionShort = "The National Aeronautics and Space Administration is an independent agency of the U.S. federal government responsible for the United States' civil space program.";
        itemsCargoSize[]={4,4};
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Shirts\tshirt_ground_grey_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_nasa_co.paa",
            "BagsTacticalGear\Clothes\Shirts\tshirt_nasa_co.paa"
        };
    };


//Cargo Pants Hot Weather
    class CargoPants_ColorBase;
    class CargoPants_ACU: CargoPants_ColorBase
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
    class CargoPants_CAN: CargoPants_ColorBase
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
    class CargoPants_CC: CargoPants_ColorBase
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
    class CargoPants_DCU: CargoPants_ColorBase
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
    class CargoPants_Multicam: CargoPants_ColorBase
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
    class CargoPants_OP4: CargoPants_ColorBase
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
    class CargoPants_Pink: CargoPants_ColorBase
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
    class CargoPants_URB: CargoPants_ColorBase
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
    class CargoPants_USN2: CargoPants_ColorBase
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
    class CargoPantsC_ACU: CargoPants_ColorBase
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
    class CargoPantsC_CAN: CargoPants_ColorBase
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
    class CargoPantsC_CC: CargoPants_ColorBase
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
    class CargoPantsC_DCU: CargoPants_ColorBase
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
    class CargoPantsC_Multicam: CargoPants_ColorBase
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
    class CargoPantsC_OP4: CargoPants_ColorBase
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
    class CargoPantsC_Pink: CargoPants_ColorBase
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
    class CargoPantsC_URB: CargoPants_ColorBase
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
    class CargoPantsC_USN2: CargoPants_ColorBase
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
    class GorkaPants_Digi: GorkaPants_ColorBase
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
    class GorkaPants_DST: GorkaPants_ColorBase
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
    class GorkaPants_FLK: GorkaPants_ColorBase
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
    class GorkaPants_RUS: GorkaPants_ColorBase
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
    class GorkaPants_UKR: GorkaPants_ColorBase
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
    class GorkaPants_USN: GorkaPants_ColorBase
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


//Gorka Pants Cold Weather
    class GorkaPantsC_Digi: GorkaPants_ColorBase
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
    class GorkaPantsC_DST: GorkaPants_ColorBase
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
    class GorkaPantsC_FLK: GorkaPants_ColorBase
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
    class GorkaPantsC_RUS: GorkaPants_ColorBase
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
    class GorkaPantsC_UKR: GorkaPants_ColorBase
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
    class GorkaPantsC_USN: GorkaPants_ColorBase
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


//Boonie Hat
    class BoonieHat_ColorBase;
    class BoonieHat_ACU: BoonieHat_ColorBase
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
    class BoonieHat_CAN: BoonieHat_ColorBase
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
    class BoonieHat_CC: BoonieHat_ColorBase
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
    class BoonieHat_DCU: BoonieHat_ColorBase
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
    class BoonieHat_FLK: BoonieHat_ColorBase
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
    class BoonieHat_Multicam: BoonieHat_ColorBase
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
    class BoonieHat_OP4: BoonieHat_ColorBase
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
    class BoonieHat_Pink: BoonieHat_ColorBase
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
    class BoonieHat_RUS: BoonieHat_ColorBase
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
    class BoonieHat_UKR: BoonieHat_ColorBase
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
    class BoonieHat_Digi: BoonieHat_ColorBase
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
    class BoonieHat_URB: BoonieHat_ColorBase
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
    class BoonieHat_USN: BoonieHat_ColorBase
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
    class BoonieHat_USN2: BoonieHat_ColorBase
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


//Baseball Cap
    class BaseballCap_ColorBase;
    class BaseballCap_ACU: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "UCP Baseball Cap";
        descriptionShort = "The American ACU (Army Combat Uniform) features the Universal Camouflage Pattern (UCP), which was used by the U.S. Army from 2005 until it was phased out in 2019.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_acu_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_acu_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_acu_co.paa"
        };
    };
    class BaseballCap_CAN: BaseballCap_ColorBase
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
    class BaseballCap_CAF: BaseballCap_ColorBase
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
    class BaseballCap_CC: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "6-Color Desert Baseball Cap";
        descriptionShort = "Desert Storm Camo, or the 6-Color Desert Pattern, is commonly known as Chocolate Chip Camouflage due to its resemblance to chocolate chip cookie dough.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_cc_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_cc_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_cc_co.paa"
        };
    };
    class BaseballCap_DCU: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "DCU Baseball Cap";
        descriptionShort = "The DCU camo pattern is officially known as the three-color desert camouflage pattern.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_dcu_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_dcu_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_dcu_co.paa"
        };
    };
    class BaseballCap_Deez: BaseballCap_ColorBase
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
    class BaseballCap_Digi: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "EMR Arid Baseball Cap";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_digi_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_digi_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_digi_co.paa"
        };
    };
    class BaseballCap_FLK: BaseballCap_ColorBase
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
    class BaseballCap_KRG: BaseballCap_ColorBase
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
    class BaseballCap_MJ: BaseballCap_ColorBase
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
    class BaseballCap_Multicam: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Multicam Baseball Cap";
        descriptionShort = "MultiCam is the name of the camouflage pattern developed by Crye Precision, designed for use in various environments and conditions.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_multicam_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_multicam_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_multicam_co.paa"
        };
    };
    class BaseballCap_OP4: BaseballCap_ColorBase
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
    class BaseballCap_Peace: BaseballCap_ColorBase
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
    class BaseballCap_PinkII: BaseballCap_ColorBase
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
    class BaseballCap_Rus: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "EMR Tsifra Baseball Cap";
        descriptionShort = "EMR camouflage is the standard camouflage pattern of the Russian Military's V.K.B.O.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_rus_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_rus_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_rus_co.paa"
        };
    };
    class BaseballCap_UKR: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Ukrainian MM-14 Baseball Cap";
        descriptionShort = "MM-14, also known as Pixel or Poroh-1, has been in use by the Armed Forces of Ukraine since 2014.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ukr_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ukr_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_ukr_co.paa"
        };
    };
    class BaseballCap_UKR2: BaseballCap_ColorBase
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
    class BaseballCap_URB: BaseballCap_ColorBase
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
    class BaseballCap_USCG: BaseballCap_ColorBase
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
    class BaseballCap_USN: BaseballCap_ColorBase
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
    class BaseballCap_USN2: BaseballCap_ColorBase
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
    class BaseballCap_Pride: BaseballCap_ColorBase
    {
        scope = 2;
        displayName = "Pride Baseball Cap";
        descriptionShort = "Pride. A noun eaning a sense of one's own proper dignity or value; self-respect.";
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\Hats\baseballcapii_prd_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_prd_co.paa",
            "BagsTacticalGear\Clothes\Hats\baseballcapii_prd_co.paa"
        };
    };


//NBC Gear    
    class NBCJacketBase;
    class NBCJacketERDL: NBCJacketBase
    {
        scope = 2;
        displayName = "NBC Woodland Jacket";
        descriptionShort = "MOPP is protective gear used by U.S. military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\NBC\nbc_jacket_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_jacket_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_jacket_erdl_co.paa"
        };
    };
    class NBCPantsBase;
    class NBCPantsERDL: NBCPantsBase
    {
        scope = 2;
        displayName = "NBC Woodland Pants";
        descriptionShort = "MOPP is protective gear used by U.S. military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "BagsTacticalGear\Clothes\NBC\nbc_pants_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_pants_erdl_co.paa",
            "BagsTacticalGear\Clothes\NBC\nbc_pants_erdl_co.paa"
        };
    };
    class NBCHoodBase;
    class NBCHoodERDL: NBCHoodBase
    {
        scope = 2;
        displayName = "NBC Woodland Hood";
        descriptionShort = "MOPP is protective gear used by U.S. military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
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
    class NBCBootsBase;
    class NBCBootsERDL: NBCBootsBase
    {
        scope = 2;
        displayName = "NBC Woodland Boots";
        descriptionShort = "MOPP is protective gear used by U.S. military personnel in a toxic environment, for example, during a chemical, biological, radiological, or nuclear strike.";
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
};