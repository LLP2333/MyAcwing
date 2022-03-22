#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int N=1e5+10;
int f[N];
int n,m,c;
int a,b;


struct B
{
    int x,y,z;
}B[N];

int main()
{
    memset(f,0x3f,sizeof f);
    cin>>n>>m>>c;
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d%d",&B[i].x,&B[i].y,&B[i].z);
       // cout<<B[i].x<<endl;

    }

    cin>>a>>b;//从a到b
   f[b]=min(a,b)*c;
   //cout<<f[b]<<endl;
   for(int i=1;i<=m;i++)
   {
      if(min(a,B[i].x)*c+B[i].z+min(B[i].y,b)<f[b])
      {
          f[b]=min(a,B[i].x)*c+B[i].z+min(B[i].y,b);
          cout<<f[b]<<"guiu"<<endl;
          a=B[i].y;

      }
   }
   cout<<f[b];
   system("pause");
    return 0;
} 