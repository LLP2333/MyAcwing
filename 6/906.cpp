#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;
const int N=1e5+10;
int n;
struct Range
{
    int l,r;
    bool operator<(const Range &w )const
    {
        return   l<w.l;
    }
}range[N];



int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        range[i]={l,r};
    }

    sort(range,range+n);//按照左端点从小到大排序

    priority_queue<int ,vector<int>,greater<int>>  heap;//小根堆
     for(int i=0;i<n;i++)
     {
        auto r=range[i];
        if(heap.empty()||heap.top()>=r.l) heap.push(r.r);
        else
        {
            
            heap.pop();
            heap.push(r.r);
        } 
     }

     cout<<heap.size();
     return 0;

}


