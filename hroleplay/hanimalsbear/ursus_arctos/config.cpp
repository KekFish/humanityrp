class CfgPatches
{
	class DZ_Animals_ursus_arctos
	{
		units[] = {"Animal_UrsusArctos_HumanityRP"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals","DZ_Data_Bliss","DZ_AI_Bliss","DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_UrsusArctos_HumanityRP: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 2;
		model = "\DZ\animals_bliss\ursus_arctos\ursus_arctos.p3d";
		armor = 1.2;
		displayName = "$STR_CfgVehicles_Animal_UrsusArctos0";
		descriptionShort = "$STR_CfgVehicles_Animal_UrsusArctos1";
		aiAgentTemplate = "Predator_UrsusArctos";
		injuryLevels[] = {1.0,0.5,0.2,0.0};
		DamageSphereAmmos[] = {"MeleeBear","MeleeBearShock","MeleeWolf"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 5000;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					canBleed = 0;
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 5000;
					};
					class Shock: Health
					{
						hitpoints = 5000;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.51;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.25;
							};
						};
						class FragGrenade: Melee{};
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 1;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
						class Projectile: Projectile
						{
							class Health: Health
							{
								damage = 0.25;
							};
						};
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 500;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 800;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 400;
						transferToGlobalCoef = 0.0;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "BearPelt";
				count = 1;
				itemZones[] = {"Zone_Pelvis","Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "BearSteakMeat";
				count = 8;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {};
				quantityMinMaxCoef[] = {0.33,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 3;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.2,0.4};
				transferToolDamageCoef = 1;
			};
			class ObtainedHead
			{
				item = "BearHead";
				count = 1;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedBlood
			{
				item = "BloodDecal2";
				count = 1;
			};
			class ObtainedBlood1
			{
				item = "BloodDecal3";
				count = 1;
			};
			class ObtainedBlood2
			{
				item = "BloodDecal4";
				count = 1;
			};
			class ObtainedBlood3
			{
				item = "BloodDecal1";
				count = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "DZ\animals_bliss\ursus_arctos\data\ursus_arctos_skeleton.xob";
			graphname = "DZ\animals_bliss\animations\!graph_files\bear\Bear_Graph.agr";
			defaultinstance = "DZ\animals_bliss\animations\!graph_files\bear\BearSkeleton_AnimInstance.asi";
			startnode = "MasterBear_SM";
			skeletonName = "ursus_arctos_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 8;
				};
				class Bodyfall
				{
					soundLookupTable = "PawBigBodyfall_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "PawBigSettle_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "PawBigRest2standA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "PawBigRest2standB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "PawBigStand2restA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "PawBigStand2restB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "PawBigStand2restC_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 17;
				};
				class Jump
				{
					soundLookupTable = "PawBigJump_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 18;
				};
				class Impact
				{
					soundLookupTable = "PawBigImpact_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
				class BearAttack
				{
					soundSet = "BearAttack_SoundSet";
					noise = "WolfRoarNoise";
					id = 21;
				};
				class BearBreath
				{
					soundSet = "BearBreath_SoundSet";
					noise = "WolfRoarNoise";
					id = 1;
				};
				class BearGrowl
				{
					soundSet = "BearGrowl_SoundSet";
					noise = "WolfRoarNoise";
					id = 2;
				};
				class BearMumble
				{
					soundSet = "BearMumble_SoundSet";
					noise = "WolfRoarNoise";
					id = 3;
				};
				class BearRoar
				{
					soundSet = "BearRoar_SoundSet";
					noise = "WolfRoarNoise";
					id = 4;
				};
				class BearRoarShort
				{
					soundSet = "BearRoarShort_SoundSet";
					noise = "WolfRoarNoise";
					id = 12;
				};
				class BearSigh
				{
					soundSet = "BearSigh_SoundSet";
					noise = "WolfRoarNoise";
					id = 5;
				};
				class BearSighLong
				{
					soundSet = "BearSighLong_SoundSet";
					noise = "WolfRoarNoise";
					id = 6;
				};
				class BearSighShort
				{
					soundSet = "BearSighShort_SoundSet";
					noise = "WolfRoarNoise";
					id = 7;
				};
				class BearSnarl
				{
					soundSet = "BearSnarl_SoundSet";
					noise = "WolfRoarNoise";
					id = 8;
				};
				class BearSnarlLong
				{
					soundSet = "BearSnarlLong_SoundSet";
					noise = "WolfRoarNoise";
					id = 9;
				};
				class BearSnort
				{
					soundSet = "BearSnort_SoundSet";
					noise = "WolfRoarNoise";
					id = 10;
				};
				class BearGrowl_1
				{
					soundSet = "BearGrowl_1_SoundSet";
					noise = "WolfRoarNoise";
					id = 11;
				};
				class BearGrowl_3
				{
					soundSet = "BearGrowl_3_SoundSet";
					noise = "WolfRoarNoise";
					id = 13;
				};
				class BearGrowl_4
				{
					soundSet = "BearGrowl_4_SoundSet";
					noise = "WolfRoarNoise";
					id = 14;
				};
				class BearGrowl_5
				{
					soundSet = "BearGrowl_5_SoundSet";
					noise = "WolfRoarNoise";
					id = 15;
				};
				class BearGrowl_6
				{
					soundSet = "BearGrowl_6_SoundSet";
					noise = "WolfRoarNoise";
					id = 16;
				};
				class BearGrowl_7
				{
					soundSet = "BearGrowl_7_SoundSet";
					noise = "WolfRoarNoise";
					id = 17;
				};
				class BearGrowl_8
				{
					soundSet = "BearGrowl_8_SoundSet";
					noise = "WolfRoarNoise";
					id = 18;
				};
				class BearGrowl_9
				{
					soundSet = "BearGrowl_9_SoundSet";
					noise = "WolfRoarNoise";
					id = 19;
				};
				class BearGrowl_10
				{
					soundSet = "BearGrowl_10_SoundSet";
					noise = "WolfRoarNoise";
					id = 20;
				};
				class BearGrowl_12
				{
					soundSet = "BearGrowl_12_SoundSet";
					noise = "WolfRoarNoise";
					id = 22;
				};
				class BearGrowl_13
				{
					soundSet = "BearGrowl_13_SoundSet";
					noise = "WolfRoarNoise";
					id = 23;
				};
				class BearRoar_1
				{
					soundSet = "BearRoar_1_SoundSet";
					noise = "WolfRoarNoise";
					id = 24;
				};
				class BearRoar_2
				{
					soundSet = "BearRoar_2_SoundSet";
					noise = "WolfRoarNoise";
					id = 25;
				};
				class BearRoar_3
				{
					soundSet = "BearRoar_3_SoundSet";
					noise = "WolfRoarNoise";
					id = 26;
				};
				class BearRoar_5
				{
					soundSet = "BearRoar_5_SoundSet";
					noise = "WolfRoarNoise";
					id = 27;
				};
				class BearRoar_6
				{
					soundSet = "BearRoar_6_SoundSet";
					noise = "WolfRoarNoise";
					id = 28;
				};
				class BearRoar_7
				{
					soundSet = "BearRoar_7_SoundSet";
					noise = "WolfRoarNoise";
					id = 29;
				};
				class BearSighLong_0
				{
					soundSet = "BearSighLong_0_SoundSet";
					noise = "WolfRoarNoise";
					id = 30;
				};
				class BearSighLong_1
				{
					soundSet = "BearSighLong_1_SoundSet";
					noise = "WolfRoarNoise";
					id = 31;
				};
				class BearSighLong_2
				{
					soundSet = "BearSighLong_2_SoundSet";
					noise = "WolfRoarNoise";
					id = 32;
				};
				class BearSnarlLong_0
				{
					soundSet = "BearSnarlLong_0_SoundSet";
					noise = "WolfRoarNoise";
					id = 33;
				};
				class BearSnarlLong_1
				{
					soundSet = "BearSnarlLong_1_SoundSet";
					noise = "WolfRoarNoise";
					id = 34;
				};
				class BearSnarlLong_2
				{
					soundSet = "BearSnarlLong_2_SoundSet";
					noise = "WolfRoarNoise";
					id = 35;
				};
			};
			class Damages
			{
				class BearBiteDamage
				{
					damage = "BearBiteDamage";
					id = 1;
				};
				class BearLeftPawDamage
				{
					damage = "BearLeftPawDamage";
					id = 2;
				};
				class BearRightPawDamage
				{
					damage = "BearRightPawDamage";
					id = 3;
				};
				class BearBiteDamageIntimidate
				{
					damage = "BearBiteDamageIntimidate";
					id = 11;
				};
				class BearLeftPawDamageIntimidate
				{
					damage = "BearLeftPawDamageIntimidate";
					id = 12;
				};
				class BearRightPawDamageIntimidate
				{
					damage = "BearRightPawDamageIntimidate";
					id = 13;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0.0,0.24,0.55,1.72,3.5,8.0};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
	};
};
