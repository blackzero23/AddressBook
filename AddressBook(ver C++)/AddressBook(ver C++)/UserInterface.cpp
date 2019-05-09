#include "UserInterface.h"

CUserInterFace::CUserInterFace(CMyList& rList)
{
}

CUserInterFace::~CUserInterFace(void)
{
}

int CUserInterFace::Run(void)
{
	int nMenu = 0;
	
	//메인 이벤트 반복문
	while ((nMenu = PrintUI()) != 0)
	{
		switch (nMenu)
		{
		case 1: //ADD
			Add();
			break;
		case 2: //Search
			Search();
			break;
		case 3: //print all
			PrintAll();
			break;
		case 4: //Remove
			Remove();
			break;
		}
	}

	return nMenu;
}
