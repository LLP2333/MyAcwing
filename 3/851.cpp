//spfa求最短路
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
const int N=1e5+10;
int n,m;

int e[N],ne[N],h[N],idx,w[N];
int dist[N];
bool st[N];//是否加入到队列

void add(int a,int  b,int c)
{
    e[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
}

int spfa()
{
    memset(dist,0x3f,sizeof dist);
    queue<int> q;
    dist[1]=0;
    q.push(1);
    st[1]=true;
    while (q.size())
    {
        int t=q.front();
        q.pop();
        st[t]=false;
        for(int i=h[t];i!=-1;i=ne[i])
        {
            int  j=e[i];
            if(dist[j]>dist[t]+w[i])
            {
            dist[j]=dist[t]+w[i];
            if(!st[j])
            {
                q.push(j);
                st[j]=true;
            }
            }
        }
    }

    
 return dist[n];
    
   

}



int main()
{
    cin>>n>>m;
    memset(h,-1,sizeof h);
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        add(a,b,c);
    }

   int x=spfa();
   if(x>0x3f3f3f3f/2) cout<<"impossible";//不能用x==0x3f3f3f3f判断，会有一个输出为 -1的数据卡你
   else cout<<x;

   return 0;

}