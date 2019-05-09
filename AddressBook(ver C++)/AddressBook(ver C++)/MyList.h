#ifndef MYLIST_H_
#define MYLIST_H_

#include "UserData.h"

class CMyList
{
public:
	CMyList(void);
	~CMyList(void);

protected:
	void ReleaseList(void);
	CUserData m_Head;
public:
	CUserData* FindNode(const char* pszName);
	int AddNewNode(const char* pszName, const char* pszPhone);

	void PrintAll(void);

	int reMoveNode(const char* pszName);
};

#endif