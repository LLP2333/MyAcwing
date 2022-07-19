#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=1e5+10;
struct Range
{
int l,r;
bool operator <(const Range &w)const
{
   return l<w.l;
}
}range[N];

int main()
{
    int st,ed;
    cin>>st>>ed;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        range[i].l=l,range[i].r=r;
    }
    sort(range,range+n);
    
    int res=0;
    bool success = false;
    for(int i=0;i<n;i++)
    {
        int j=i,r=-2e9;
        while (j<n&&range[j].l<=st)
        {
            r=max(r,range[j].r);
            j++;//更新j;
        }
        if(r<st)//必须是小于
        {
            res=-1;
            break;
        }
        res++;
        if(r>=ed)
        {
            success = true;
            break;
        }
        
        i=j-1,st=r;//更新
        
    }

  if (!success) res = -1;
    printf("%d\n", res);


    return 0;

}
