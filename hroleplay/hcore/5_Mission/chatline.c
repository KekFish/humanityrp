modded class ExpansionChatLineBase
{

	private const int 	 ME_TEXT_COLOUR = ARGB(255, 167, 36, 207);
	private const int 	 DO_TEXT_COLOUR = ARGB(255, 48, 138, 59);
	
	





	void Set(ExpansionChatMessage message)	// Param 1 --> Channel, Param 2 --> sender name, Param 3 --> message, Param 4 ?? 
	{
		#ifdef EXPANSIONTRACE
			auto trace = EXTrace.Start(ExpansionTracing.CHAT);
		#endif

		MissionGameplay mission;
		if (!Class.CastTo(mission, GetGame().GetMission()))
			return;
		
		if (!message)
		{
			GetLayoutRoot().Show(false);
			m_ChatLineController.SenderName = "";
			m_ChatLineController.NotifyPropertyChanged("SenderName");
			m_ChatLineController.Message = "";
			m_ChatLineController.NotifyPropertyChanged("Message");
			return;
		}
		
		GetLayoutRoot().Show(true);
		
		switch (message.Channel)
		{
		case CCSystem:
			SenderSetColour(GetExpansionSettings().GetChat().ChatColors.Get("SystemChatColor"));
			SetTextColor(GetExpansionSettings().GetChat().ChatColors.Get("SystemChatColor"));
			m_ChatLineController.SenderName = " Game: ";
			m_ChatLineController.Message = message.Text;
			m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
			break;
		case CCAdmin:
		case CCBattlEye:
			SenderSetColour(GetExpansionSettings().GetChat().ChatColors.Get("AdminChatColor"));	
			SetTextColor(GetExpansionSettings().GetChat().ChatColors.Get("AdminChatColor"));
			SetSenderName(message, " Admin: ");
			m_ChatLineController.Message = message.Text;
			m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
			break;
		case CCTransmitter:
			SenderSetColour(GetExpansionSettings().GetChat().ChatColors.Get("TransmitterChatColor"));	
			SetTextColor(GetExpansionSettings().GetChat().ChatColors.Get("TransmitterChatColor"));
			m_ChatLineController.SenderName = " PAS: ";
			m_ChatLineController.Message = message.Text;
		m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
			break;
		case ExpansionChatChannels.CCTransport:
			SenderSetColour(GetExpansionSettings().GetChat().ChatColors.Get("TransportChatColor"));	
			SetTextColor(GetExpansionSettings().GetChat().ChatColors.Get("TransportChatColor"));
			SetSenderName(message);
			m_ChatLineController.Message = message.Text;
		m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
			break;
		case ExpansionChatChannels.CCGlobal:
			SenderSetColour(GetExpansionSettings().GetChat().ChatColors.Get("GlobalChatColor"));	
			SetTextColor(GetExpansionSettings().GetChat().ChatColors.Get("GlobalChatColor"));
			SetSenderName(message);
			m_ChatLineController.Message = message.Text;
		m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
			break;
		#ifdef EXPANSIONMODGROUPS
		case ExpansionChatChannels.CCTeam:
			SenderSetColour(GetExpansionSettings().GetChat().ChatColors.Get("PartyChatColor"));	
			SetTextColor(GetExpansionSettings().GetChat().ChatColors.Get("PartyChatColor"));
			SetSenderName(message);
			m_ChatLineController.Message = message.Text;
			m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
			break;
		#endif
		default:
			SenderSetColour(GetExpansionSettings().GetChat().ChatColors.Get("DirectChatColor"));	
			SetTextColor(GetExpansionSettings().GetChat().ChatColors.Get("DirectChatColor"));
			SetSenderName(message);
			if (message.Text[0] == "!")
			{

				if(message.Text[1] == "d" && message.Text[2] == "o" && message.Text[3] == " ")
					{
						m_ChatLineController.Message = "**DO** " + message.Text.Substring( 4, message.Text.Length());
						SenderSetColour(DO_TEXT_COLOUR);	
						SetTextColor(DO_TEXT_COLOUR);
						m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
					
					}
				else if (message.Text[1] == "D" && message.Text[2] == "O" && message.Text[3] == " ")
					{
						
						m_ChatLineController.Message = "**DO** " + message.Text.Substring( 4, message.Text.Length());
						SenderSetColour(DO_TEXT_COLOUR);	
						SetTextColor(DO_TEXT_COLOUR);
						m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
					

					}
				else if (message.Text[1] == "d" && message.Text[2] == "O" && message.Text[3] == " ")
					{
						
						m_ChatLineController.Message = "**DO** " + message.Text.Substring( 4, message.Text.Length());
						SenderSetColour(DO_TEXT_COLOUR);	
						SetTextColor(DO_TEXT_COLOUR);
						m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
					

					}
				else if (message.Text[1] == "D" && message.Text[2] == "o" && message.Text[3] == " ")
					{
						
						m_ChatLineController.Message = "**DO** " + message.Text.Substring( 4, message.Text.Length());
						SenderSetColour(DO_TEXT_COLOUR);	
						SetTextColor(DO_TEXT_COLOUR);
						m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
					

					}
				else if (message.Text[1] == "m" && message.Text[2] == "e" && message.Text[3] == " ")
					{
						
						m_ChatLineController.Message = "**ME** " + message.Text.Substring( 4, message.Text.Length());
						SenderSetColour(ME_TEXT_COLOUR);	
						SetTextColor(ME_TEXT_COLOUR);
						m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
					

					}
					else if (message.Text[1] == "M" && message.Text[2] == "e" && message.Text[3] == " ")
					{
						
						m_ChatLineController.Message = "**ME** " + message.Text.Substring( 4, message.Text.Length());
						SenderSetColour(ME_TEXT_COLOUR);	
						SetTextColor(ME_TEXT_COLOUR);
						m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
					

					}
					else if (message.Text[1] == "m" && message.Text[2] == "E" && message.Text[3] == " ")
					{
						
						m_ChatLineController.Message = "**ME** " + message.Text.Substring( 4, message.Text.Length());
						SenderSetColour(ME_TEXT_COLOUR);	
						SetTextColor(ME_TEXT_COLOUR);
						m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
					

					}
					else if (message.Text[1] == "M" && message.Text[2] == "E" && message.Text[3] == " ")
					{
						
						m_ChatLineController.Message = "**ME** " + message.Text.Substring( 4, message.Text.Length());
						SenderSetColour(ME_TEXT_COLOUR);	
						SetTextColor(ME_TEXT_COLOUR);
						m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
					

					}

			}
			else
			{
			m_ChatLineController.Message = "**OOC** " + message.Text;
			m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});
			break;
			}
		}
		
		//BreakWords(message);
		// m_ChatLineController.Message = message.Text;
		// m_ChatLineController.NotifyPropertiesChanged({"SenderName", "Message"});

		if (!IsVisible())
		{
			FadeInChatLine();
		}

		//! Adjust message size so it actually fits and doesn't get cut off
		float root_w, root_h;
		GetLayoutRoot().GetScreenSize(root_w, root_h);
		float sender_w, sender_h;
		SenderName.GetScreenSize(sender_w, sender_h);
		Message.SetSize(1.0 - sender_w / root_w, 1.0);
	}
	
}

