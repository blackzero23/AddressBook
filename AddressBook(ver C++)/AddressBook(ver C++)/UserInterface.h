#ifndef USERINTERFACE_H_
#define USERINTERFACE_H_

class CMyList;

class CUserInterFace
{
public:
	CUserInterFace(CMyList& rList);
	~CUserInterFace(void);
	void Add(void);

protected:
	CMyList* m_List;
public:
	void Search(void);
	void Remove(void);
	void PrintAll();

	int PrintUI(void);
	

	int Run(void);
};

#endif // !
