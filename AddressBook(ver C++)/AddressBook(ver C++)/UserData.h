#ifndef USERDATA_H_
#define USERDATA_H_

class CUserData
{
private:
	friend class CMyList;
public:
	CUserData(void);
	~CUserData(void);

	const char* GetName(void) const { return szName; }
	const char* GetPhone(void) const { return szName; }
	const CUserData* GetNext(void) const { return pNext; }

	static int GetUserDataCounter(void) { return nUserDataCounter; }

protected:
	char szName[32]; //�̸�
	char szPhone[32]; //��ȭ��ȣ

	CUserData* pNext;

	static int nUserDataCounter;
};

#endif // !