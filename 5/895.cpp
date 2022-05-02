#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=1010;
int n;
int a[N],f[N];//f[i]表示以i为最后节点的最长上升子序列

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(int i=1;i<=n;i++)
    {
        f[i]=1;//至少一个节点，a[i]
        for(int j=1;j<i;j++)
        {
            if(a[j]<a[i])
            f[i]=max(f[i],f[j]+1);
        }
    }

    int ans=0;
    for(int i=1;i<=n;i++) ans=max(ans,f[i]);

    cout<<ans<<endl;
    return 0;
    
}