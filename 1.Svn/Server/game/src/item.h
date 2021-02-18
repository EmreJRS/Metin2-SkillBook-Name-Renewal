///Add
#ifdef RENEWAL_BOOK_NAME
#include "skill.h"
#include "mob_manager.h"
#include "unique_item.h"
#endif

//Find
		const char *	GetName()
		
///Change
		const char *	GetName()
		{ 
#ifdef RENEWAL_BOOK_NAME
			if (!m_pProto)
				return "";

			static char buf[64];
			switch (m_dwVnum)
			{
			case 70104:
				snprintf(buf, sizeof(buf), "%s %s", CMobManager::instance().GetName(GetSocket(0)), m_pProto->szLocaleName);
				return buf;
			case 50300:
			case ITEM_SKILLFORGET_VNUM:
				snprintf(buf, sizeof(buf), "%s %s", CSkillManager::instance().GetName(GetSocket(0)), m_pProto->szLocaleName);
				return buf;
			}

			return m_pProto->szLocaleName;
#else
			return m_pProto ? m_pProto->szLocaleName : "";
#endif
		}
