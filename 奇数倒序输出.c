#include <stdio.h>
#define N 4
void fun(int a[][N], int b[])
{
	int i = 0;
	for (i = 0;i < N;i++)
		b[i] = a[i][i] - a[i][N - i - 1];
}
int main()
{
	int x[N][N] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} }, y[N], i = 0;
	fun(x, y);
	for (i = 0;i < N; i++)
		printf("%d,", y[i]);
	return 0;
}