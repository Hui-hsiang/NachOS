#include "syscall.h"
main() {
	int n;
	for(n=0;n<5;n++)
	{
		Sleep(1000000); // 10000000 i=3, 5000000 i=5, 2500000 i=9
		PrintInt(n+1);
	}
	return 0;
}
