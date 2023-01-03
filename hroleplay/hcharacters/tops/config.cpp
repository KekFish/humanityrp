class CfgPatches
{
	class hcharacters_tops
	{
		units[]=
		{
			"hrp_gw_usmc_jacket"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops"
		};
	};
};
class CfgVehicles
{
    class USMCJacket_ColorBase;
	class PoliceJacket;
    class hrp_gw_usmc_jacket: USMCJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hcharacters\tops\data\hrp_gw_usmc_jacket_co.paa",
			"hroleplay\hcharacters\tops\data\hrp_gw_usmc_jacket_co.paa",
			"hroleplay\hcharacters\tops\data\hrp_gw_usmc_jacket_co.paa"
		};
	};
	class hrp_SheriffJacket: PoliceJacket
	{


		heatIsolation=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hcharacters\tops\data\policejacket_co1.paa",
			"hroleplay\hcharacters\tops\data\policejacket_co1.paa",
			"hroleplay\hcharacters\tops\data\policejacket_co1.paa"
		};

	};
};