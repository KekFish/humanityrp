class CfgPatches
{
	class hgroups
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
            "DZ_Data",
            "deerisle"

        };
	};
};
class CfgWorlds
{
class CAWorld;
class ChernarusPlus: CAWorld
	{
		class Grid;
		class Weather;
	};
class deerisle: ChernarusPlus
	{


		mapTextureOpened="hroleplay\hgroups\data\karta_co.paa";

    };

};
class CfgVehicles
{
	class Flag_Base;
    class Clothing;
    class Armband_ColorBase: Clothing
	{

    };
    
    class hrp_Flag_Outsiders: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\outsiders.paa"};
	};
    class hrp_Flag_Stalkers: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\stalkers.paa"};
	};
    class hrp_Flag_Archipelag: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\archipelag.paa"};
	};
    class hrp_Flag_Hunters: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\hunters.paa"};
	};
    class hrp_Flag_Krety: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\krety.paa"};
	};
    class hrp_Flag_Kupcy: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\kupcy.paa"};
	};
    class hrp_Flag_Szajbusy: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\szajbusy.paa"};
	};
    class hrp_Flag_georgetownschool: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\georgetownschool.paa"};
	};
    class hrp_Flag_PseudoMonolit: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\pseudomonolit.paa"};
	};
    class hrp_Flag_Millerowie: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\milerowie.paa"};
	};
	class hrp_Flag_Wolfs: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\wilki.paa"};
	};
    class hrp_Flag_Gwardia: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\gwardia.paa"};
	};
    class hrp_Flag_Flock: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\jarki.paa"};
	};
    class hrp_Flag_Pirates: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\pirates.paa"};
	};
    class hrp_Flag_Truemom: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\truemom.paa"};
	};
    class hrp_Flag_Domfiki: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\niggerzy.paa"};
	};
    // class hrp_Flag_Sekta: Flag_Base
	// {
	// 	scope = 2;
	// 	hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\sekta.paa"};
	// };
    class hrp_Flag_Phoenix: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"hroleplay\hgroups\data\phoenix.paa"};
	};
    class hrp_Armband_Outsiders: Armband_ColorBase 
    {   
        displayName="Opaska Outsiders";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\outsiders.paa",
            "hroleplay\hgroups\data\outsiders.paa",
            "hroleplay\hgroups\data\outsiders.paa",
            "hroleplay\hgroups\data\outsiders.paa",
            "hroleplay\hgroups\data\outsiders.paa",
            "hroleplay\hgroups\data\outsiders.paa",
            "hroleplay\hgroups\data\outsiders.paa",
            "hroleplay\hgroups\data\outsiders.paa",
            "hroleplay\hgroups\data\outsiders.paa"
		};
    };
    class hrp_Armband_Stalkers: Armband_ColorBase 
    {   
        displayName="Opaska Stalkers";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\stalkers.paa",
            "hroleplay\hgroups\data\stalkers.paa",
            "hroleplay\hgroups\data\stalkers.paa",
            "hroleplay\hgroups\data\stalkers.paa",
            "hroleplay\hgroups\data\stalkers.paa",
            "hroleplay\hgroups\data\stalkers.paa",
            "hroleplay\hgroups\data\stalkers.paa",
            "hroleplay\hgroups\data\stalkers.paa",
            "hroleplay\hgroups\data\stalkers.paa"
		};
    };
    class hrp_Armband_archipelag: Armband_ColorBase 
    {   
        displayName="Opaska Archipelag";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\archipelag.paa",
            "hroleplay\hgroups\data\archipelag.paa",
            "hroleplay\hgroups\data\archipelag.paa",
            "hroleplay\hgroups\data\archipelag.paa",
            "hroleplay\hgroups\data\archipelag.paa",
            "hroleplay\hgroups\data\archipelag.paa",
            "hroleplay\hgroups\data\archipelag.paa",
            "hroleplay\hgroups\data\archipelag.paa",
            "hroleplay\hgroups\data\archipelag.paa",
		};
        
    };
    class hrp_Armband_Szajbusy: Armband_ColorBase 
    {   
        displayName="Opaska Szajbusy";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\szajbusy.paa",
            "hroleplay\hgroups\data\szajbusy.paa",
            "hroleplay\hgroups\data\szajbusy.paa",
            "hroleplay\hgroups\data\szajbusy.paa",
            "hroleplay\hgroups\data\szajbusy.paa",
            "hroleplay\hgroups\data\szajbusy.paa",
            "hroleplay\hgroups\data\szajbusy.paa",
            "hroleplay\hgroups\data\szajbusy.paa",
            "hroleplay\hgroups\data\szajbusy.paa",
		};
        
    };
    class hrp_Armband_Kupcy: Armband_ColorBase 
    {   
        displayName="Opaska Kupcy";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\kupcy.paa",
            "hroleplay\hgroups\data\kupcy.paa",
            "hroleplay\hgroups\data\kupcy.paa",
            "hroleplay\hgroups\data\kupcy.paa",
            "hroleplay\hgroups\data\kupcy.paa",
            "hroleplay\hgroups\data\kupcy.paa",
            "hroleplay\hgroups\data\kupcy.paa",
            "hroleplay\hgroups\data\kupcy.paa",
            "hroleplay\hgroups\data\kupcy.paa",
		};
        
    };
    class hrp_Armband_krety: Armband_ColorBase 
    {   
        displayName="Opaska Krety";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\krety.paa",
            "hroleplay\hgroups\data\krety.paa",
            "hroleplay\hgroups\data\krety.paa",
            "hroleplay\hgroups\data\krety.paa",
            "hroleplay\hgroups\data\krety.paa",
            "hroleplay\hgroups\data\krety.paa",
            "hroleplay\hgroups\data\krety.paa",
            "hroleplay\hgroups\data\krety.paa",
            "hroleplay\hgroups\data\krety.paa",
		};
        
    };
    class hrp_Armband_georgetownschool: Armband_ColorBase 
    {   
        displayName="Opaska New George Town School";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\georgetownschool.paa",
            "hroleplay\hgroups\data\georgetownschool.paa",
            "hroleplay\hgroups\data\georgetownschool.paa",
            "hroleplay\hgroups\data\georgetownschool.paa",
            "hroleplay\hgroups\data\georgetownschool.paa",
            "hroleplay\hgroups\data\georgetownschool.paa",
            "hroleplay\hgroups\data\georgetownschool.paa",
            "hroleplay\hgroups\data\georgetownschool.paa",
            "hroleplay\hgroups\data\georgetownschool.paa",
		};
        
    };
    class hrp_Armband_pseudomonolit: Armband_ColorBase 
    {   
        displayName="Opaska Kult";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\pseudomonolit.paa",
            "hroleplay\hgroups\data\pseudomonolit.paa",
            "hroleplay\hgroups\data\pseudomonolit.paa",
            "hroleplay\hgroups\data\pseudomonolit.paa",
            "hroleplay\hgroups\data\pseudomonolit.paa",
            "hroleplay\hgroups\data\pseudomonolit.paa",
            "hroleplay\hgroups\data\pseudomonolit.paa",
            "hroleplay\hgroups\data\pseudomonolit.paa",
            "hroleplay\hgroups\data\pseudomonolit.paa",
		};
        
    };
    class hrp_Armband_Phoenix: Armband_ColorBase 
    {   
        displayName="Opaska New Phoenix";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\phoenix.paa",
            "hroleplay\hgroups\data\phoenix.paa",
            "hroleplay\hgroups\data\phoenix.paa",
            "hroleplay\hgroups\data\phoenix.paa",
            "hroleplay\hgroups\data\phoenix.paa",
            "hroleplay\hgroups\data\phoenix.paa",
            "hroleplay\hgroups\data\phoenix.paa",
            "hroleplay\hgroups\data\phoenix.paa",
            "hroleplay\hgroups\data\phoenix.paa",
		};
        
    };
    // class hrp_Armband_Sekta: Armband_ColorBase 
    // {   
    //     displayName="Opaska Wędrowcy Otchłani";
	// 	descriptionShort="";
    //     itemSize[]={1,1};
    //     scope=2;
	// 	visibilityModifier=0.94999999;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		hgroups\data\sekta.paa",
    //         hgroups\data\sekta.paa",
    //         hgroups\data\sekta.paa",
    //         hgroups\data\sekta.paa",
    //         hgroups\data\sekta.paa",
    //         hgroups\data\sekta.paa",
    //         hgroups\data\sekta.paa",
    //         hgroups\data\sekta.paa",
    //         hgroups\data\sekta.paa",
	// 	};
    // };
    class hrp_Armband_Domfiki: Armband_ColorBase 
    {   
        displayName="Opaska Zbawcy";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\niggerzy.paa",
            "hroleplay\hgroups\data\niggerzy.paa",
            "hroleplay\hgroups\data\niggerzy.paa",
            "hroleplay\hgroups\data\niggerzy.paa",
            "hroleplay\hgroups\data\niggerzy.paa",
            "hroleplay\hgroups\data\niggerzy.paa",
            "hroleplay\hgroups\data\niggerzy.paa",
            "hroleplay\hgroups\data\niggerzy.paa",
            "hroleplay\hgroups\data\niggerzy.paa",
		};
        
    };
    class hrp_Armband_Truemom: Armband_ColorBase 
    {   
        displayName="Opaska Greenville";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\truemom.paa",
            "hroleplay\hgroups\data\truemom.paa",
            "hroleplay\hgroups\data\truemom.paa",
            "hroleplay\hgroups\data\truemom.paa",
            "hroleplay\hgroups\data\truemom.paa",
            "hroleplay\hgroups\data\truemom.paa",
            "hroleplay\hgroups\data\truemom.paa",
            "hroleplay\hgroups\data\truemom.paa",
            "hroleplay\hgroups\data\truemom.paa",
		};
        
    };
    class hrp_Armband_Hunters: Armband_ColorBase 
    {   
        displayName="Opaska Wolf";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\hunters.paa",
            "hroleplay\hgroups\data\hunters.paa",
            "hroleplay\hgroups\data\hunters.paa",
            "hroleplay\hgroups\data\hunters.paa",
            "hroleplay\hgroups\data\hunters.paa",
            "hroleplay\hgroups\data\hunters.paa",
            "hroleplay\hgroups\data\hunters.paa",
            "hroleplay\hgroups\data\hunters.paa",
            "hroleplay\hgroups\data\hunters.paa",
		};
        
    };
    class hrp_Armband_Millerowie: Armband_ColorBase 
    {   
        displayName="Opaska Wolf";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\milerowie.paa",
            "hroleplay\hgroups\data\milerowie.paa",
            "hroleplay\hgroups\data\milerowie.paa",
            "hroleplay\hgroups\data\milerowie.paa",
            "hroleplay\hgroups\data\milerowie.paa",
            "hroleplay\hgroups\data\milerowie.paa",
            "hroleplay\hgroups\data\milerowie.paa",
            "hroleplay\hgroups\data\milerowie.paa",
            "hroleplay\hgroups\data\milerowie.paa",
		};
        
    };
    class hrp_Armband_Wolf: Armband_ColorBase 
    {   
        displayName="Opaska Wolf";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\wilki.paa",
            "hroleplay\hgroups\data\wilki.paa",
            "hroleplay\hgroups\data\wilki.paa",
            "hroleplay\hgroups\data\wilki.paa",
            "hroleplay\hgroups\data\wilki.paa",
            "hroleplay\hgroups\data\wilki.paa",
            "hroleplay\hgroups\data\wilki.paa",
            "hroleplay\hgroups\data\wilki.paa",
            "hroleplay\hgroups\data\wilki.paa",
		};
        
    };
    class hrp_Armband_Gwardia: Armband_ColorBase 
    {   
        displayName="Opaska Commonwealth of New Phoenix";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\gwardia.paa",
            "hroleplay\hgroups\data\gwardia.paa",
            "hroleplay\hgroups\data\gwardia.paa",
            "hroleplay\hgroups\data\gwardia.paa",
            "hroleplay\hgroups\data\gwardia.paa",
            "hroleplay\hgroups\data\gwardia.paa",
            "hroleplay\hgroups\data\gwardia.paa",
            "hroleplay\hgroups\data\gwardia.paa",
            "hroleplay\hgroups\data\gwardia.paa",
		};
        
    };
    class hrp_Armband_Flock: Armband_ColorBase 
    {   
        displayName="Opaska The Flock";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\jarki.paa",
            "hroleplay\hgroups\data\jarki.paa",
            "hroleplay\hgroups\data\jarki.paa",
            "hroleplay\hgroups\data\jarki.paa",
            "hroleplay\hgroups\data\jarki.paa",
            "hroleplay\hgroups\data\jarki.paa",
            "hroleplay\hgroups\data\jarki.paa",
            "hroleplay\hgroups\data\jarki.paa",
            "hroleplay\hgroups\data\jarki.paa",
		};
        
    };
    class hrp_Armband_Pirates: Armband_ColorBase 
    {   
        displayName="Opaska Pirates";
		descriptionShort="";
        itemSize[]={1,1};
        scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"hroleplay\hgroups\data\pirates.paa",
            "hroleplay\hgroups\data\pirates.paa",
            "hroleplay\hgroups\data\pirates.paa",
            "hroleplay\hgroups\data\pirates.paa",
            "hroleplay\hgroups\data\pirates.paa",
            "hroleplay\hgroups\data\pirates.paa",
            "hroleplay\hgroups\data\pirates.paa",
            "hroleplay\hgroups\data\pirates.paa",
            "hroleplay\hgroups\data\pirates.paa",
		};
        
    };
};