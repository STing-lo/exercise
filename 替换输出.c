#include <stdio.h>
replace(char* s, char c1, char c2)
{
	while (*s != '\0')
	{
		if (*s == c1)
			*s = c2;
		s++;
	}
}
main()
{
	FILE* fp;
	char str[100], a, b;
	if ((fp = fopen_s(&fp,"p10 - 2.out", "w")) == NULL)
	{
		ptintf("cannot open the file\n");
		exit(0);
	}
	printf("Enter a string:\n");
	gets(str);
	printf("Enter a&&b:\n");
	scanf_s("%c,%c", &a, &b);
	printf("%s\n", str);
	fprintf(fp, "%s\n", str);
	replace(str, a, b);
	printf("the new string is----%s\n", str);
	fprintf(fp, "the new string is----%s\n", str);
	fclose(fp);
	return 0;
}