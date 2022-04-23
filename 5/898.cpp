//数字三角形
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=510;
int w[N][N],f[N][N];
int n;

int main()
{
 cin>>n;
for(int i=1;i<=n;i++)
for(int j=1;j<=i;j++)
{
    scanf("%d",&w[i][j]);
}

for(int i=1;i<=n;i++)
{
    f[n][i]=w[n][i];
}

for(int i=n-1;i;i--)
{
    for(int j=1;j<=i;j++)
    {
        f[i][j]=max(f[i+1][j],f[i+1][j+1])+w[i][j];
    }
}

cout<<f[1][1];
return 0;

}