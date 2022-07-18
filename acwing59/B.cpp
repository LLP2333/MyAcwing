#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;
const int N = 1e6;
int isprime[N];
int con;
int main()
{

	
	int t;
	scanf("%d", &t);
	
	for (int i = 1; i <= t; i++)//最大就是自己本身
	{
		isprime[i] = i;
	}
	for (int i = 3; i < sqrt(t); i+=2)//抓奇数
	{
	//对奇数的倍数j进行筛出 
	// 那么i一定是j的因子 
	// 但是  3 9 都是18的因子 
	// 所以一定要保存最小的因子 	
	for (int j = i * 2; j <= t; j += i)
		{
			if (isprime[j]>i)//使得i是最小的
			{
				isprime[j] = i;
			}
		}
	}
	
	while (t>0)
	{
		int x;
		x=t;
		if (x % 2 == 0)//偶数最小因子一定是2 
		{
			//printf("2\n");
            t=t-2;
            con++;
		}
		else
		{
			//printf("%d\n", isprime[x]);
            t=t-isprime[x];
            con++;
		}
	}
    cout<<con;
    return 0;
}