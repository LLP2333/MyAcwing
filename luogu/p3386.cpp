#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=510,M=5e4+10;

int e[M],ne[M],h[N],idx;
bool st[N];
int match[N];
int n,m,k;

void add(int a,int b)
{
    e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

bool find(int x)
{
    for(int i=h[x];i!=-1;i=ne[i])
    {
        int j=e[i];
        if(!st[j])
        {
            st[j]=true;
            if(match[j]==x) continue;
            if(match[j]==0||find(match[j]))
            {
                match[j]=x;
                return true;
            }
        }
    }
    return false;

}

int main()
{
    memset(h,-1,sizeof h);
    cin>>n>>m>>k;
    while (k--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        add(a,b);
    }

    int res=0;
    for(int i=1;i<=n;i++)
    {
        memset(st,false,sizeof st);
        if(find(i))
        res++;
    }
    cout<<res<<endl;
    return 0;
    
}