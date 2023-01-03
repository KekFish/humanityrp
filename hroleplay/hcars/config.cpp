class CfgPatches
{
	class hcars
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Wheeled","DayZExpansion_Vehicles_Ground_UAZ","DayZExpansion_Vehicles_Ground_LandRover","DayZExpansion_Vehicles_Ground_Ikarus","DayZExpansion_Vehicles_Ground_Tractor","DayZExpansion_Vehicles_Ground_Vodnik"};
	};
};
class CfgMods
{
	class hcars
	{
		dir = "hcars";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "hroleplay Cars";
		credits = "KekFish";
		author = "KekFish";
		authorID = "";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"hroleplay/hcars/Scripts/3_Game"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"hroleplay/hcars/Scripts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
	class CarScript;
	class ExpansionBoatScript;
	class Offroad_02: CarScript
	{

		fuelConsumption=60;

	};
	class OffroadHatchback: CarScript
	{

		fuelConsumption=24;

	};
	class CivilianSedan: CarScript
	{

		fuelConsumption=24;

	};
	class Hatchback_02: CarScript
	{

		fuelConsumption=24;

	};
	class Sedan_02: CarScript
	{
	
		fuelConsumption=24;

	};
	class Truck_01_Base: CarScript
	{

		fuelConsumption=60;

	};
	class ExpansionUAZBase: CarScript
	{
		fuelCapacity = 40;
		fuelConsumption = 30;
	};
	class ExpansionBus: CarScript
	{

		fuelCapacity = 130;
		fuelConsumption = 60;

	};
	class Expansion_Landrover_Base: Carscript
	{

		fuelConsumption = 32;
	};
	class ExpansionTractor: CarScript
	{
		fuelConsumption = 26;
	};
	class ExpansionVodnik: ExpansionBoatScript
	{
		fuelCapacity = 60;
		fuelConsumption = 50;
	};
};
