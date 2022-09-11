#include <stdio.h>

int main()
{
	int i, k;
	for (i = 0;i < 4;i++, i++)
		for (k = 1;k < 3;k++);
	printf("*");//for后;为空语句，跳出循环，直接打印
	return 0;
}