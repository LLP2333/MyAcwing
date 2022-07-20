#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
using namespace std;
typedef pair<int,int> PII;
const int N=1e5+10;
PII a[N];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        a[i].first=x+y;
        a[i].second=y;

    }
    sort(a,a+n);
    long long res=-1e18,sum=0;
    for(int i=0;i<n;i++)
    {
        sum-=a[i].second;
        res=max(res,sum);
        sum+=a[i].first;
    }
    cout<<res<<endl;
    return 0;

}