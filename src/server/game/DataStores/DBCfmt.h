/*
 * Copyright (C) 2008-2013 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRINITY_DBCSFRM_H
#define TRINITY_DBCSFRM_H

// x - skip<uint32>, X - skip<uint8>, s - char*, f - float, i - uint32, b - uint8, d - index (not included)
// n - index (included), l - bool, p - field present in sql dbc, a - field absent in sql dbc

char const Achievementfmt[] = "niixsxiixixxiix"; //16135 verified
const std::string CustomAchievementfmt = "pppaaaapapaapp";
const std::string CustomAchievementIndex = "ID";
char const AchievementCriteriafmt[] = "niiiiiiiisiiiiixxiiiiii"; //16135 verified
char const AreaTableEntryfmt[] = "iiinixxxxxxxisiiiiifxxxxxxxx"; //16135 verified
char const AreaGroupEntryfmt[] = "niiiiiii"; //16135 verified
char const AreaPOIEntryfmt[] = "niiiiiiiiiiiffixixxixxx"; //16135 verified
char const AreaTriggerEntryfmt[] = "nifffxxxfffffxxi"; //16135 verified
char const ArmorLocationfmt[] = "nfffff"; //16135 verified
char const AuctionHouseEntryfmt[] = "niiix"; //16135 verified
char const BankBagSlotPricesEntryfmt[] = "ni"; //16135 verified
char const BannedAddOnsfmt[] = "nxxxxxxxxxx"; //16135 verified
char const BarberShopStyleEntryfmt[] = "nixxxiii"; //16135 verified
char const BattlemasterListEntryfmt[] = "niiiiiiiiiiixsiiiixxxx"; //16135 verified
char const CharStartOutfitEntryfmt[] = "diiiiiiiiiiiiiiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"; //16135 verified
char const CharTitlesEntryfmt[] = "nxsxix"; //16135 verified
char const ChatChannelsEntryfmt[] = "nixsx"; //16135 verified
char const ChrClassesEntryfmt[] = "nixsxxxixiiiiixxxx"; //16135 verified
char const ChrRacesEntryfmt[] = "nxixiixixxxxixsxxxxxixxxxxxxxxxxxxxx"; //16135 verified
char const ChrClassesXPowerTypesfmt[] = "nii"; //16135 verified
char const CinematicSequencesEntryfmt[] = "nxxxxxxxxx"; //16135 verified
char const CreatureDisplayInfofmt[] = "nixxfxxxxxxxxxxxxxx"; //16135 verified
char const CreatureModelDatafmt[] = "nxxxxxxxxxxxxxffxxxxxxxxxxxxxxxxx"; //16135 verified
char const CreatureFamilyfmt[] = "nfifiiiiixsx"; //16135 verified
char const CreatureSpellDatafmt[] = "niiiixxxx"; //16135 verified
char const CreatureTypefmt[] = "nxx"; //16135 verified
char const CurrencyTypesfmt[] = "nixxxxiiiix"; //16135 verified
char const DestructibleModelDatafmt[] = "ixxixxxixxxixxxixxxxxxxx"; //16135 verified
char const DungeonEncounterfmt[] = "iiixisxx"; //16135 verified
char const DurabilityCostsfmt[] = "niiiiiiiiiiiiiiiiiiiiiiiiiiiii"; //16135 verified
char const DurabilityQualityfmt[] = "nf"; //16135 verified
char const EmotesEntryfmt[] = "nxxiiixx"; //16135 verified
char const EmotesTextEntryfmt[] = "nxixxxxxxxxxxxxxxxx"; //16135 verified
char const FactionEntryfmt[] = "niiiiiiiiiiiiiiiiiiffixsxi"; //16135 verified
char const FactionTemplateEntryfmt[] = "niiiiiiiiiiiii";
char const GameObjectDisplayInfofmt[] = "nsxxxxxxxxxxffffffxxx";
char const GemPropertiesEntryfmt[] = "nixxii";
char const GlyphPropertiesfmt[] = "niii";
char const GlyphSlotfmt[] = "nii";
char const GtBarberShopCostBasefmt[] = "xf";
char const GtCombatRatingsfmt[] = "xf";
char const GtOCTHpPerStaminafmt[] = "df";
char const GtChanceToMeleeCritBasefmt[] = "xf";
char const GtChanceToMeleeCritfmt[] = "xf";
char const GtChanceToSpellCritBasefmt[] = "xf";
char const GtChanceToSpellCritfmt[] = "xf";
char const GtNPCManaCostScalerfmt[] = "xf";
char const GtOCTClassCombatRatingScalarfmt[] = "df";
char const GtOCTRegenHPfmt[] = "f";
//char const GtOCTRegenMPfmt[] = "f";
char const GtRegenMPPerSptfmt[] = "xf";
char const GtSpellScalingfmt[] = "df";
char const GtOCTBaseHPByClassfmt[] = "df";
char const GtOCTBaseMPByClassfmt[] = "df";
char const GuildPerkSpellsfmt[] = "dii";
char const Holidaysfmt[] = "niiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiixxsiix";
char const ImportPriceArmorfmt[] = "nffff";
char const ImportPriceQualityfmt[] = "nf";
char const ImportPriceShieldfmt[] = "nf";
char const ImportPriceWeaponfmt[] = "nf";
char const ItemPriceBasefmt[] = "diff";
char const ItemReforgefmt[] = "nifif";
char const ItemBagFamilyfmt[] = "nx";
char const ItemArmorQualityfmt[] = "nfffffffi";
char const ItemArmorShieldfmt[] = "nifffffff";
char const ItemArmorTotalfmt[] = "niffff";
char const ItemClassfmt[] = "nxfx"; //16135 verified
char const ItemDamagefmt[] = "nfffffffi";
char const ItemDisenchantLootfmt[] = "niiiiii";
//char const ItemDisplayTemplateEntryfmt[] = "nxxxxxxxxxxixxxxxxxxxxx";
char const ItemLimitCategoryEntryfmt[] = "nxii";
char const ItemRandomPropertiesfmt[] = "nxiiixxs";
char const ItemRandomSuffixfmt[] = "nsxiiiiiiiiii";
char const ItemSetEntryfmt[] = "dsiiiiiiiiiixxxxxxxiiiiiiiiiiiiiiiiii";
char const LFGDungeonEntryfmt[] = "nsiiiiiiiiixxixixxxxxxx"; //16135 verified
char const LiquidTypefmt[] = "nxxixixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
char const LockEntryfmt[] = "niiiiiiiiiiiiiiiiiiiiiiiixxxxxxxx";
char const PhaseEntryfmt[] = "nsi";
char const MailTemplateEntryfmt[] = "nxs";
char const MapEntryfmt[] = "nxiixsixxixiffxiixi";
char const MapDifficultyEntryfmt[] = "diisii";
char const MovieEntryfmt[] = "nxxxx";
char const MountCapabilityfmt[] = "niiiiiii";
char const MountTypefmt[] = "niiiiiiiiiiiiiiiiiiiiiiii";
char const NameGenfmt[] = "dsii";
char const NumTalentsAtLevelfmt[] = "df";
char const OverrideSpellDatafmt[] = "niiiiiiiiiixx";
char const QuestFactionRewardfmt[] = "niiiiiiiiii";
char const QuestSortEntryfmt[] = "nx";
char const QuestXPfmt[] = "niiiiiiiiii";
char const PvPDifficultyfmt[] = "diiiii";
char const RandomPropertiesPointsfmt[] = "niiiiiiiiiiiiiii";
char const ScalingStatDistributionfmt[] = "niiiiiiiiiiiiiiiiiiiixi";
char const ScalingStatValuesfmt[] = "iniiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii";
char const SkillLinefmt[] = "nisxixix";
char const SkillLineAbilityfmt[] = "niiiiiiiiixxx";
char const SoundEntriesfmt[] = "nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
char const SpellCastTimefmt[] = "nixx"; // 16135 verified
char const SpellCategoriesEntryfmt[] = "nixiiiiiix"; // 16135 verified
const std::string CustomSpellDifficultyfmt = "ppppp";
const std::string CustomSpellDifficultyIndex = "id";
char const SpellDurationfmt[] = "niii"; // 16135 verified
char const SpellEffectEntryfmt[] = "nxifiiiffiiiiiifiifiiixixiiiix"; // 16135 verified
char const SpellEntryfmt[] = "nsixxiiifiiiiiiiiiiiiiiii"; // 16135 verified
const std::string CustomSpellEntryfmt = "papppppppppppapapaaaaaaaaaaapaaapapppppppaaaaapaapaaaaaaaaaaaaaaaaaappppppppppppppppppppppppppppppppppppaaaaaapppppppppaaapppppppppaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaappppppppapppaaaaappaaaaaaa";
const std::string CustomSpellEntryIndex = "Id";
char const SpellFocusObjectfmt[] = "nx";
char const SpellItemEnchantmentfmt[] = "nxiiiiiiiiisiiiiiiixxxxxx"; // 16135 verified
char const SpellItemEnchantmentConditionfmt[] = "nbbbbbxxxxxbbbbbbbbbbiiiiiXXXXX"; // 16135 verified
char const SpellRadiusfmt[] = "nfxxf"; // 16135 verified
char const SpellRangefmt[] = "nffffixx"; // 16135 verified
char const SpellReagentsEntryfmt[] = "nixiiiiiiiiiiiiiiii";
char const SpellScalingEntryfmt[] = "niiiifixx"; // 16135 verified
char const SpellTotemsEntryfmt[] = "niiii"; // 16135 verified
char const SpellTargetRestrictionsEntryfmt[] = "nixfxiiii"; // 16135 verified
char const SpellPowerEntryfmt[] = "nixiiiiixxxxx"; // 16135 verified
char const SpellInterruptsEntryfmt[] = "nixixixi"; // 16135 verified
char const SpellEquippedItemsEntryfmt[] = "nixiii"; //16135 verified
char const SpellMiscEntryfmt[]="nixiiiiiiiiiixiiifiiiiix"; // 16135 Add for 5.0.5b
char const SpellAuraOptionsEntryfmt[] = "nixiiii"; // 16135 verified
char const SpellAuraRestrictionsEntryfmt[] = "nixiiiiiiii"; // 16135 verified
char const SpellCastingRequirementsEntryfmt[] = "dixxixi";
char const SpellClassOptionsEntryfmt[] = "dxiiiix";
char const SpellCooldownsEntryfmt[] = "nixiii"; // 16135 verified
char const SpellLevelsEntryfmt[] = "nixiii"; //16135 verified
char const SpellRuneCostfmt[] = "niiixi"; // 16135 verified
char const SpellShapeshiftEntryfmt[] = "nixixx";
char const SpellShapeshiftFormfmt[] = "nxxiixiiixxiiiiiiiixx";
char const StableSlotPricesfmt[] = "ni";
char const SummonPropertiesfmt[] = "niiiii";
char const TalentEntryfmt[] = "niiiiiixiis"; // 16135 verified
char const TalentTabEntryfmt[] = "nxxiiixxxii";
char const TalentTreePrimarySpellsfmt[] = "diix";
char const TaxiNodesEntryfmt[] = "nifffsiiixx";
char const TaxiPathEntryfmt[] = "niii";
char const TaxiPathNodeEntryfmt[] = "diiifffiiii";
char const TotemCategoryEntryfmt[] = "nxii";
char const UnitPowerBarfmt[] = "niixxxxxxxxxxxxxxxxxxxxxxxx";
char const VehicleEntryfmt[] = "nixffffiiiiiiiifffffffffffffffssssfifiixx"; // 16135 verified
char const VehicleSeatEntryfmt[] = "niiffffffffffiiiiiifffffffiiifffiiiiiiiffiiiiixxxxxxxxxxxxxxxxxxxx";
char const WMOAreaTableEntryfmt[] = "niiixxxxxiixxxx";
char const WorldMapAreaEntryfmt[] = "xinxffffixxxxx";
char const WorldMapOverlayEntryfmt[] = "nxiiiixxxxxxxxxx"; //16135 verified
char const WorldSafeLocsEntryfmt[] = "nifffxx"; //16135 verified

#endif
