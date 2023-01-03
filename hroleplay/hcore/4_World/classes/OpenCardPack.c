class ActionEmptyCardPack: ActionSingleUseBase
{
	void ActionEmptyCardPack()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_EMPTYSEEDSPACK;
		m_FullBody = false;
		m_Text = "#unbox";
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override bool HasTarget()
	{
		return false;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return true;
	}

	override void OnExecuteServer( ActionData action_data )
	{

		ItemBase cardpack = ItemBase.Cast( action_data.m_MainItem );

		if (cardpack)
		{

		ItemBase cover;
		
		string CardNames[107]

		CardNames[0] = "Collectable_PokemonCard_Pikachu";
        CardNames[1] = "Collectable_PokemonCard_Eevee";
		CardNames[2] = "Collectable_PokemonCard_GrassEnergy";
		CardNames[3] = "Collectable_PokemonCard_Machamp";
		CardNames[4] = "Collectable_PokemonCard_Mew";
		CardNames[5] = "Collectable_PokemonCard_Charizard";
		CardNames[6] = "Collectable_PokemonCard_Jolteon";
		CardNames[7] = "Collectable_PokemonCard_ShinyMewtwo";
		CardNames[8] = "Collectable_PokemonCard_Volcanion";
		CardNames[9] = "Collectable_PokemonCard_Abra";
		CardNames[10] = "Collectable_PokemonCard_Alakazam";
		CardNames[11] = "Collectable_PokemonCard_Arcanine";
		CardNames[12] = "Collectable_PokemonCard_Beedrill";
		CardNames[13] = "Collectable_PokemonCard_Bill";
		CardNames[14] = "Collectable_PokemonCard_Blastoise";
		CardNames[15] = "Collectable_PokemonCard_Bulbasaur";
		CardNames[16] = "Collectable_PokemonCard_Caterpie";
		CardNames[17] = "Collectable_PokemonCard_Chansey";
		CardNames[18] = "Collectable_PokemonCard_Charmander";
		CardNames[19] = "Collectable_PokemonCard_Charmeleon";
		CardNames[20] = "Collectable_PokemonCard_Clefairy";
		CardNames[21] = "Collectable_PokemonCard_ClefairlyDoll";
		CardNames[22] = "Collectable_PokemonCard_ComputerSearch";
		CardNames[23] = "Collectable_PokemonCard_Defender";
		CardNames[24] = "Collectable_PokemonCard_DevolutionSpray";
		CardNames[25] = "Collectable_PokemonCard_Dewgong";
		CardNames[26] = "Collectable_PokemonCard_Diglett";
		CardNames[27] = "Collectable_PokemonCard_Doduo";
		CardNames[28] = "Collectable_PokemonCard_DoubleColourlessEnergy";
		CardNames[29] = "Collectable_PokemonCard_Dragonair";
		CardNames[30] = "Collectable_PokemonCard_Dratini";
		CardNames[31] = "Collectable_PokemonCard_Drowzee";
		CardNames[32] = "Collectable_PokemonCard_Dugtrio";
		CardNames[33] = "Collectable_PokemonCard_Electabuzz";
		CardNames[34] = "Collectable_PokemonCard_Electrode";
		CardNames[35] = "Collectable_PokemonCard_EnergyRemoval";
		CardNames[36] = "Collectable_PokemonCard_EnergyRetrieval";
		CardNames[37] = "Collectable_PokemonCard_Farfetchd";
		CardNames[38] = "Collectable_PokemonCard_FightingEnergy";
		CardNames[39] = "Collectable_PokemonCard_FireEnergy";
		CardNames[40] = "Collectable_PokemonCard_FullHeal";
		CardNames[41] = "Collectable_PokemonCard_Gastly";
		CardNames[42] = "Collectable_PokemonCard_Growlithe";
		CardNames[43] = "Collectable_PokemonCard_GustOfWind";
		CardNames[44] = "Collectable_PokemonCard_Gyarados";
		CardNames[45] = "Collectable_PokemonCard_Haunter";
		CardNames[46] = "Collectable_PokemonCard_Hitmonchan";
		CardNames[47] = "Collectable_PokemonCard_ImposterProfessorOak";
		CardNames[48] = "Collectable_PokemonCard_ItemFinder";
		CardNames[49] = "Collectable_PokemonCard_Ivysaur";
		CardNames[50] = "Collectable_PokemonCard_Jynx";
        CardNames[51] = "Collectable_PokemonCard_Kadabra";
		CardNames[52] = "Collectable_PokemonCard_Kakuna";
		CardNames[53] = "Collectable_PokemonCard_Koffing";
		CardNames[54] = "Collectable_PokemonCard_Lass";
		CardNames[55] = "Collectable_PokemonCard_Machoke";
		CardNames[56] = "Collectable_PokemonCard_Machop";
		CardNames[57] = "Collectable_PokemonCard_Magikarp";
		CardNames[58] = "Collectable_PokemonCard_Magmar";
		CardNames[59] = "Collectable_PokemonCard_Magnemite";
		CardNames[60] = "Collectable_PokemonCard_Magneton";
		CardNames[61] = "Collectable_PokemonCard_Maintenance";
		CardNames[62] = "Collectable_PokemonCard_Metapod";
		CardNames[63] = "Collectable_PokemonCard_Mewtwo";
		CardNames[64] = "Collectable_PokemonCard_Nidoking";
		CardNames[65] = "Collectable_PokemonCard_Nidoran";
		CardNames[66] = "Collectable_PokemonCard_Nidorino";
		CardNames[67] = "Collectable_PokemonCard_Ninetales";
		CardNames[68] = "Collectable_PokemonCard_Onix";
		CardNames[69] = "Collectable_PokemonCard_Pidgeotto";
		CardNames[70] = "Collectable_PokemonCard_Pidgey";
		CardNames[71] = "Collectable_PokemonCard_PikachuBS";
		CardNames[72] = "Collectable_PokemonCard_Pluspower";
		CardNames[73] = "Collectable_PokemonCard_Pokedex";
		CardNames[74] = "Collectable_PokemonCard_Breeder";
		CardNames[75] = "Collectable_PokemonCard_Center";
		CardNames[76] = "Collectable_PokemonCard_Flute";
		CardNames[77] = "Collectable_PokemonCard_Trader";
		CardNames[78] = "Collectable_PokemonCard_Poliwag";
		CardNames[79] = "Collectable_PokemonCard_Poliwhirl";
		CardNames[80] = "Collectable_PokemonCard_Poliwrath";
		CardNames[81] = "Collectable_PokemonCard_Ponyta";
		CardNames[82] = "Collectable_PokemonCard_Porygon";
		CardNames[83] = "Collectable_PokemonCard_Potion";
		CardNames[84] = "Collectable_PokemonCard_ProfessorOakBase";
		CardNames[85] = "Collectable_PokemonCard_PsychicEnergy";
		CardNames[86] = "Collectable_PokemonCard_Raichu";
		CardNames[87] = "Collectable_PokemonCard_Raticate";
		CardNames[88] = "Collectable_PokemonCard_Rattata";
		CardNames[89] = "Collectable_PokemonCard_Revive";
		CardNames[90] = "Collectable_PokemonCard_Sandshrew";
		CardNames[91] = "Collectable_PokemonCard_ScoopUp";
		CardNames[92] = "Collectable_PokemonCard_Seel";
		CardNames[93] = "Collectable_PokemonCard_Squirtle";
		CardNames[94] = "Collectable_PokemonCard_Starmie";
		CardNames[95] = "Collectable_PokemonCard_Staryu";
		CardNames[96] = "Collectable_PokemonCard_SuperEnergy";
		CardNames[97] = "Collectable_PokemonCard_SuperPotion";
		CardNames[98] = "Collectable_PokemonCard_SwitchBase";
		CardNames[99] = "Collectable_PokemonCard_Tangela";
		CardNames[100] = "Collectable_PokemonCard_Venusaur";
		CardNames[101] = "Collectable_PokemonCard_Voltorb";
		CardNames[102] = "Collectable_PokemonCard_Vulpix";
		CardNames[103] = "Collectable_PokemonCard_Wartortle";
		CardNames[104] = "Collectable_PokemonCard_WaterEnergy";
		CardNames[105] = "Collectable_PokemonCard_Weedle";
		CardNames[106] = "Collectable_PokemonCard_Zapdos";

		int Card1 = Math.RandomIntInclusive(0, 106);
		int Card2 = Math.RandomIntInclusive(0, 106);
        int Card3 = Math.RandomIntInclusive(0, 106);


		cover = ItemBase.Cast( GetGame().CreateObjectEx(CardNames[Card1], action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE) );
		cover = ItemBase.Cast( GetGame().CreateObjectEx(CardNames[Card2], action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE) );
		cover = ItemBase.Cast( GetGame().CreateObjectEx(CardNames[Card3], action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE) );

		cardpack.SetHealth(0);

		}
	}
	
	override void OnEndServer( ActionData action_data )
	{

	}
};












class CardPack extends ItemBase
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEmptyCardPack);
	}
}