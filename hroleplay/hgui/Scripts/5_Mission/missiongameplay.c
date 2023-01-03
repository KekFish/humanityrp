modded class MissionGameplay extends MissionBase
{
	Widget 					s_logowidget; 
	
	ImageWidget 			s_logo;
	
	private int ml_lTime;
	string activatelogo = "true";

	
	override void OnMissionStart()
	{
		super.OnMissionStart();
		
		if(LogoActivated())
		{	
			s_logowidget = GetGame().GetWorkspace().CreateWidgets("hroleplay/hgui/layouts/hroleplay_watermark.layout");
			s_logo = ImageWidget.Cast(s_logowidget.FindAnyWidget("logo"));
			s_logowidget.Show(false);
			ml_lTime = 0;
			
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(DelayLogoStartup, 1 * 1000, true);
			
		}
	}
	
	void DelayLogoStartup()
	{
		if(ml_lTime > 15)
		{
			s_logo.LoadImageFile(0, "set:logo image:logo");
			s_logowidget.Show(true);
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(this.DelayLogoStartup);
		}else{
			ml_lTime++;
		}
	}
	
	bool LogoActivated()
	{
		return true;
	}


	override void OnInit()
	{


		if ( !m_HudRootWidget )
		{
			m_HudRootWidget			= GetGame().GetWorkspace().CreateWidgets("hroleplay/hgui/new_gui/day_z_hud.layout");
			
			m_HudRootWidget.Show(false);
			
			m_Chat.Init(m_HudRootWidget.FindAnyWidget("ChatFrameWidget"));
			
			m_ActionMenu.Init( m_HudRootWidget.FindAnyWidget("ActionsPanel"), TextWidget.Cast( m_HudRootWidget.FindAnyWidget("DefaultActionWidget") ) );
			
			m_Hud.Init( m_HudRootWidget.FindAnyWidget("HudPanel") );
			
			// von enabled icon
			m_MicrophoneIcon = ImageWidget.Cast( m_HudRootWidget.FindAnyWidget("mic") );
			m_MicrophoneIcon.Show(false);
			
			// von voice level
			m_VoiceLevels = m_HudRootWidget.FindAnyWidget("VoiceLevelsPanel");
			m_VoiceLevelsWidgets = new map<int, ImageWidget>; // [key] voice level
			m_VoiceLevelTimers = new map<int,ref WidgetFadeTimer>; // [key] voice level
		
			if( m_VoiceLevels )
			{
				m_VoiceLevelsWidgets.Set(VoiceLevelWhisper, ImageWidget.Cast( m_VoiceLevels.FindAnyWidget("Whisper") ));
				m_VoiceLevelsWidgets.Set(VoiceLevelTalk, ImageWidget.Cast( m_VoiceLevels.FindAnyWidget("Talk") ));
				m_VoiceLevelsWidgets.Set(VoiceLevelShout, ImageWidget.Cast( m_VoiceLevels.FindAnyWidget("Shout") ));
				
				m_VoiceLevelTimers.Set(VoiceLevelWhisper, new WidgetFadeTimer);
				m_VoiceLevelTimers.Set(VoiceLevelTalk, new WidgetFadeTimer);
				m_VoiceLevelTimers.Set(VoiceLevelShout, new WidgetFadeTimer);
			}
			
			HideVoiceLevelWidgets();
			
			// chat channel
			m_ChatChannelArea		= m_HudRootWidget.FindAnyWidget("ChatChannelPanel");
			m_ChatChannelText		= TextWidget.Cast( m_HudRootWidget.FindAnyWidget("ChatChannelText") );
		}

		super.OnInit();

	}
}