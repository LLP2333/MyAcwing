#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

const int N=1010;
int n,m;
int f[N][N];
char a[N],b[N];

int main()
{
    cin>>n>>m>>a+1>>b+1;
    
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
        f[i][j]=max(f[i-1][j],f[i][j-1]);//a[i],b[j]都不选或者只选一个
        if(a[i]==b[j])  f[i][j]=max(f[i][j],f[i-1][j-1]+1);//a[i] b[j]都选
    }

    cout<<f[n][m];
    return 0;
}