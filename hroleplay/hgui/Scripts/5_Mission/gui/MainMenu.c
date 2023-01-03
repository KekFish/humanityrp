
#define EXPANSION_MAINMENU_NEW_DISABLE


#ifdef EXPANSION_MAINMENU_NEW_DISABLE
modded class MainMenu
{
	override Widget Init()
	{

		
		layoutRoot = GetGame().GetWorkspace().CreateWidgets( "hroleplay/hgui/layouts/hroleplay_main_menu.layout" );
		
		m_Play						= layoutRoot.FindAnyWidget( "play" );
		m_ChooseServer				= layoutRoot.FindAnyWidget( "choose_server" );
		m_CustomizeCharacter		= layoutRoot.FindAnyWidget( "customize_character" );
		m_PlayVideo					= layoutRoot.FindAnyWidget( "play_video" );
		m_Tutorials					= layoutRoot.FindAnyWidget( "tutorials" );
		m_TutorialButton			= layoutRoot.FindAnyWidget( "tutorial_button" );
		m_MessageButton				= layoutRoot.FindAnyWidget( "message_button" );
		m_SettingsButton			= layoutRoot.FindAnyWidget( "settings_button" );
		m_Exit						= layoutRoot.FindAnyWidget( "exit_button" );
		m_PrevCharacter				= layoutRoot.FindAnyWidget( "prev_character" );
		m_NextCharacter				= layoutRoot.FindAnyWidget( "next_character" );

		m_Version					= TextWidget.Cast( layoutRoot.FindAnyWidget( "version" ) );
		m_ModdedWarning				= TextWidget.Cast( layoutRoot.FindAnyWidget( "ModdedWarning" ) );
		m_CharacterRotationFrame	= layoutRoot.FindAnyWidget( "character_rotation_frame" );
		
		m_LastPlayedTooltip			= layoutRoot.FindAnyWidget( "last_server_info" );
		m_LastPlayedTooltip.Show(false);
		m_LastPlayedTooltipLabel	= m_LastPlayedTooltip.FindAnyWidget( "last_server_info_label" );
		m_LastPlayedTooltipName 	= TextWidget.Cast( m_LastPlayedTooltip.FindAnyWidget( "last_server_info_name" ) );
		m_LastPlayedTooltipIP		= TextWidget.Cast( m_LastPlayedTooltip.FindAnyWidget( "last_server_info_ip" ) );
		m_LastPlayedTooltipPort		= TextWidget.Cast( m_LastPlayedTooltip.FindAnyWidget( "last_server_info_port" ) );
		
		m_LastPlayedTooltipTimer	= new WidgetFadeTimer();
		
		m_Stats						= new MainMenuStats( layoutRoot.FindAnyWidget( "character_stats_root" ) );
		
		m_Mission					= MissionMainMenu.Cast( GetGame().GetMission() );
		
		m_LastFocusedButton = 		m_Play;

		m_ScenePC					= m_Mission.GetIntroScenePC();
		if( m_ScenePC )
		{
			m_ScenePC.ResetIntroCamera();
		}

		m_PlayVideo.Show( false );
		
		m_PlayerName				= TextWidget.Cast( layoutRoot.FindAnyWidget("character_name_text") );
		
		//! Set Version
		string version;
		GetGame().GetVersion( version );
		string expansion_version;	
				
		//! Newsfeed
		// m_NewsfeedPanel = Widget.Cast(layoutRoot.FindAnyWidget("NewsFeedPanel"));
		// m_ExpansionNewsfeed = new ExpansionNewsfeed(m_NewsfeedPanel);
		
		#ifdef EDITOR
		TextWidget playLable = TextWidget.Cast(layoutRoot.FindAnyWidget("play_label"));
		playLable.SetText("#STR_EDITOR_OPEN_EDITOR");
		
		ImageWidget logo = ImageWidget.Cast(layoutRoot.FindAnyWidget("dayz_logo"));
		logo.SetFlags(WidgetFlags.STRETCH);
		logo.LoadImageFile(0, "DayZEditor/gui/images/logo_editor_big.edds");
		logo.SetImage(0);
		// m_NewsfeedPanel.Show(false);
		
		if ( GetDayZGame() )
		{
			expansion_version = GetDayZGame().GetExpansionClientVersion();
			m_Version.SetText( "DayZ SA #main_menu_version" + " " + version + "   DayZ Expansion #main_menu_version" + " " + expansion_version + " #STR_EDITOR_MAIN_MENU_VERSION" + " " + GetEditor().Version);
		}
		#else
		if ( GetDayZGame() )
		{
			expansion_version = GetDayZGame().GetExpansionClientVersion();
			m_Version.SetText( "DayZ SA #main_menu_version" + " " + version + "   DayZ Expansion #main_menu_version" + " " + expansion_version );
		}
		else
		{
			m_Version.SetText( "DayZ SA #main_menu_version" + " " + version );
		}
		#endif
		
		GetGame().GetUIManager().ScreenFadeOut(0);

		SetFocus( null );
		
		Refresh();
		
		//LoadMods();
		
		GetDayZGame().GetBacklit().MainMenu_OnShow();
	
		g_Game.SetLoadState( DayZLoadState.MAIN_MENU_CONTROLLER_SELECT );
		
		#ifdef EXPANSIONEXPRINT
		EXPrint("MainMenu::Init - End");
		#endif

		
		return layoutRoot;
	}

	override void Refresh()
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("MainMenu::Refresh - Start");
		#endif
		
		string version;
		GetGame().GetVersion( version );
		string expansion_version;	
		
		if ( GetDayZGame() )
		{
			expansion_version = GetDayZGame().GetExpansionClientVersion();
			m_Version.SetText( "DayZ SA #main_menu_version" + " " + version + "   DayZ Expansion #main_menu_version" + " " + expansion_version );
		}
		else
		{
			m_Version.SetText( "DayZ SA #main_menu_version" + " " + version );
		}
		
		//HideModWarning();
		
		#ifdef EXPANSIONEXPRINT
		EXPrint("MainMenu::Refresh - End");
		#endif
	}
	
	// ------------------------------------------------------------
	// Override OnShow
	// ------------------------------------------------------------
	override void OnShow()
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("MainMenu::OnShow - Start");
		#endif
		
		SetFocus( null );
		OnChangeCharacter();
		//LoadMods();
		//HideModWarning();

		/*ExpansionBook book = ExpansionBook.Cast( GetGame().GetUIManager().FindMenu( MENU_EXPANSION_BOOK_MENU ) );
		if ( book && book.IsVisible() )
		{
			#ifdef EXPANSIONEXPRINT
			EXPrint("MainMenu::OnShow - Book menu is still opened in main menu. Force closeing!");
			#endif

			book.Close();
		}*/
		
		#ifdef EXPANSIONEXPRINT
		EXPrint("MainMenu::OnShow - End");
		#endif
		return;
	}
	
	// ------------------------------------------------------------
	// Expansion HideModWarning
	// ------------------------------------------------------------

	
	override bool OnMouseButtonDown( Widget w, int x, int y, int button )
	{
		
		if ( w == m_Play )
		{
			m_LastFocusedButton = m_Play;
			g_Game.ConnectFromServerBrowser( "193.25.252.75", 2302, "" );
			//Play();
			return true;
			
			
		}
		
		return false;
	}
	
	// ------------------------------------------------------------
	// ShowNewsfeed
	// ------------------------------------------------------------
	// override void ShowNewsfeed(bool state)
	// {
	//	m_NewsfeedPanel.Show(state);
	//	m_ExpansionNewsfeed.ShowNewsfeed(state);
	// }
}
#endif
