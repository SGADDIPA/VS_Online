#include <stdio.h>

int main(void)
{
	LPVOID pBuffer = (LPVOID)malloc(sizeof(long long) * 20);
	
	LPVOID pSrc = pBuffer;
	DWORD dwCnt = 4;
	
	printf("0x%x pBuffer+dwCnt(%d):0x%x \n",pBuffer,((long long)pBuffer+dwCnt));
	
	free(pSrc);
	
	return 0;
}