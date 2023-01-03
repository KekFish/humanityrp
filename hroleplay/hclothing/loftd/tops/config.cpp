class CfgPatches
{
	class hclothing_loftd_tops
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"Loftd_acronym",
			"Loftd_adidasjacket",
			"Loftd_aidansuit",
			"Loftd_albert",
			"Loftd_alexjacket",
			"Loftd_armyjacket",
			"Loftd_bajka",
			"Loftd_bikerjacket",
			"Loftd_bomberjacket",
			"Loftd_brian",
			"Loftd_Brianpug",
			"Loftd_bridgejacket",
			"Loftd_brundonjacket",
			"Loftd_coloradojacket",
			"Loftd_cybershirt",
			"Loftd_dawnsuit",
			"Loftd_femalejacket",
			"Loftd_gaptopsuit",
			"Loftd_hoodedjacket",
			"Loftd_Ironsightshirt",
			"Loftd_Ironsightjacket",
			"Loftd_Ironsightwindbreaker",
			"Loftd_jacketfranc",
			"Loftd_jackethen",
			"Loftd_jacketlong",
			"Loftd_leatherjacket",
			"Loftd_leatherjacketW",
			"Loftd_militarysetjacket",
			"Loftd_northjacket",
			"Loftd_Reinajacket",
			"Loftd_Ririteojacket",
			"Loftd_roadiessuit",
			"Loftd_shirt",
			"Loftd_shirtJ",
			"Loftd_suedejacket",
			"Loftd_tacticaljacket",
			"Loftd_waistcoat",
			"Loftd_windjacket",
			"Loftd_wolverine",
			"Loftd_wooljacket",
			"Loftd_wornjacket",
			"Loftd_cloak",
			"Loftd_CHRSAT",
			"Loftd_hoodie",
			"Loftd_akitosuit"
		
		
		};
	};
};
class CfgMods
{
	class hclothing_loftd
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
	class Loftd_akito_jacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[] = {3,3};

	};
	class Loftd_akito_pants_ColorBase: Clothing
	{

		itemSize[] = {2,2};
		itemsCargoSize[] = {5,4};

	};
	class Loftd_hoodie_ColorBase: Clothing
	{

		itemSize[] = {2,3};
		itemsCargoSize[] = {3,3};

	};
	class Loftd_acronym_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[] = {4,4};
	};
	class Loftd_adidasjacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={2,3};
	};
	class Loftd_aidansuit_jacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,2};
	};
	class Loftd_albert_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,2};
	};
	class Loftd_alexjacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,3};
	};
	class Loftd_armyjacket: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,3};
	};
	class Loftd_bajka_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={2,2};
	};
	class Loftd_bikerjacket: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={6,1};
	};
	class Loftd_bomberjacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,3};
	};
	class Loftd_brian_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,3};
	};
	class Loftd_Brianpug_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,2};
	};
	class Loftd_bridgejacket: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,2};
	};
	class Loftd_brundonjacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,3};
	};
	class Loftd_coloradojacket: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,3};
	};
	class Loftd_coloradojacket_dark: Loftd_coloradojacket
	{

		itemSize[] = {2,3};
		itemsCargoSize[]={4,3};
		};
	class Loftd_coloradojacket_G63: Loftd_coloradojacket
	{
		itemSize[] = {2,3};
		itemsCargoSize[]={4,3};
	};
	class Loftd_coloradojacket_camogr: Loftd_coloradojacket
	{
		itemSize[] = {2,3};
		itemsCargoSize[]={4,3};
	};
	class Loftd_coloradojacket_camogr2: Loftd_coloradojacket
	{
		itemSize[] = {2,3};
		itemsCargoSize[]={4,3};
	};
	class Loftd_cybershirt_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={2,1};
	};
	class Loftd_dawnjacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,3};
	};
	class Loftd_femalejacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={2,3};
	};
	class Loftd_gaptopsuit_jacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,3};
	};
	class Loftd_gaptopsuit_jacket_CL_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,3};
	};
	class Loftd_hoodedjacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,2};
	};
	class Loftd_Ironsightjacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,3};
	};
	class Loftd_Ironsightshirt_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,2};
	};
	class Loftd_Ironsightwindbreaker_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,3};
	};
	class Loftd_jacketfranc_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,2};
	};
	class Loftd_jackethen_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,2};
	};
	class Loftd_jacketlong_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,2};
	};
	class Loftd_leatherjacket: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={5,2};
	};
	class Loftd_leatherjacketW: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={5,2};
	};
	class Loftd_militarysetjacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,4};
	};
	class Loftd_northjacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,3};
	};
	class Loftd_Reinajacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,2};
	};
	class Loftd_Ririteojacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,2};
	};
	class Loftd_roadiessuit_jacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,2};
	};
	class Loftd_shirt_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={2,1};
	};
	class Loftd_shirtJ_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={2,2};
	};
	class Loftd_suedejacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={2,3};
	};
	class Loftd_tacticaljacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,4};
	};
	class Loftd_waistcoat_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={1,2};
	};
	class Loftd_windjacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,3};
	};
	class Loftd_wolverine_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={2,3};
	};
	class Loftd_wooljacket: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,2};
	};
	class Loftd_wornjacket_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={4,2};
	};
	class Loftd_cloak_ColorBase: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={1,2};
	};
	class Loftd_CHRSAT_jacket: Clothing
	{
	
		itemSize[] = {2,3};
		itemsCargoSize[]={3,3};
	};
	
	
	
};
