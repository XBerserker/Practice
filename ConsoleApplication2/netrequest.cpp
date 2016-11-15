#include "netrequest.h"
#include <Windows.h>

void getSystemInfo() {
	SYSTEM_INFO system_Info;

	GetSystemInfo(&system_Info);

	cout << system_Info.wProcessorLevel << endl;

	system("pause");
}
