#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1010;

int f[N][N];//用f[i][j]表示前i件物品，占用j空间时候的总价值
int v[N],w[N];//分别表示物品的重量和价值

int main()
{
    int n,m;
    
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
      cin>>v[i]>>w[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            f[i][j]=f[i-1][j];
            if(j>=v[i])
            {
                f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
            }
        }
    }

    int res=0;
    for(int i=0;i<=m;i++) res=max(res,f[n][i]);
    cout<<res<<endl;
    return 0;

}