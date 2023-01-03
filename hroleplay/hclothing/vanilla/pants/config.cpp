class CfgPatches
{
	class hclothing_Vanilla
	{

		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{

	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class Jeans_ColorBase: Clothing
	{
		itemsCargoSize[]={4,2};
	};

	class CargoPants_ColorBase: Clothing
	{
		itemsCargoSize[]={6,4};
	};

	class TTSKOPants: Clothing
	{
		itemsCargoSize[]={6,3};
	};

	class HunterPants_ColorBase: Clothing
	{
		itemsCargoSize[]={6,3};
	};

	class CanvasPants_ColorBase: Clothing
	{
		itemsCargoSize[]={3,2};
	};

	class CanvasPantsMidi_ColorBase: Clothing
	{
		itemsCargoSize[]={3,2};
	};

	class TrackSuitPants_ColorBase: Clothing
	{
		itemsCargoSize[]={3,2};
	};

	class GorkaPants_ColorBase: Clothing
	{
		itemsCargoSize[]={5,4};
	};

	class PolicePants: Clothing
	{
		itemsCargoSize[]={6,3};
	};

	class PolicePantsOrel: Clothing
	{
		itemsCargoSize[]={5,4};
	};

	class ParamedicPants_ColorBase: Clothing
	{
		itemsCargoSize[]={6,3};
	};

	class FirefightersPants_ColorBase: Clothing
	{
		itemsCargoSize[]={6,3};
	};

	class PrisonUniformPants: Clothing
	{
		itemsCargoSize[]={3,2};
	};

	class LeatherPants_ColorBase: Clothing
	{
		itemsCargoSize[]={0,0};
	};

	class MedicalScrubsPants_ColorBase: Clothing
	{
		itemsCargoSize[]={4,2};
	};

	class USMCPants_ColorBase: Clothing
	{
		itemsCargoSize[]={6,4};
	};

	class SlacksPants_ColorBase: Clothing
	{
		itemsCargoSize[]={3,2};
	};

	class BDUPants: Clothing
	{
		itemsCargoSize[]={6,4};
	};

	class NBCPantsBase: Clothing
	{
		itemsCargoSize[]={3,4};
	};
	class Breeches_ColorBase: Clothing
	{
		itemsCargoSize[]={2,2};
	};

	class ShortJeans_ColorBase: Clothing
	{
		itemsCargoSize[]={3,2};
	};

	class Skirt_ColorBase: Clothing
	{
		itemsCargoSize[]={2,2};
	};

	class JumpsuitPants_ColorBase: Clothing
	{
		itemsCargoSize[]={3,2};
	};

	class LegsCover_Improvised: Clothing
	{
		itemsCargoSize[]={2,2};
	};



};
