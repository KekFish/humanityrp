modded class InGameMenu
{







override Widget Init()
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("InGameMenu::Init - Start");
		#endif
		
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("hroleplay/hgui/layouts/hroleplay_ingamemenu.layout");
		m_RespawnButton 			= layoutRoot.FindAnyWidget( "respawn_button" );
		m_RestartDeadRandomButton	= layoutRoot.FindAnyWidget( "respawn_button_random" );
		m_RestartDeadCustomButton	= layoutRoot.FindAnyWidget( "respawn_button_custom" );
				
		m_ContinueButton	= layoutRoot.FindAnyWidget( "continuebtn" );
		m_ExitButton		= layoutRoot.FindAnyWidget( "exitbtn" );
		m_RestartButton		= layoutRoot.FindAnyWidget( "restartbtn" );
		m_OptionsButton		= layoutRoot.FindAnyWidget( "optionsbtn" );
		m_ModdedWarning		= TextWidget.Cast( layoutRoot.FindAnyWidget( "ModdedWarning" ) );
		m_HintPanel			= new UiHintPanel(layoutRoot.FindAnyWidget( "hint_frame" ));
		m_ServerInfoPanel 	= layoutRoot.FindAnyWidget( "server_info" );
		m_ServerIP 			= TextWidget.Cast( layoutRoot.FindAnyWidget( "server_ip" ) );
		m_ServerPort 		= TextWidget.Cast( layoutRoot.FindAnyWidget( "server_port" ) );
		m_ServerName 		= TextWidget.Cast( layoutRoot.FindAnyWidget( "server_name" ) );
		//m_FavoriteButton 	= layoutRoot.FindAnyWidget( "favorite_button" );
		m_FavoriteImage 	= layoutRoot.FindAnyWidget( "favorite_image" );
		m_UnfavoriteImage 	= layoutRoot.FindAnyWidget( "unfavorite_image" );
		m_CopyInfoButton 	= layoutRoot.FindAnyWidget( "copy_button" );
		if (GetGame().IsMultiplayer())
		{
			ButtonSetText(m_RestartButton, "#main_menu_respawn");
		}
		else
		{
			ButtonSetText(m_RestartButton, "#main_menu_restart");
		}	
		
	#ifdef BULDOZER		
		delete m_RestartButton;
	#endif
		
		//! Logo
		
		//! Licensing Panel
		m_Licensing = WrapSpacerWidget.Cast( layoutRoot.FindAnyWidget( "Licensing" ) );
		
		//! DeadScreen
		m_DeadScreenRoot					= GetGame().GetWorkspace().CreateWidgets("DayZExpansion/GUI/layouts/ui/expansion_dead_screen.layout", layoutRoot);
		
		m_DeadScreenRoot.SetAlpha( 0 );
		m_DeadScreenRoot.Show( false );
		
		m_DeadScreen						= Widget.Cast( m_DeadScreenRoot.FindAnyWidget( "dead_screen" ) );
		m_DeadScreen.SetAlpha(0);
		
		m_DeadScreenImage 					= ImageWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "dead_screen_image" ) );
		m_DeadScreenImage.SetAlpha(0);
		m_DeadScreenImage.LoadImageFile( 0, "DayZExpansion/GUI/textures/dead_screens/dead_screen.edds" );
		
		m_DeadSceenStatsButtonPanel			= Widget.Cast( m_DeadScreenRoot.FindAnyWidget( "ButtonPanel" ) );
		m_DeadSceenStatsButton				= ButtonWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "bStats" ) );
		m_DeadSceenStatsButtonLable			= TextWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "bStatsLable" ) );	
		
		m_DeadSceenStatsPanel				= Widget.Cast( m_DeadScreenRoot.FindAnyWidget( "PlayerStatisticsPanel" ) );
		m_DeadSceenStatsPanelTitle			= TextWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "Caption" ) );
		m_DeadSourceVal						= TextWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "DeadSourceValue" ) );
		m_LongestShotVal					= TextWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "LongRangeShotValue" ) );
		m_DistanceVal						= TextWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "DistanceTraveledValue" ) );
		m_AnimalsKilledVal					= TextWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "AnimalsKilledValue" ) );
		m_InfectedKilledVal					= TextWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "InfectedKilledValue" ) );
		m_PlayersKilledVal					= TextWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "PlayersKilledValue" ) );
		m_TimeSurvivedVal					= TextWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "TimeSurvivedValue" ) );
		m_DeadScreenStatsHideButton			= ButtonWidget.Cast( m_DeadScreenRoot.FindAnyWidget( "bHide" ) );
		
		m_DeadScreenFadeInIncrement	= 1 / DEAD_SCREEN_FADEIN_TIME;
		m_DeadScreenImageFadeInIncrement = 1 / DEAD_SCREEN_IMAGE_FADEIN_TIME;
		
		if ( !GetExpansionSettings().GetGeneral().UseDeathScreenStatistics )
			m_DeadSceenStatsButtonPanel.Show(false);
		
		HudShow( false );
		SetGameVersion();
		SetServerInfoVisibility( SetServerInfo() && g_Game.GetProfileOption( EDayZProfilesOptions.SERVERINFO_DISPLAY ) && !GetExpansionClientSettings().StreamerMode );
		m_ModdedWarning.Show( false );
		
		if (GetExpansionSettings().GetGeneral().UseNewsFeedInGameMenu)
		{
			//! Newsfeed
			//m_NewsfeedPanel 	= Widget.Cast(layoutRoot.FindAnyWidget( "NewsFeedPanel" ));
			//m_ExpansionNewsfeed = new ExpansionNewsfeed(m_NewsfeedPanel);
		}
		
		Refresh();

		#ifdef EXPANSIONEXPRINT
		EXPrint("InGameMenu::Init - End");
		#endif

		return layoutRoot;
	}
}