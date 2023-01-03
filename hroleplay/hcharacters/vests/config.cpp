class CfgPatches
{
	class hcharacters_vests
	{
		units[]=
		{
			"hrp_gw_ukassvest"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
    class UKAssVest_ColorBase;
    class hrp_gw_ukassvest: UKAssVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hcharacters\vests\data\hrp_gw_ukassvest_ground_co.paa",
			"hroleplay\hcharacters\vests\data\hrp_gw_ukassvest_co.paa",
			"hroleplay\hcharacters\vests\data\hrp_gw_ukassvest_co.paa"
		};
	};
	class ReflexVest;
    class hrp_BIO: ReflexVest
    {
        displayName="Biuro Interwencji obywatelskich HUMANITY";
        descriptionShort="HUMANITY NAJLEPSZY SERWER";
        weight=1;
        itemSize[]={1,1};
        itemsCargoSize[]={20,20};
        heatIsolation=1.0;
		hiddenSelections[]=
        {
            "zbytek"
        };
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\vests\data\hrp_bio.paa",
            "hroleplay\hcharacters\vests\data\hrp_bio.paa",
            "hroleplay\hcharacters\vests\data\hrp_bio.paa"
        };
    };
};