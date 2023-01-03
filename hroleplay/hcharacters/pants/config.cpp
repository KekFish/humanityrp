class CfgPatches
{
	class hcharacters_pants
	{
		units[]=
		{
			"hrp_gw_usmc_pants"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{
    class USMCPants_ColorBase;
	class PolicePants;
    class hrp_gw_usmc_pants: USMCPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hcharacters\pants\data\hrp_gw_usmc_pants_co.paa",
			"hroleplay\hcharacters\pants\data\hrp_gw_usmc_pants_co.paa",
			"hroleplay\hcharacters\pants\data\hrp_gw_usmc_pants_co.paa"
		};
	};
	class hrp_SheriffPants: PolicePants
	{

		heatIsolation=0.80000001;
		itemsCargoSize[]={6,3};
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hcharacters\pants\data\policepants_co1.paa",
			"hroleplay\hcharacters\pants\data\policepants_co1.paa",
			"hroleplay\hcharacters\pants\data\policepants_co1.paa"
		};
	};
};