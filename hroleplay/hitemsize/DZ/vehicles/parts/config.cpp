class cfgPatches
{
	class hroleplay_Parts_Config
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Parts"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class TireRepairKit: Inventory_Base
	{
		itemSize[] = {3,1};
		weight = 500;
	};
};
