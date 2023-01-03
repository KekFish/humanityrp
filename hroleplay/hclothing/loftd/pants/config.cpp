class CfgPatches
{
	class hclothing_loftd_pants
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"Loftd_arcpants",
			"Loftd_bakedpants",
			"Loftd_cargopants",
			"Loftd_coloradopants",
			"Loftd_cyberpants",
			"Loftd_cargoshorts",
			"Loftd_Ironsightpants",
			"Loftd_Ironsightpantsv2",
			"Loftd_Ironsightpantsv3",
			"Loftd_jeans",
			"Loftd_militarysetpants",
			"Loftd_ririteopants",
			"Loftd_tacticalpants",
			"Loftd_tifan",
			"Loftd_westpants",
			"Loftd_aidansuit",
			"Loftd_dawnsuit",
			"Loftd_gaptopsuit",
			"Loftd_Reinajacket",
			"Loftd_roadiessuit",
			"Loftd_blackpants",
			"Loftd_CHRSAT"
		
		
		};
	};
};
class CfgMods
{
	class hroleplay_core
	{
		dir = "hroleplay";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Clothing";
		credits = "KekFish";
		author = "KekFish";
		type = "mod";
		inputs = "";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			
		};
	};
};
class CfgAmmo
{

};
class CfgVehicles
{

	class Clothing_Base;
	class Clothing: Clothing_Base
	{	
	};
	
	class Loftd_Arcpants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {5,4};
	};
	class Loftd_bakedpants_ColorBase: Clothing
	{
		itemSize[] = {2,2};
		itemsCargoSize[]={2,2};
	};
	class Loftd_cargopants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {6,4};
	};
	class Loftd_coloradopants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {6,4};
	};
	class Loftd_coloradopants_bl: Loftd_coloradopants_ColorBase
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {6,4};

	};
	class Loftd_coloradopants_G63: Loftd_coloradopants_ColorBase
	{
	itemSize[] = {2,2};
		itemsCargoSize[] = {6,4};

	};
	class Loftd_cyberpants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {5,4};
	};
	class Loftd_cargoshorts_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {5,4};
	};
	class Loftd_Ironsightpants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {6,4};
	};
	class Loftd_Ironsightpantsv2_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {6,4};

	};
	class Loftd_Ironsightpantsv3_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {5,4};

	};
	class Loftd_jeans: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[]={4,2};

	};
	class Loftd_militarysetpants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {5,4};

	};
	class Loftd_ririteopants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[]={4,2};

	};
	class Loftd_tacticalpants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {5,5};

	};
	class Loftd_tifan_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {5,4};

	};
	class Loftd_westpants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {7,4};

	};
	class Loftd_aidansuit_pants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {4,3};

	};
	class Loftd_dawnpants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {6,3};

	};
	class Loftd_gaptopsuit_pants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {3,3};

	};
	class Loftd_Reinapants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[]={4,2};

	};
	class Loftd_roadiessuit_pants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[]={4,2};

	};
	class Loftd_blackpants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[]={3,2};

	};
	class Loftd_CHRSAT_pants: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[]={5,4};

	};
};
