#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
const int N=2e5+10;
int p[N];
int n,m;
using namespace std;

struct Edges
{
    int a,b,w;
    bool operator <(const Edges  &W)const{
       return w<W.w;
    }
}Edges[N];
int find(int i)
{
    if(p[i]!=i) p[i]=find(p[i]);
    return p[i];
}

int main()
{
    int a,b,w;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d%d%d",&a,&b,&w);
        Edges[i]={a,b,w};
    }
    for(int i=1;i<=n;i++)
    {
        p[i]=i;
    }
    sort(Edges,Edges+m);
    int res=0,cnt=0;
    for(int i=0;i<m;i++)
    {
        a=Edges[i].a,b=Edges[i].b,w=Edges[i].w;
        a=find(a),b=find(b);
        if(a!=b)
        {
         // b=find(a);
         p[a]=b;//a和b归并
          cnt++;
          res+=w;
        }
    }
    if(cnt<n-1) puts("impossible");//为什么是n-1，因为对于n个点,若有最小生成树，有n-1条边
    else cout<<res;



    return 0;

}
