#include "UserInterface.h"
#include "MyList.h"

int main(void)
{
	CMyList DB;
	CUserInterFace UI(DB);
	UI.Run();

	return 0;
}