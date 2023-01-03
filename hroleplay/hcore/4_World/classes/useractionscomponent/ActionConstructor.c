modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
		
		actions.Insert(ActionWashHandsRain);
		actions.Insert(ActionFillBottleRainBase);
		actions.Insert(ActionFillRainGround);
		actions.Insert(ActionCraftCassetteCase);
		actions.Insert(ActionCraftCassetteCaseCB);
		actions.Insert(ActionEmptyCardPack);
		
	}
}