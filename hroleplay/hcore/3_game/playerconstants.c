modded class PlayerConstants 
{
	static const float BAREFOOT_MOVEMENT_BLEED_MODIFIER = 0.05;
	static const float SHOES_MOVEMENT_DAMAGE_PER_STEP = 0.015;
	static const int CHECK_EVERY_N_STEP = 15;//will process every n-th step(for performance reasons)
	//--------------------------------------------------------
	static const int BLOOD_THRESHOLD_FATAL 					= 2500;	//fatal blood level
	
	static const float BLOOD_REGEN_RATE_PER_SEC				= 0.3; 	//base amount of blood regenerated per second
	static const float DAMAGE_ZONE_BLOOD_REGEN_MODIFIER 	= 0.7;
	
	static const float BLOOD_REGEN_MODIFIER_ENERGY_LOW		= 0.1; 	//multiplier for blood regen rate 
	static const float BLOOD_REGEN_MODIFIER_ENERGY_MID		= 0.6;
	static const float BLOOD_REGEN_MODIFIER_ENERGY_HIGH		= 1.1;
	
	static const float BLOOD_REGEN_MODIFIER_WATER_LOW		= 0.1; 	//multiplier for blood regen rate (BLOOD_REGEN_MULTIPLIER_WATER_LOW ?)
	static const float BLOOD_REGEN_MODIFIER_WATER_MID		= 0.6;
	static const float BLOOD_REGEN_MODIFIER_WATER_HIGH		= 1.1;
	
	static const float SALINE_BLOOD_REGEN_PER_SEC			= 5;	//boost for blood regen per second, independent on BLOOD_REGEN_SPEED
	
	//----------------------------------------------------------
	static const float BLEEDING_SOURCE_BLOODLOSS_PER_SEC 	= -12.5; 		// amount of blood loss per second from one bleeding source 
	static const float BLEEDING_SOURCE_FLOW_MODIFIER_MEDIUM = 0.4; 		// modifier of the bloodloss given by BLEEDING_SOURCE_BLOODLOSS_PER_SEC, multiplying these two will give the resulting bloodloss
	static const float BLEEDING_SOURCE_FLOW_MODIFIER_LOW	= 0.05; 		// modifier of the bloodloss given by BLEEDING_SOURCE_BLOODLOSS_PER_SEC, multiplying these two will give the resulting bloodloss
	static const float BLEEDING_SOURCE_FLOW_MODIFIER_HIGH	= 0.9; 		// modifier of the bloodloss given by BLEEDING_SOURCE_BLOODLOSS_PER_SEC, multiplying these two will give the resulting bloodloss
	static const float CHANCE_TO_BLEED_SLIDING_LADDER_PER_SEC = 0.15; // probability of bleeding source occuring while sliding down ladder without gloves given as percentage per second(0.5 means 50% chance bleeding source will happen every second while sliding down) 
	static const float GLOVES_DAMAGE_SLIDING_LADDER_PER_SEC = -3;// how much damage the gloves receive while sliding down the ladder (per sec)
}