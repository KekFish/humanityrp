class CfgPatches
{
	class hclothing_Vanilla
	{

		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Vests",
			"DZ_Gear_Containers"
		};
	};
};
class CfgVehicles
{

	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};

	class Container_Base;
	class PlateCarrierPouches: Container_Base
	{
		itemSize[] = {3,6};
		itemsCargoSize[] = {3,6};
	};
	class SmershVest: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class PressVest_ColorBase: Clothing
	{
		itemsCargoSize[]={6,2};
	};
	class UKAssVest_ColorBase: Clothing
	{
		itemsCargoSize[]={6,3};
	};
	class HighCapacityVest_ColorBase: Clothing
	{
		itemsCargoSize[]={6,4};
	};
	class LeatherStorageVest_ColorBase: Clothing
	{
		itemsCargoSize[]={5,3};
	};
	class HuntingVest: Clothing
	{
		itemsCargoSize[]={4,2};
	};

};
