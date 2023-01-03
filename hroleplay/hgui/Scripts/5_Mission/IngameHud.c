modded class IngameHud
{
	override void InitBadgesAndNotifiers()
	{
		super.InitBadgesAndNotifiers();
		
		// For Thirsty, Hungry, Health, Blood, Temperature icons
		for ( int j = 0; j < m_StatesWidgetNames.Count(); j++ )
		{
			string wgt_name = m_StatesWidgetNames.GetElement(j);
			
			// This if statement is to add support for mods which add custom StatesWidgets
			if (wgt_name == "Thirsty" || wgt_name == "Hungry" || wgt_name == "Health" || wgt_name == "Blood" || wgt_name == "Temperature")
			{
				ImageWidget wgt;
				Class.CastTo(wgt,  m_Notifiers.FindAnyWidget( String( "Icon" + wgt_name ) ) );
				wgt.Show( true );
				
				for ( int k = 0; k < 5; k++ )
				{
					wgt.LoadImageFile( k, "set:Nowe_GUI" + " image:icon" + wgt_name + k );
				}
			}
		}
	}
	override void DisplayTendencyNormal( int key, int tendency, int status )
	{
		ImageWidget w;
		Class.CastTo(w,  m_Notifiers.FindAnyWidget( String( "Icon" + m_StatesWidgetNames.Get( key ) ) ) );
		
		if( w )
		{
			w.SetImage( Math.Clamp( status - 1, 0, 4 ) );
			float alpha = w.GetAlpha();
			
			switch( status )
			{
				case 5:
					if ( !m_TendencyStatusCritical.Contains( w ) )
					{
						m_TendencyStatusCritical.Insert( w, ARGB( alpha * 255, 220, 0, 0 ) );	//add to blinking group
					}
					break;
				default:
					w.SetColor( ARGB( alpha * 255, 220, 220, 220 ) );	//white
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
			}
		}	
	}
}