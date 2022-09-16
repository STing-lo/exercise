#include <stdio.h>
main()
{
	int a[4][4], b[4][4], i, j;
	printf("input 16 numbers:");
	for (i = 0;i < 4;i++)
		for (j = 0;j < 4;j++)
		{
			scanf_s("%d",&a[i][j]);
			b[3 - j][i] = a[i][j];
		}
	printf("array b:\n");
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 4;j++)
			printf("%6d", b[i][j]);
			printf("\n");
		return 0;
	}
}