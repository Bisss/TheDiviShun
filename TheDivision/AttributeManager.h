#pragma once

#include "Utils.h"

class AttributeManager
{
public:
	struct Indexer
	{
		uintptr_t GetOffset() { return index << 6; }
		std::string GetName() { return ((flags & 0x1000000) != 0) ? namePtr : (char*)&namePtr; }

		char unknown[0x50];
		unsigned int index; // 0x50
		unsigned int unk; // 0x54
						  // can sometimes be a char pointer, or actually just be an array of characters
		char* namePtr; // 0x58
		unsigned int restOfName;
		unsigned int flags; // 0x64;
	};

	enum Enum
	{
		AimChangeAccuracyRecoveryTimeMSFinal = 0,
		AimChangeModifierFinal = 1,
		AimChangeSensitivityFinal = 2,
		AimSpreadMaxFinal = 3,
		AimSpreadMinFinal = 4,
		AirSupplyFinal = 5,
		AirSupplyDepletionRateFinal = 6,
		AirSupplyRegenRateFinal = 7,
		AirSupplyRegenTickIntervalFinal = 8,
		AirSupplyDepletionTickIntervalFinal = 9,
		AirSupplyDamageRateFinal = 10,
		AirSupplyDamageIntervalFinal = 11,
		FallDamageModFinal = 12,
		FallDamageLethalHeightFinal = 13,
		FallDamageStartHeightFinal = 14,
		BleedingOutHealthFinal = 15,
		BleedingOutHealthDegenRateFinal = 16,
		BleedingOutHealthDegenTickIntervalFinal = 17,
		BleedingOutDieQuickMultiplierFinal = 18,
		BleedingOutReviveHealthPercentageFinal = 19,
		ClipSizeFinal = 20,
		CoverAimSpreadMaxFinal = 21,
		CoverAimSpreadMinFinal = 22,
		CoverSpreadMaxFinal = 23,
		CoverSpreadMinFinal = 24,
		CriticalHitChanceResilienceFinal = 25,
		DamageDoneToSuppressedTargetModFinal = 26,
		DamageDoneToElitesModFinal = 27,
		DamageMultiplierArmsFinal = 28,
		DamageMultiplierBodyFinal = 29,
		DamageMultiplierHeadFinal = 30,
		DamageMultiplierLegsFinal = 31,
		DamageTakenModFinal = 32,
		DamageTakenFromElitesModFinal = 33,
		DownedDamageMaxFinal = 34,
		DownedDamageMaxPVPFinal = 35,
		DownedDamageModFinal = 36,
		DownedDamageModPVPFinal = 37,
		DownedHealthFinal = 38,
		DownedHealthDegenRateFinal = 39,
		DownedHealthDegenTickIntervalFinal = 40,
		DownedInARowMaxFinal = 41,
		DownedInARowMaxTimePeriodFinal = 42,
		DownedDieQuickMultiplierFinal = 43,
		DownedReviveHealthPercentageFinal = 44,
		TalentDownedAssistSpeedModFinal = 45,
		TalentSecondChanceHealModFinal = 46,
		TalentSecondChanceCooldownFinal = 47,
		HealthFinal = 48,
		HealthRegenDelayFinal = 49,
		HealthRegenExitCombatDelayFinal = 50,
		HealthRegenRateFinal = 51,
		HealthRegenTickIntervalFinal = 52,
		HealthSegmentsFinal = 53,
		HorizontalRecoilBorderLeftFinal = 54,
		HorizontalRecoilBorderRightFinal = 55,
		HorizontalRecoilLeftFinal = 56,
		HorizontalRecoilRecoveryTimeMSFinal = 57,
		HorizontalRecoilRightFinal = 58,
		HorizontalRecoilTimeMSFinal = 59,
		IncomingHealingModFinal = 60,
		OutgoingHealingModFinal = 61,
		DarkZoneInventoryFinal = 62,
		DefaultInventoryFinal = 63,
		ResourceInventoryFinal = 64,
		VanityInventoryFinal = 65,
		BackupSpaceInventoryFinal = 66,
		StashInventoryFinal = 67,
		DarkZoneStashInventoryFinal = 68,
		MailboxInventoryFinal = 69,
		LifeOnKillFinal = 70,
		LootChanceModFinal = 71,
		LootedAmmoModFinal = 72,
		LootedGoldModFinal = 73,
		LootMagicFindFinal = 74,
		MeleeDamagePvPFinal = 75,
		MeleeDamageFinal = 76,
		MeleeDamageMitigationPercentageFinal = 77,
		MovementSpeedModFinal = 78,
		PitchRecoveryPerSecondFinal = 79,
		PitchRecoveryPercentFinal = 80,
		PulseCriticalHitChanceFinal = 81,
		PulseCriticalHitDamageFinal = 82,
		PVPDamageModifierFinal = 83,
		RPMFinal = 84,
		RangeLongFinal = 85,
		RangeMaxFinal = 86,
		RangeOptimalFinal = 87,
		RecoilBaseFinal = 88,
		RecoilClimbTimeMSFinal = 89,
		RecoilIncreasePerBulletFinal = 90,
		RecoilMaxFinal = 91,
		RecoilMinFinal = 92,
		RecoilRecoveryPerSecondFinal = 93,
		RecoilRecoveryTimeMSFinal = 94,
		RecoilResetTimeMSFinal = 95,
		ReloadTimeMSFinal = 96,
		EmptyClipFirstRoundReloadTimeMSFinal = 97,
		InitialShellReloadTimeMSFinal = 98,
		RespawnTimeMSFinal = 99,
		RespawnMinimumTimeFinal = 100,
		ReviveDurationMSFinal = 101,
		ReviveFromDeadDurationMSFinal = 102,
		ReviveImmunityDurationFinal = 103,
		ReviveImmunityRangeFinal = 104,
		ReviveServerNotifyTickIntervalMSFinal = 105,
		SafetyBeltCooldownFinal = 106,
		SkillCriticalHitChanceFinal = 107,
		SkillCriticalHitDamageModFinal = 108,
		SkillHasteModFinal = 109,
		SpreadIncreaseSpeedFinal = 110,
		SpreadIncreaseTimeMSFinal = 111,
		SpreadMaxFinal = 112,
		SpreadMinFinal = 113,
		SpreadMovementModFinal = 114,
		SpreadReductionSpeedFinal = 115,
		StaggerDamageModifierFinal = 116,
		StaminaConsumptionRateFinal = 117,
		StaminaConsumptionTickIntervalFinal = 118,
		StaminaDamageTakenModFinal = 119,
		StaminaFinal = 120,
		StaminaRegenDelayFinal = 121,
		StaminaRegenRateFinal = 122,
		StaminaRegenTickIntervalFinal = 123,
		SuppressionFinal = 124,
		TargetOutOfCoverDamageModFinal = 125,
		ThrowRangeModFinal = 126,
		TimeToMaxAccuracyMSFinal = 127,
		TimeToMinAccuracyMSFinal = 128,
		WeaponCriticalHitChanceFinal = 129,
		WeaponCriticalHitDamageModFinal = 130,
		WeaponCriticalHitChanceVsOOCFinal = 131,
		WeaponDrawSpeedModFinal = 132,
		WeaponHolsterSpeedModFinal = 133,
		XPModFinal = 134,
		YawRecoveryPerSecondFinal = 135,
		YawRecoveryPercentFinal = 136,
		ZoneDiscoveryXPFinal = 137,
		PhysicalDamageMinFinal = 138,
		PhysicalDamageMaxFinal = 139,
		PhysicalDamageVariationFinal = 140,
		BlastDamageMinFinal = 141,
		BlastDamageMaxFinal = 142,
		BlastDamageVariationFinal = 143,
		BleedDamageMinFinal = 144,
		BleedDamageMaxFinal = 145,
		BleedDamageVariationFinal = 146,
		BurnDamageMinFinal = 147,
		BurnDamageMaxFinal = 148,
		BurnDamageVariationFinal = 149,
		ToxinDamageMinFinal = 150,
		ToxinDamageMaxFinal = 151,
		ToxinDamageVariationFinal = 152,
		ElectricDamageMinFinal = 153,
		ElectricDamageMaxFinal = 154,
		ElectricDamageVariationFinal = 155,
		NeutralDamageMinFinal = 156,
		NeutralDamageMaxFinal = 157,
		NeutralDamageVariationFinal = 158,
		EMPDamageMinFinal = 159,
		EMPDamageMaxFinal = 160,
		EMPDamageVariationFinal = 161,
		StaminaDamageMinFinal = 162,
		StaminaDamageMaxFinal = 163,
		StaminaDamageVariationFinal = 164,
		TestDamageScaling = 165,
		PrimaryOffensiveCalc = 166,
		WeaponDamageModBonus = 167,
		WeaponTypeDamageModCalc = 168,
		NPCArmorFinal = 169,
		NPCArmorBypassRatioHeadFinal = 170,
		NPCArmorBypassRatioBodyFinal = 171,
		NPCArmorDamageModifierFinal = 172,
		NPCArmorBypassModifierFinal = 173,
		PhysicalDamageMitigationPercentageFinal = 174,
		BlastDamageMitigationPercentageFinal = 175,
		BleedDamageMitigationPercentageFinal = 176,
		BurnDamageMitigationPercentageFinal = 177,
		ToxinDamageMitigationPercentageFinal = 178,
		ElectricDamageMitigationPercentageFinal = 179,
		NeutralDamageMitigationPercentageFinal = 180,
		EMPDamageMitigationPercentageFinal = 181,
		StaminaDamageMitigationPercentageFinal = 182,
		SelfSourceDamageMitigationPercentageFinal = 183,
		FriendlySourceDamageMitigationPercentageFinal = 184,
		NPCSourceDamageMitigationPercentageFinal = 185,
		OpponentSourceDamageMitigationPercentageFinal = 186,
		NullSourceDamageMitigationPercentageFinal = 187,
		WeaponMethodDamageMitigationPercentageFinal = 188,
		TrapMethodDamageMitigationPercentageFinal = 189,
		SkillMethodDamageMitigationPercentageFinal = 190,
		StatusEffectMethodDamageMitigationPercentageFinal = 191,
		MeleeMethodDamageMitigationPercentageFinal = 192,
		EnvironmentMethodDamageMitigationPercentageFinal = 193,
		BleedingStatusResistancePercentageFinal = 194,
		BlindDeafStatusResistancePercentageFinal = 195,
		BurningStatusResistancePercentageFinal = 196,
		ConfusedStatusResistancePercentageFinal = 197,
		DisruptedStatusResistancePercentageFinal = 198,
		ShockedStatusResistancePercentageFinal = 199,
		StaggeredStatusResistancePercentageFinal = 200,
		SuppressedStatusResistancePercentageFinal = 201,
		AimSwayMinHorizontalFinal = 202,
		AimSwayMaxHorizontalFinal = 203,
		AimSwayMinVerticalFinal = 204,
		AimSwayMaxVerticalFinal = 205,
		AimSwaySpeedModifierFinal = 206,
		VisualDetectionModFinal = 207,
		VisualStealthModFinal = 208,
		AudialDetectionModFinal = 209,
		AudialStealthModFinal = 210,
		DarkZoneItemsToDropFinal = 211,
		DarkZoneItemsToDropRogueFinal = 212,
		DarkZoneConvertXPModFinal = 213,
		DarkZoneXPModFinal = 214,
		DarkZoneXPLossModFinal = 215,
		DarkZoneXPLossRogueModFinal = 216,
		DarkZoneXPLossFinal = 217,
		DarkZoneXPLossRogueFinal = 218,
		ThreatPerBulletFinal = 219,
		ThreatTotalGeneratedModFinal = 220,
		SuppressionTriggerScoreFinal = 221,
		SuppressionDefenseModifierFinal = 222,
		SuppressionDepletionRateFinal = 223,
		SuppressionDurationFinal = 224,
		SuppressionBufferScoreFinal = 225,
		SuppressionBufferResetTimeFinal = 226,
		StaggerGaugeFinal = 227,
		StaggerAnimationDurationModFinal = 228,
		ChanceOfGreenToBlueWhenCraftingFinal = 229,
		ChanceOfBlueToPurpleWhenCraftingFinal = 230,
		ChanceOfPurpleToOrangeWhenCraftingFinal = 231,
		XPRepeatableEventsModFinal = 232,
		CreditsRepeatableEventsModFinal = 233,
		SecurityRepeatableEventsModFinal = 234,
		PersonnelRescueMissionsModFinal = 235,
		SupplyDropMissionsModFinal = 236,
		XPHeadshotKillsModFinal = 237,
		XPTacticalKillsModFinal = 238,
		XPSpecialKillsModFinal = 239,
		XPEliteKillsModFinal = 240,
		XPMultiKillsModFinal = 241,
		XPKillsModFinal = 242,
		XPAccoladeModFinal = 243,
		ExtractionTimeModFinal = 244,
		CraftingCostModFinal = 245,
		SkillXPModFinal = 246,
		DZRewardedCredsModFinal = 247,
		VendorCostModFinal = 248,
		AmmoDroppedModFinal = 249,
		CreditsDroppedModFinal = 250,
		LootedCreditsModFinal = 251,
		LootedDZCreditsModFinal = 252,
		UnlockedSkillSlotsFinal = 253,
		SecondaryWeaponAllowedBoolFinal = 254,
		RewardedCredsModFinal = 255,
		PerkAutoDiscoverFinal = 256,
		LastBulletDamageModFinal = 257,
		PrimaryDefensiveFinal = 258,
		PrimaryOffensiveFinal = 259,
		PrimarySupportFinal = 260,
		OverHealFinal = 261,
		OverHealDepletionDelayFinal = 262,
		OverHealDepletionRateFinal = 263,
		SignatureSkillResourceRewardModFinal = 264,
		CombatBuff_Cooldown_Final = 265,
		DefenceBuff_Cooldown_Final = 266,
		GroupHeal_Cooldown_Final = 267,
		ModSocketAttributeBonus = 268,
		ArmorMitigationDefaultRatingFlatBonus = 269,
		ContaminationZoneGasMaskLevelDefaultFlatBonus = 270,
		DefaultInventoryFlatBonus = 271,
		WeaponDamageBaseModBonus = 272,
		PrimaryOffensiveFlatBonus = 273,
		PrimaryDefensiveFlatBonus = 274,
		PrimarySupportFlatBonus = 275,
		AmmoIncendiaryFinal = 276,
		AmmoExplosiveFinal = 277,
		ApplyStatusBurnPercentageFinal = 278,
		ApplyExplosionConsumablePercentageFinal = 279,
		ArmorRatingUI = 280,
		DefaultInventoryUI = 281,
		ContaminationProtectionUI = 282,
		WeaponDamageCompareUI = 283,
		WeaponRPMCompareUI = 284,
		WeaponMagazineCompareUI = 285,
		WeaponAccuracyCompareUI = 286,
		WeaponRangeCompareUI = 287,
		WeaponReloadTimeCompareUI = 288,
		WeaponStabilityCompareUI = 289,
		AtributeIndexMax
	};

	char _pad0[0x98];
	Indexer** indexInfo;

public:
	static AttributeManager* Get()
	{
		size_t location = (size_t)(Utils::FindPattern((size_t)GetModuleHandle(NULL), 0x6B57000, sigAttributeManager, sizeof(sigAttributeManager)) + 3);
		#ifdef MESSAGES_ENABLED
		printf("location: 0x%IX\n", location);
		#endif
		
		DWORD offset = *(DWORD*)(location);
		#ifdef MESSAGES_ENABLED
		printf("offset: 0x%X\n", offset);
		#endif

		size_t address = *(size_t*)(location + offset + 4);
		#ifdef MESSAGES_ENABLED
		printf("address: 0x%IX\n", address);
		#endif
		
		return (AttributeManager*)address;
	}

	Indexer* GetIndexer(int index)
	{
		return indexInfo[index];
	}
};
