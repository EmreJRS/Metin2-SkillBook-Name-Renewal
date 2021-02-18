///Add
#ifdef RENEWAL_BOOK_NAME
const char* CSkillManager::GetName(DWORD dwVnum)
{
	static const std::map<DWORD, std::string> skill_list =
	{
		{1, "Three-Way Cut"},
		{2, "Sword Spin"},
		{3, "Berserk"},
		{4, "Aura of the Sword"},
		{5, "Dash"},
		{6, "Life Force"},
		{16, "Spirit Strike"},
		{17, "Bash"},
		{18, "Stump"},
		{19, "Strong Body"},
		{20, "Sword Strike"},
		{21, "Sword Orb"},
		{31, "Ambush"},
		{32, "Fast Attack"},
		{33, "Rolling Dagger"},
		{34, "Stealth"},
		{35, "Poisonous Cloud"},
		{36, "Insidious Poison"},
		{46, "Repetitive Shot"},
		{47, "Arrow Shower"},
		{48, "Fire Arrow"},
		{49, "Feather Walk"},
		{50, "Poison Arrow"},
		{51, "Spark"},
		{61, "Finger Strike"},
		{62, "Dragon Swirl"},
		{63, "Enchanted Blade"},
		{64, "Fear"},
		{65, "Enchanted Armour"},
		{66, "Dispel"},
		{76, "Dark Strike"},
		{77, "Flame Strike"},
		{78, "Flame Spirit"},
		{79, "Dark Protection"},
		{80, "Spirit Strike (S)"},
		{81, "Dark Orb"},
		{91, "Flying Talisman"},
		{92, "Shooting Dragon"},
		{93, "Dragon's Roar"},
		{94, "Blessing"},
		{95, "Reflect"},
		{96, "Dragon's Aid"},
		{106, "Lightning Throw"},
		{107, "Summon Lightning"},
		{108, "Lightning Claw"},
		{109, "Cure"},
		{110, "Swiftness"},
		{111, "Attack Up"},
		{170, "Shred"},
		{171, "Wolf's Breath"},
		{172, "Wolf Pounce"},
		{173, "Wolf's Claw"},
		{174, "Crimson Wolf Soul"},
		{175, "Indigo Wolf Soul"}
	};

	auto it = skill_list.find(dwVnum);
	return it == skill_list.end() ? "" : it->second.c_str();
}
#endif