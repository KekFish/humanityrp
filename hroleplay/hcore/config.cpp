class CfgPatches
{
	class hcore
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts","DZ_Characters","DZ_Vehicles_Parts","DZ_Gear_Drinks","Munghardsfannypack","deerisle","JMC_DeerIsle_Scripts","DZ_Data","DZ_Weapons_Melee","DZ_Gear_Consumables","DZ_Weapons_Melee","mmg_storage"};
	};
};
class CfgMods
{
	class hcore
	{
		dir = "hroleplay";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Example";
		credits = "KekFish";
		author = "KekFish";
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				files[] = {"hroleplay/hcore/3_Game"};
			};
			class worldScriptModule
			{
				files[] = {"hroleplay/hcore/4_World"};
			};
			class missionScriptModule
			{
				files[] = {"hroleplay/hcore/5_Mission"};
			};
		};
	};
};
class CfgAmmo
{

	class MeleeDamage;
	class FinisherHit: MeleeDamage
	{
		finisherType = 1;
		class DamageApplied
		{
			type = "MeleeFinisher";
			class Health
			{
				damage = 1000;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 0;
			type = "sound";
		};
	};
	class BearTrapHit: MeleeDamage
	{
		hitAnimation = 1;
		class DamageApplied
		{
			type = "TrapHit";
			class Health
			{
				damage = 20;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
	};

};
class CfgSlots
{


};
class CfgVehicles
{



	class Inventory_Base;
	class Clothing;
	class Stone: Inventory_Base
	{

		itemSize[] = {2,2};

	};
	class BaseballBat: Inventory_Base
	{

		repairableWithKits[]={5};
		repairCosts[]={35,35};

	};
	class NailedBaseballBat: Inventory_Base
	{

		repairableWithKits[]={5};
		repairCosts[]={35,35};

	};
	class BarbedBaseballBat: Inventory_Base
	{

		repairableWithKits[]={5};
		repairCosts[]={35,35};

	};
	class PipeWrench: Inventory_Base
	{

		repairableWithKits[]={5};
		repairCosts[]={35,35};

	};
	class BrassKnuckles_ColorBase: Inventory_Base
	{

		repairableWithKits[]={5};
		repairCosts[]={35,35};

	};
	class TelescopicBaton: Inventory_Base
	{

		repairableWithKits[]={5};
		repairCosts[]={35,35};

	};
	class HockeyStick: Inventory_Base
	{

		repairableWithKits[]={5};
		repairCosts[]={35,35};

	};
	class NewHockeyStick: Inventory_Base
	{
		
		repairableWithKits[]={5};
		repairCosts[]={35,35};

	};
	class PoliceBaton: Inventory_Base
	{
		
		repairableWithKits[]={5};
		repairCosts[]={35,35};

	};
	class fannypack_ColorBase_mung: Clothing
	{
		
		repairableWithKits[]={5,2};
		repairCosts[]={35,35};

	};
	class CarRadiator: Inventory_Base
	{

		repairableWithKits[]={8};
		repairCosts[]={100,100};
	};
	class Bottle_Base;
	class Canteen: Bottle_Base
	{
		repairableWithKits[]={5};
		repairCosts[]={35,35};
	};
	
	class TomatoSeedsPack: Inventory_Base
	{

        class Horticulture
		{
			ContainsSeedsType="TomatoSeeds";
			ContainsSeedsQuantity=3;
		};
    };
class PepperSeedsPack: Inventory_Base
	{

        class Horticulture
		{
			ContainsSeedsType="PepperSeeds";
			ContainsSeedsQuantity=3;
		};
    };
class PumpkinSeedsPack: Inventory_Base
	{

        class Horticulture
		{
			ContainsSeedsType="PumpkinSeeds";
			ContainsSeedsQuantity=3;
		};
    };
class ZucchiniSeedsPack: Inventory_Base
	{

        class Horticulture
		{
			ContainsSeedsType="ZucchiniSeeds";
			ContainsSeedsQuantity=3;
		};
    };

class PlantBase;

class Plant_Tomato: PlantBase
{
    class Horticulture
    {
        GrowthStagesCount=6;
        CropsCount=4;
        CropsType="Tomato";
    };
};
class Plant_Pepper: PlantBase
{
    class Horticulture
    {
        GrowthStagesCount=6;
        CropsCount=3;
        CropsType="GreenBellPepper";
    };
};
class Plant_Potato: PlantBase
{
    class Horticulture
    {
        GrowthStagesCount=6;
        CropsCount=2;
        CropsType="PotatoSeed";
    };
};
class Plant_Pumpkin: PlantBase
{
    class Horticulture
    {
        GrowthStagesCount=7;
        CropsCount=1;
        CropsType="Pumpkin";
    };
};
class Plant_Zucchini: PlantBase
{
    class Horticulture
    {
        GrowthStagesCount=7;
        CropsCount=2;
        CropsType="Zucchini";
    };
};

};