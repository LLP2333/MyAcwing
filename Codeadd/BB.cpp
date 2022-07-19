#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=1e5+10;
int  a[N],b[N];
int n,x;
void check()
{
    for(int i=1;i<=x-1;i++)
    {
       int j=i+1;
       while (b[j]==1&&j<=x)
       {
        j++;
       }
       if(j>x) continue;
       else
       {
        b[i]=1,b[j]=1;
       }
       

    }
}

int main()
{
    cin>>n;
    for(int i=0;i<n;++i)
    {
        scanf("%d",&x);
      for(int j=1;j<=x;j++)
      {
        scanf("%d",&a[j]);
      }
        
    }


}