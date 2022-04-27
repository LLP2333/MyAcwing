#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1e5+10;
int n,m;

int h[N],e[N],ne[N],idx;
int q[N],d[N];//q[N]模拟队列，d[N]记录点的入度;
  
void add(int a,int b)
{
    e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

bool topsort()
{
    int hh=0,tt=-1;

    for(int i=1;i<=n;i++)
    {
        if(!d[i])  q[++tt]=i;
    }
    while (hh<=tt)
    {
        int t=q[hh++];//取出队头元素
        for(int i=h[t];i!=-1;i=ne[i])
        {
            int j=e[i];
            d[j]--;
            if(d[j]==0)  q[++tt]=j;//这里是 tt,不是t,进行的是入队操作
        }
    }
   // cout<<tt<<endl;
    return tt==n-1;
}


int main()
{
   cin>>n>>m;
   memset(h,-1,sizeof h);
   for(int i=0;i<m;i++)
   {
       int a,b;
       cin>>a>>b;
       add(a,b);
       d[b]++;
   }

   if(topsort())
   {
       for(int i=0;i<n;i++)
       cout<<q[i]<<' ';
   }
   else puts("-1");

   return 0;

}