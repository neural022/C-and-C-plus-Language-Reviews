// 08_random.cpp : ﹚竡北莱ノ祘Α秈翴
//

#include "stdafx.h"

#include "stdlib.h"
#include "time.h"

int main()
{
	float u;
	int n, m;
	//	srand: setting time(return system now time) random seed
	//	rand:shuffle
	srand(time(NULL)); rand();
	for (int i = 0; i < 10; i++)
	{
		//	32bit computer 0-2^16-1 random integer
		m = rand();
		printf("俱计: %d\n", m);
	}
	for (int i = 0; i < 10; i++)
	{
		//	% N: 0~N-1 +M: N~M
		//	between 1 to 6 random integer
		//	0~5 + 1 = 1~6
		n = rand() % 6 + 1;
		printf("俱计: %d\n", n);
	}
	for (int i = 0; i < 10; i++)
	{
		//	0~1ぇ丁キАだ睹计
		u = rand()*1.0 / RAND_MAX;
		//	rand()*100/RAND_MAX+100
		//	uniform distribution random between 100~200
		printf("疊翴计: %f\n", u);
	}


    return 0;
}

