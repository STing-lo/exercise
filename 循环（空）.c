#include <stdio.h>

int main()
{
	int i, k;
	for (i = 0;i < 4;i++, i++)
		for (k = 1;k < 3;k++);
	printf("*");//for��;Ϊ����䣬����ѭ����ֱ�Ӵ�ӡ
	return 0;
}