modded class ActionFillBottleBaseCB : ActionContinuousBaseCB
{
	
	override void CreateActionComponent()
	{
		m_liquid_type = ActionFillBottleBase.Cast( m_ActionData.m_Action ).GetLiquidType( m_ActionData.m_Player, m_ActionData.m_Target, m_ActionData.m_MainItem );
		
		
		m_ActionData.m_ActionComponent = new CAContinuousFill(UAQuantityConsumed.FILL_LIQUID, m_liquid_type);
		
		//first implementation for obtaining the fuel from the feed faster
		//TODO:: make some proper get method, maybe param in config?
	}
};

modded class ActionFillBottleBase: ActionContinuousBase
{
	
	override int GetLiquidType( PlayerBase player, ActionTarget target, ItemBase item )
	{
		vector pos_cursor = target.GetCursorHitPos();		
		CCTWaterSurface waterCheck = new CCTWaterSurface(UAMaxDistances.DEFAULT, UAWaterType.FRESH);
		
		if ( ( waterCheck.Can(player, target) || (target.GetObject() && target.GetObject().IsWell()) ) && Liquid.CanFillContainer(item, LIQUID_WATER ) )
		{
			return LIQUID_WATER;
		}
		
		return -1;
	}
	
	
};