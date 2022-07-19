#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
typedef long long LL;
const int N=1e5+10;
int a[N];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)  scanf("%d",&a[i]);
    sort(a,a+n);
    
    LL res=0;
    for(int i=0;i<n-1;i++)//为什么i<n-1，因为最后一个没有等待时间（没有人等最后一个人）
    {
        res+=a[i]*(n-i-1);//核心代码
    }
    cout<<res<<endl;
    return 0;
}