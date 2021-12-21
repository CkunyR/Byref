#include <stdio.h>

void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//传过来的是首元素地址，为指针 -- x86-4字节 - x64-8字节
}
void test2(char ar[])
{
	printf("%d\n", sizeof(ar));//传过来的是首元素地址，为指针 -- x86-4字节 - x64-8字节
}

int main()
{
	int arr[10] = { 0 };
	char ar[10] = { 0 };
	printf("%d\n", sizeof(arr));//4*10
	printf("%d\n", sizeof(ar));//1*10
	test1(arr);
	test2(ar);
	return 0;
}