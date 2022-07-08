//区间选点
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

const int N=1e5+10;
int n;
struct Range
{
    int l,r;
    bool operator< (const Range &w)const
    {
        return r<w.r;
    }
}range[N];


int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        range[i]={l,r};
    }
    sort(range,range+n);
    int res=0,ed=-2e9;//ed表示上一个右端点
    for(int i=0;i<n;i++)
    {
        if(range[i].l>ed)
        {
            res++;
            ed=range[i].r;
        }
    }
    printf("%d",res);
    return 0;
}
