//Floyd求最短路
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=210;
int d[N][N];
int INF=1e9;
int n,m,q;

void Floya()
{
   for(int k=1;k<=n;k++)
   for(int i=1;i<=n;i++)
   for(int j=1;j<=n;j++)
   {
       d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
   }


}

int main()
{
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
        if(i==j) d[i][j]=0;
        else d[i][j]=INF;
    }
    for(int i=1;i<=m;i++)
    {
        int a,b,c;

        cin>>a>>b>>c;
        d[a][b]=min(d[a][b],c);
    }
    Floya();

    while (q--)
    {
        int x,y;
        cin>>x>>y;
        if(d[x][y]>INF/2)
        cout<<"impossible";
        else
        cout<<d[x][y];
    }

    return 0;
    
    
    
}
