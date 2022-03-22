#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=5e2+10;
int g[N][N];//邻接矩阵
int dist[N];//距离
bool st[N];
int n,m;

int Dijkstra()
{
    memset(dist,0x3f,sizeof dist);
    dist[1]=0;//第一个节点到初始点的距离为0，其余点初始化为正无穷
    for(int i=0;i<n;i++)
    {
        int t=-1;
        for(int j=1;j<=n;j++)
        {
           if(!st[j]&&(t==-1||dist[j]<dist[t]))
           t=j;
           
        }
        st[t]=true;
        
        for(int j=1;j<=n;j++)
        {
            dist[j]=min(dist[j],dist[t]+g[t][j]);
        }
    }
    if(dist[n]>=0x3f3f3f3f)
    return -1;
    else
    return dist[n];


}



int main()
{
     cin>>n>>m;
    int x,y,z;
     memset(g,0x3f,sizeof g);   //邻接矩阵的初始化，由于求的是最小值，因此初始为无穷大
    for(int i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        g[x][y]=min(g[x][y],z);

    }

    cout<<Dijkstra()<<endl;


    system("pause");
    return 0;
    
   
}