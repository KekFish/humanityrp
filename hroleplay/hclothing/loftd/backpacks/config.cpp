class CfgPatches
{
	class hclothing_loftd_BackPack
	{

		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"Loftd_bugbag",
			"Loftd_bunnybag",
			"Loftd_elliebag",
			"Loftd_hollybag",
			"Loftd_leatherBag",
			"Loftd_reinabag",
			"Loftd_slackerbag",
			"Loftd_survivorbag",
			"Loftd_teddybag",
			"Loftd_Town_Bag",
			"Loftd_travelsbag",
			"Loftd_valeriebag",
			"Loftd_womensbag",
			"Loftd_shadowbag"
			

		};
	};
};
class CfgVehicles
{

	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class Loftd_bugbag_ColorBase: Clothing
	{
        itemSize[] = {4,5};
        itemsCargoSize[]={4,5};
    };
	class Loftd_bunnybag_ColorBase: Clothing
	{
        itemSize[] = {4,5};
        itemsCargoSize[]={4,5};
    };
	class Loftd_elliebag_ColorBase: Clothing
	{
        itemSize[] = {4,5};
        itemsCargoSize[]={6,5};
    };
	class Loftd_hollybag_ColorBase: Clothing
	{
        itemSize[] = {4,5};
        itemsCargoSize[]={6,6};
    };
	class Loftd_leatherBag_ColorBase: Clothing
	{
        itemSize[] = {4,5};
        itemsCargoSize[]={4,5};
    };
	class Loftd_reinabag_ColorBase: Clothing
	{
        itemSize[] = {4,5};
        itemsCargoSize[]={6,5};
    };
	class Loftd_slackerbag_ColorBase: Clothing
	{
        itemSize[] = {4,5};
        itemsCargoSize[]={8,5};
    };
	class Loftd_survivorbag_ColorBase: Clothing
	{
        itemSize[] = {4,5};
        itemsCargoSize[]={6,5};
    };
	class Loftd_teddybag_ColorBase: Clothing
	{
        itemSize[] = {4,5};
        itemsCargoSize[]={4,5};
    };
	class Loftd_Town_bag_ColorBase: Clothing
	{	
        itemSize[] = {4,5};
        itemsCargoSize[]={6,6};
    };
	class Loftd_Townbag_pouch_ColorBase: Clothing
	{	
        itemSize[] = {2,2};
        itemsCargoSize[]={2,3};
    };
	class Loftd_Townbag_pouch2_ColorBase: Clothing
	{	
        itemSize[] = {2,2};
        itemsCargoSize[]={2,3};
    };
	class Loftd_travelsbag_ColorBase: Clothing
	{	
        itemSize[] = {4,5};
        itemsCargoSize[] = {6,7};
    };
	class Loftd_valeriebag_ColorBase: Clothing
	{	
        itemSize[] = {4,5};
        itemsCargoSize[] = {6,7};
    };
	class Loftd_womensbag_ColorBase: Clothing
	{	
        itemSize[] = {4,4};
        itemsCargoSize[] = {4,4};
    };
	class Loftd_shadowbag_ColorBase: Clothing
	{	
        itemSize[] = {4,5};
        itemsCargoSize[] = {6,7};
    };


};
