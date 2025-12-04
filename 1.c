#include <stdio.h>

int main()
{
//	int arr[10] = {0};
	int i = 0;
	int arr[10] = {0};
	printf("&i = %p\n",&i);
	printf("%p\n",&arr[11]);
	for(i=0;i<=12;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}
