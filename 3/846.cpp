#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1e5+10,M=N*2;

int n,m;
int h[N],e[M],ne[M],idx;
bool st[N];//是否被遍历过

int ans=N;//answer

void add(int a,int b)
{
    e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

//以u为根节点的子树中点的数量
int dfs(int u)
{
    st[u]=true;//遍历过了
    int sum=1,res=0;
    for(int i=h[u];i!=-1;i=ne[i])
    {
        int j=e[i];
        if(!st[j])
        {
            int s=dfs(j);
            res=max(res,s);
            sum+=s;
        }
    }
    res=max(res,n-sum);
    ans=min(ans,res);
    return sum;
}

int main()
{
    memset(h,-1,sizeof h);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        //把无向图当初有向图，需要add两次
        add(a,b);
        add(b,a);
        
    }
    dfs(1);//从任意一个点开始都可以
    cout<<ans<<endl;

    return 0;
}
