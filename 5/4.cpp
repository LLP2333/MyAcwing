//多重背包问题
#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N=1010;
int f[N];
int v[N],w[N],s[N];
int n,m;

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)//1处
    {
      scanf("%d%d%d",&v[i],&w[i],&s[i]);
    }
    for(int i=1;i<=n;i++)
    {
     for(int j=m;j>=0;j--)//一维要从m开始
     {
         for(int k=1;k<=s[i];k++)//二处要和一处保持一致，因为要用一处的数据
         {
            if(k*v[i]<=j)
             f[j]=max(f[j],f[j-k*v[i]]+k*w[i]);
         }
     }

    }
    cout<<f[m]<<endl;//若之前F[N]都初始化为零，此处不需要比较f[0]d到f[N]，直接输出f[m];


    return 0;
}
