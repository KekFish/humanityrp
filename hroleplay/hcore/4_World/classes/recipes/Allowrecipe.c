modded class PluginRecipesManager 
{
	override void RegisterRecipies()
	{	
		super.RegisterRecipies();
		
		RegisterRecipe(new CraftBarrel);
		RegisterRecipe(new CraftBletki);
		RegisterRecipe(new CraftNailBox);
		RegisterRecipe(new CraftNail);
		RegisterRecipe(new CraftVodka);
		RegisterRecipe(new CraftMetalPlate);
		RegisterRecipe(new CraftLeatherSewing);
		RegisterRecipe(new CraftSewingKit)
	}
}