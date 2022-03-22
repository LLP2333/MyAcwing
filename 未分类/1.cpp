/*
朴素版 Dijkstras算法适合于稠密图，时间复杂度为O(n^2)
优化版 Dijkstras算法适合于稀疏图，时间复杂度为O(m*logn)
*/
#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
typedef pair<int,int> PII;
const int N=1e6+10;
int e[N],ne[N],h[N],w[N],idx;
int dist[N];
int st[N];
int n,m;
void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}
int Dijkstra()
{
    memset(dist,0x3f,sizeof dist);
    dist[1]=0;
    priority_queue<PII,vector<PII>,greater<PII>>heap;
    heap.push({0,1});
    while(heap.size())
    {
        PII t=heap.top();  //取出不在s中距离最短的点
        heap.pop();  
        int ver=t.second,distance=t.first;
        if(st[ver])  continue;  //如果该点已经确定了最短距则跳过
        st[ver]=true;           //否则将该点加入s中
        for(int i=h[ver];i!=-1;i=ne[i])  //用该点确定其他点的最短距离
        {
            int j=e[i];
            if(dist[j]>distance+w[i])
            {
                dist[j]=distance+w[i];   //更新距离
                heap.push({dist[j],j});
            }
        }
    }
    if(dist[n]==0x3f3f3f3f) return -1;
    else return dist[n];
}
int main()
{
    cin>>n>>m;
    memset(h,-1,sizeof h);
    while(m--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z);
    }
    cout<<Dijkstra()<<endl;
    return 0;
}
