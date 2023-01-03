
class CfgPatches
{
	class hrp_zombies
	{
		units[]=
		{
			"Hermit_NewAI"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Zombies"
		};
	};
};
class CfgVehicles
{
    class ZmbM_PolicemanFat_Base;
    class ZmbF_PoliceWomanNormal_Base;
    class ZmbM_ParamedicNormal_Base;
    class ZmbF_ParamedicNormal_Base;
    class hrp_ZmbM_Sheriffman_Fat: ZmbM_PolicemanFat_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\zombies\data\hrp_sheriffman_fat_m_co.paa"
        };
    };
    class hrp_ZmbM_Sheriffwoman_Normal: ZmbF_PoliceWomanNormal_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\zombies\data\hrp_sheriffwoman_normal_f_co.paa"
        };
    };
    class hrp_ZmbM_Policeman_Fat: ZmbM_PolicemanFat_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\zombies\data\hrp_policeman_fat_m_co.paa"
        };
    };
    class hrp_ZmbM_Policewoman_Normal: ZmbF_PoliceWomanNormal_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\zombies\data\hrp_policewoman_normal_f_co.paa"
        };
    };
    class hrp_ZmbM_ParamedicNormal_Blue: ZmbM_ParamedicNormal_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\zombies\data\paramedic_normal_m_blue_co.paa"
        };
    };
    class hrp_ZmbM_ParamedicNormal_Green: ZmbM_ParamedicNormal_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\zombies\data\paramedic_normal_m_green_co.paa"
        };
    };
    class hrp_ZmbM_ParamedicNormal_Red: ZmbM_ParamedicNormal_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\zombies\data\paramedic_normal_m_red_co.paa"
        };
    };
    class hrp_ZmbM_ParamedicNormal_Black: ZmbM_ParamedicNormal_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\zombies\data\paramedic_normal_m_black_co.paa"
        };
    };
    class hrp_ZmbF_ParamedicNormal_Blue: ZmbF_ParamedicNormal_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\zombies\data\paramedic_normal_f_blue_co.paa"
        };
    };
    class hrp_ZmbF_ParamedicNormal_Green: ZmbF_ParamedicNormal_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\zombies\data\paramedic_normal_f_green_co.paa"
        };
    };
    class hrp_ZmbF_ParamedicNormal_Red: ZmbF_ParamedicNormal_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "hroleplay\hcharacters\zombies\data\paramedic_normal_f_red_co.paa"
        };
    };
};