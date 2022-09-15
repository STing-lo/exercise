#include <stdio.h>
int main()
{
	int num=0, x, y = 0;
	printf("请输入一位数：");
	scanf_s("%d", &num);
	x = num;
	while (x > 0)
	{
		y = y * 10 + x % 10;
		x = x / 10;
	}
	if (num == y)
		printf("%d是一个回文数", num);
	
	else
		printf("%d不是一个回文数", num);
	
	return 0;

}