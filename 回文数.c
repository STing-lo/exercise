#include <stdio.h>
int main()
{
	int num=0, x, y = 0;
	printf("������һλ����");
	scanf_s("%d", &num);
	x = num;
	while (x > 0)
	{
		y = y * 10 + x % 10;
		x = x / 10;
	}
	if (num == y)
		printf("%d��һ��������", num);
	
	else
		printf("%d����һ��������", num);
	
	return 0;

}