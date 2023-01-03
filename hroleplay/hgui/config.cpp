////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 8.90
//https://mikero.bytex.digital/Downloads
//'now' is Sun Sep 18 12:26:43 2022 : 'file' last modified on Thu Apr 21 09:18:50 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class hgui
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DayZExpansion_Scripts"};
	};
};
class CfgMods
{
	class hgui
	{
		dir = "hgui";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "hroleplay GUI";
		credits = "KekFish";
		author = "KekFish";
		authorID = "";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","Mission"};
		class defs
		{
			class imageSets
			{
				files[] = {"hroleplay\hgui\new_gui\Nowe_GUI.imageset"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"hroleplay/hgui/Scripts/3_Game"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"hroleplay/hgui/Scripts/5_Mission"};
			};
		};
	};
};
