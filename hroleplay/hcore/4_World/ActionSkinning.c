
modded class ActionSkinning: ActionContinuousBase
{	


	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		if ( targetObject != NULL )
		{
			if ( targetObject.CanBeSkinned() && !targetObject.IsAlive() )
			{
				EntityAI target_EAI;
				Class.CastTo(target_EAI,  targetObject );
				
				if (!GetGame().IsServer()) // Temporal hackfix for skinning not working in multiplayer. Waiting for DAYZ-28269 to be resolved.
					return true;
				
				if ( target_EAI.CanBeSkinnedWith(item) ) 
				{
					if (target_EAI.IsInherited(PlayerBase))
					{

						return false;

					}
					return true;
				}
			}
		}
		
		return false;
	};
};