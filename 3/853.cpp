#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=510,M=1e4+10;
int n,m,k;//n表示点数，m表示边数
int dist[N];
int back[N];

struct Edge
{
    int a,b,w;
}edges[M];

int bellman_ford()
{
    memset(dist, 0x3f,sizeof dist);
    dist[1]=0;
    for(int i=0;i<k;i++)
    {
        memcpy(back,dist,sizeof dist);
        for(int j=0;j<m;j++)
        {
          int a=edges[j].a,b=edges[j].b,w=edges[j].w;
          dist[b]=min(dist[b],back[a]+w);//使用备份数组，防止串联二次更新
        }

    }
    if(dist[N]>0x3f3f3f3f/2) return -1;
    else return dist[n];

}

int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        cin>>edges[i].a>>edges[i].b>>edges[i].w;

    }
    int res=bellman_ford();
    if(res!=-1)
    cout<<res<<endl;
    else cout<<"impossible"<<endl;
    return 0;
}
