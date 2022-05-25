//状态转移方程  f[i][j]=f[i-1][j]+f[i-1][j-i],可以优化成一维，把 i优化掉
//表示0-i个物品，j表示背包总容量，f[i][j]属性为数量,f[0][0]=1;
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;

