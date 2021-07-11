// 10_file read and write.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
#include "math.h"

int main()
{
	FILE*f;

	srand(time(NULL)); rand();
	f = fopen("a.txt", "w");
	fprintf(f, "學號 成績\n");
	for (int i = 0; i < 50; i++)
	{
		int u = rand() % 41 + 60;
		fprintf(f, "%2d    %3d\n", i + 1, u);
	}
	fclose(f);

	return 0;
}

