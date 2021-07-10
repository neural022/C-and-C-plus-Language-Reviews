// 11_pointer with dynamic memory  allocation.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"

void sort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	for (int j = 0; j < n - 1 - i; j++)
	if (a[j] > a[j + 1])
	{
		int t = a[j];
		a[j] = a[j + 1];
		a[j + 1] = t;
	}
}

int main()
{
	int n = 0;
	int *a = (int*)malloc(sizeof(int) * 10);
	char *s = (char*)malloc(sizeof(char) * 10);
	char *t = (char*)malloc(sizeof(char) * 10);

	printf("請輸入檔名:");
	scanf("%s", s);
	printf("請輸出檔名:");
	scanf("%s", t);
	FILE*f;
	f = fopen(s, "r");
		while (fscanf(f, "%d", &a[n]) != EOF) n++;
	fclose(f);
	sort(a, n);
	FILE*g;
	g = fopen(t, "w");
		for (int i = 0; i < n; i++) fprintf(g, "%d\n", a[i]);
	fclose(f);
	free(t);
	free(s);
	free(a);


	return 0;
}

