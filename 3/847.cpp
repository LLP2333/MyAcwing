#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1e5+10;

int h[N],e[N],ne[N],idx;
int d[N],q[N];//d[N]表示距离，用q[N]模拟队列
int n,m;

void add(int a,int b)
{
    e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

int bfs()
{
    int hh=0,tt=0;//队头和队尾
    memset(d,-1,sizeof d);
    q[0]=1;//第一个结点加入duilie
    d[1]=0;//第一个节点距离为零
    while(hh<=tt)
    {
        int t=q[hh++];//取出队头元素
        for(int i=h[t];i!=-1;i=ne[i])
        {
            int j=e[i];
            if(d[j]==-1)
            {
                d[j]=d[t]+1;
                q[++tt]=j;
            }
        }
    }
    return d[n];
    
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
    }


    cout<<bfs();

    return 0;

}