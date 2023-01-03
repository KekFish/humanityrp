


modded class ActionDisinfectSelf: ActionDisinfectBase
{
	
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{

		if ( item.IsKindOf("Vodka") && item.GetLiquidType() != 2048)
		{

			return false;

		}
		if ( item.IsKindOf("Vodka") && item.GetQuantity() == 0)
		{

			return false;

		}


		return (player.IsBleeding() || (player.m_SyncedModifiers & eModifierSyncIDs.MODIFIER_SYNC_WOUND_INFECT_1) || (player.m_SyncedModifiers & eModifierSyncIDs.MODIFIER_SYNC_WOUND_INFECT_2));
	}


	
};


modded class ActionDisinfectTarget: ActionDisinfectBase
{	
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( target)
		{


			if ( item.IsKindOf("Vodka") && item.GetLiquidType() != 2048)
			{

			return false;

			}
			if ( item.IsKindOf("Vodka") && item.GetQuantity() == 0)
			{

				return false;

			}

			PlayerBase target_player = PlayerBase.Cast(target.GetObject());
			if(target_player)
				return (target_player.IsBleeding() || (player.m_SyncedModifiers & eModifierSyncIDs.MODIFIER_SYNC_WOUND_INFECT_1) || (player.m_SyncedModifiers & eModifierSyncIDs.MODIFIER_SYNC_WOUND_INFECT_2));
			
		}
		return false;
	}
};