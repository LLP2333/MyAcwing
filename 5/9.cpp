#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=110;
int f[N],v[N],w[N];
int n,m;

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)//枚举分组
    {
        int s;
        cin>>s;
        for(int j=1;j<=s;j++) cin>>v[j]>>w[j];
        for(int j=m;j>=0;j--)//枚举质量
        {
            for(int k=1;k<=s;k++)//枚举分组中第几个
            if(j>=v[k])
            f[j]=max(f[j],f[j-v[k]]+w[k]);
        }
    }

    cout<<f[m]<<endl;
    return 0;


}