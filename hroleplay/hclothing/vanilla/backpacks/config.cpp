class CfgPatches
{
	class hclothing_Vanilla_BackPack
	{

		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			

		};
	};
};
class CfgVehicles
{

	class Clothing;
	class TaloonBag_ColorBase;
	class TaloonBag_Blue: TaloonBag_ColorBase
	{
		itemsCargoSize[] = {6,5};
	};

	class TaloonBag_Green: TaloonBag_ColorBase
	{
		itemsCargoSize[] = {6,5};
	};

	class TaloonBag_Orange: TaloonBag_ColorBase
	{
		itemsCargoSize[] = {6,5};
	};

	class TaloonBag_Violet: TaloonBag_ColorBase
	{
		itemsCargoSize[] = {6,5};
	};

	class TortillaBag: Clothing
	{
		itemsCargoSize[] = {6,7};
	};

	class CourierBag: Clothing
	{
		itemsCargoSize[] = {4,5};
	};
	class FurCourierBag: Clothing
	{
		itemsCargoSize[] = {4,5};
	};
	class ImprovisedBag: Clothing
	{
		itemsCargoSize[] = {5,5};
	};

	class FurImprovisedBag: Clothing
	{
		itemsCargoSize[] = {5,5};
	};

	class DryBag_ColorBase: Clothing
	{
		itemsCargoSize[] = {5,8};
	};

	class HuntingBag: Clothing
	{
		itemsCargoSize[] = {6,7};
	};

	class MountainBag_ColorBase: Clothing
	{
		itemsCargoSize[] = {6,9};
	};

	class SmershBag: Clothing
	{
		itemsCargoSize[] = {4,4};
	};

	class ChildBag_ColorBase: Clothing
	{
		itemsCargoSize[] = {5,3};
	};

	class LeatherSack_ColorBase: Clothing
	{
		itemsCargoSize[] = {5,8};
	};

	class AssaultBag_ColorBase: Clothing
	{
		itemsCargoSize[] = {4,7};
	};
		
	class CoyoteBag_ColorBase: Clothing
	{
		itemsCargoSize[] = {7,7};
	};

	class AliceBag_ColorBase: Clothing
	{
		itemsCargoSize[] = {7,9};
	};

};
