class CfgPatches
{
	class hclothing_loftd_vests
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
            "Loftd_bloodvest",
            "Loftd_civilvest",
            "Loftd_huntervest",
            "Loftd_CHRSAT",
            "Loftd_militarysetvest",
            "Loftd_bagbelt",
            "Loftd_militarySvest",
            "Loftd_militaryvestCIRAS",
            "DZ_Gear_Containers"
			
		
		
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
    class Container_Base;
	class Loftd_bloodvest_ColorBase: Clothing
	{
        itemSize[] = {3,4};
        itemsCargoSize[]={6,4};
    };
    class Loftd_civilvest_ColorBase: Clothing
	{
        itemSize[] = {3,4};
        itemsCargoSize[]={4,2};
    };
    class Loftd_huntervest_ColorBase: Clothing
	{
        itemSize[] = {3,4};
        itemsCargoSize[]={4,3};
    };
    class Loftd_CHRSAT_plate: Clothing
	{
        itemSize[] = {3,4};
    };
    class Loftd_militarysetvest_ColorBase: Clothing
	{
        itemSize[] = {3,4};
        itemsCargoSize[]={6,2};
    };
    class Loftd_bagbelt_ColorBase: Clothing
	{
        itemSize[] = {2,4};
        itemsCargoSize[]={2,4};
    };
    class Loftd_militarySvest_ColorBase: Clothing
	{
        itemSize[] = {4,4};

    };
    class Loftd_bigpouch: Clothing
	{
        itemSize[] = {3,3};
        itemsCargoSize[]={3,3};
    };
    class Loftd_bigpouch2: Clothing
	{
        itemSize[] = {3,2};
        itemsCargoSize[]={3,2};
    };
    class Loftd_magpouches: Clothing
	{
        itemSize[] = {2,2};
        itemsCargoSize[]={2,2};
    };
    class Loftd_militaryvestCIRAS_ColorBase: Clothing
	{
        itemSize[] = {4,4};

    };
	class Loftd_sidebag1: Container_Base
	{
        itemSize[] = {3,3};
        itemsCargoSize[]={3,3};
    };
    class Loftd_sidebag2: Container_Base
	{
        itemSize[] = {3,3};
        itemsCargoSize[]={3,3};
    };
    class Loftd_Middletopbag: Container_Base
	{
        itemSize[] = {3,2};
        itemsCargoSize[]={3,2};
    };
};
