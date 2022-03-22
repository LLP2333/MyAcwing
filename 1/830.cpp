#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=1e5+10;
int sta[N],tt;
int n;

int main()
{
    cin>>n;
    int x;
   for(int i=0;i<n;i++)
   {
       scanf("%d",&x);
       while (tt&&sta[tt]>=x) tt--;
       if(tt==0)
       {
           printf("-1 ");
       }
       else
       {
           printf("%d",tt);
       }
       sta[++tt]=x;
       
   }
   return 0;
    

}