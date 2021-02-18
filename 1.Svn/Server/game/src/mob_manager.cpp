///Add
#ifdef RENEWAL_BOOK_NAME
const char* CMobManager::GetName(DWORD dwVnum)
{
	auto it = m_map_pkMobByVnum.find(dwVnum);
	return it == m_map_pkMobByVnum.end() ? "" : it->second->m_table.szLocaleName;
}
#endif