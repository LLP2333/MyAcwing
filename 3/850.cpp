#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n,m;
const int N=1.5e4+10;
typedef pair<int,int> PII;
//稀疏图用邻接表存
int h[N],e[N],ne[N],w[N],idx;//w表示权重
int dist[N];//第几个节点到初始节点的距离
bool st[N];//如果为ture，说明这个节点的最短路径已经确定
 
 void add(int a,int b,int c)
 {
     e[idx]=b;
     w[idx]=c;
     ne[idx]=h[a];
     h[a]=idx;
     idx++;
 }
int dijkstra()
{  
    memset(dist,0x3f,sizeof dist);
    dist[1]=0;
    priority_queue<PII,vector<PII>,greater<PII>> heap;
     heap.push({0,1});
     while (heap.size())
     {
       auto t=heap.top();
       heap.pop();//删除堆顶元素
       int ver=t.second,distance=t.first;
       if(st[ver])continue;
       st[ver]=true;
       for(int i=h[ver];i!=-1;i=ne[i])
       {
           int j=e[i];
           if(dist[j]>distance+w[i])
           {
               dist[j]=distance+w[i];
               heap.push({dist[j],j});
           }


       }



     }
     if(dist[n]=0x3f3f3f3f)
     return -1;
     return dist[n];
     




}



int main()
{
    memset(h,-1,sizeof h);
    cin>>n>>m;
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        add(a,b,c);
    }


    cout<<dijkstra()<<endl;



    system("pause");
    return 0;
}
//3月15号蓝桥杯