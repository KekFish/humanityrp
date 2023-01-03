class CfgPatches
{
	class hclothing_Other_Mods
	{

		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Gear_Cooking",
			"DZ_Characters_Backpacks",
			"Munghardsdutchoven",
			"Munghards6B38",
			"Munghardsfannypack",
			"Munghardshikingbag",
			"Munghardsjaakari",
			"Munghardssimplebackpack",
			"Munghardstacticalvest",
			"Munghardstacvest",
			"quadsholster",
			"quadsbelt",
			"Leggings",
			"Military_Sweater",
			"Layered_Shirt",
			"Canvas_Backpack",
			"Kneepads_Jeans",
			"Winter_Parka",
			"Medium_Sleeves_Shirt",
			"Tactical_Leg_Holster",
			"Wool_GreatCoat",
			"Galife_Pants",
			"Munghardsoxygentank"
		};
	};
};
class CfgVehicles
{
	class Pot;
	class dutchoven_mung: Pot
	{
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
	};
	class Clothing;
	class oxygentankrig_mung: Clothing
	{

		itemSize[] = {4,5};
		itemsCargoSize[] = {8,3};

	};
	class bag_6B38_Colorbase_mung: Clothing
	{

		itemSize[] = {4,5};
		itemsCargoSize[] = {7,9};

	};
	class fannypack_ColorBase_mung: Clothing
	{
		itemSize[] = {2,4};
        itemsCargoSize[]={2,4};
	};
	class Hikingbagmung_ColorBase: Clothing
	{	
		itemSize[] = {4,5};
		itemsCargoSize[] = {6,8};
		attachments[] = {"binocular","CookingEquipment","Belt_Left","compass","WalkieTalkie","flashlight","cookingtripod"};
	};
	class jaakari_Colorbase_mung: Clothing
	{
		itemSize[] = {4,5};
		itemsCargoSize[] = {6,7};
	};
	class jaakari_simple_Colorbase_mung: jaakari_Colorbase_mung
	{
		itemSize[] = {4,5};
		itemsCargoSize[] = {6,6};
	};
	class simplebackpack_ColorBase_mung: Clothing
	{
		itemSize[] = {4,5};
		itemsCargoSize[] = {4,5};
	};
	class tacticalvest_mung: Clothing
	{
		itemSize[] = {3,4};
        itemsCargoSize[]={6,4};
	};
	class tacvest_mung: Clothing
	{

        itemSize[] = {3,4};
		itemsCargoSize[]={0,0};


	};
	class chestholster_quad_base: Clothing
	{
		itemSize[] = {3,4};
		itemsCargoSize[]={2,1};
	};
	class tacticalbelt_quad_base: Clothing
	{
		itemSize[] = {3,4};
		itemsCargoSize[]={2,3};
	};
	class Leggings_ColorBase: Clothing
	{
	
		itemsCargoSize[]={1,2};

	};
	class Military_Sweater: Clothing
	{
		itemSize[] = {2,2};
		itemsCargoSize[]={2,2};

	};
	class Layered_Shirt_Base: Clothing
	{

		itemsCargoSize[] = {1,2};

	};
	class TaloonBag_ColorBase;
	class Canvas_Backpack_Base: TaloonBag_ColorBase
	{

		itemSize[] = {4,5};
		itemsCargoSize[] = {6,6};
	};
	class Kneepads_Jeans_Base: Clothing
	{
		itemSize[] = {2,3};
		itemsCargoSize[] = {4,2};
	};
	class Winter_Parka_Base: Clothing
	{
		itemSize[] = {2,2};
		itemsCargoSize[]={4,3};

	};
	class Winter_Parka_Green: Clothing
	{
		itemSize[] = {2,2};
		itemsCargoSize[]={4,3};

	};
	class Medium_Sleeves_Shirt: Clothing
	{
		itemSize[] = {2,2};
		itemsCargoSize[]={2,2};
	};
	class Skinny_Jeans_ColorBase: Clothing
	{
		itemSize[] = {2,3};
		itemsCargoSize[] = {4,2};
	};
	class Wool_GreatCoat_ColorBase: Clothing
	{
		itemSize[] = {2,2};
		itemsCargoSize[]={4,2};
	};
	class Galife_Pants_ColorBase: Clothing
	{
		itemSize[] = {2,2};
		itemsCargoSize[]={2,2};
	};
};

