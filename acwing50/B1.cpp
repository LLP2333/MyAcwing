#include<iostream>
#include<cstring>
#include<algorithm>
#include<math.h>
using namespace std;
const int N=2e5+10;
#include<queue>
typedef  pair<int,int> PII;
PII a[N],b[N];
int n,m;


int  main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x,y;
       // cin>>x>>y;
        scanf("%d%d",&x,&y);
        a[i]=make_pair(x,y);
    }
    cin>>m;
      for(int i=1;i<=m;i++)
    {
        int x,y;
       //cin>>x>>y;
        scanf("%d%d",&x,&y);
        b[i]=make_pair(x,y);
    }
    double ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i].second<b[j].first)
            ans=max(ans,fabs(a[i].second-b[j].first));
            if(a[i].first>b[j].second)
            ans=max(ans,fabs(a[i].first-b[j].second));


        }
    }

    cout<<ans<<endl;



}