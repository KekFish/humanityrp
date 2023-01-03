modded class Plant_Pepper : PlantBase
{
	void Plant_Pepper()
	{
		m_FullMaturityTime = 2250*18;
	}
};
modded class Plant_Potato : PlantBase
{
	void Plant_Potato()
	{
		m_FullMaturityTime = 2850*18;
	}
};
modded class Plant_Pumpkin : PlantBase
{
	void Plant_Pumpkin()
	{
		m_FullMaturityTime = 2850*18;
	}
};
modded class Plant_Tomato : PlantBase
{
	void Plant_Tomato()
	{
		m_FullMaturityTime = 1650*18;
	}
};
modded class Plant_Zucchini : PlantBase
{
	void Plant_Zucchini()
	{
		m_FullMaturityTime = 1350*18;
	}
};
modded class PlantBase extends ItemBase
{


override void Init( GardenBase garden_base, float fertility, float harvesting_efficiency, float water )
	{
		m_GardenBase = garden_base;
		
		m_FullMaturityTime += Math.RandomInt(-60,180);
		float divided = /*(float) ((60 * 5) + Math.RandomInt(0, 60 * 1)) / fertility;*/ m_FullMaturityTime;
		
		//divided = (float)((60 * 30) + Math.RandomInt(0, 60 * 30)) * fertility;
		m_SpoilAfterFullMaturityTime = 604800; //divided;

		divided = (float)((float)m_FullMaturityTime / ((float)m_GrowthStagesCount - 2.0));
		m_StateChangeTime = divided;

		float count = m_CropsCount * fertility * harvesting_efficiency;
		m_CropsCount = (int)Math.Ceil( count );

		m_PlantMaterialMultiplier = 0.1 * harvesting_efficiency;
		
		float rain_intensity = GetGame().GetWeather().GetRain().GetActual();
		if ( rain_intensity > 0.0 )
		{
			CheckWater();
		}
		else
		{
			CheckWater();
			
			if ( NeedsWater() )
			{
				SetPlantState(STATE_DRY);
				
				if (GetGame().IsServer())
				{
					m_DeleteDryPlantTimer = new Timer( CALL_CATEGORY_SYSTEM );
					m_DeleteDryPlantTimer.Run( m_DeleteDryPlantTime, this, "DeleteDryPlantTick", NULL, false );
				}
			}
		}
	}


};