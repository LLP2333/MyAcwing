#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int x,y,m;

int main()
{
    cin>>x>>y>>m;
    int res;
    int m1,m2;
     int ma=0;
         for(int j=0;j*y<=m;j++)
         {
             for(int i=0;i*x+j*y<=m;i++)
             {
                 res=i*x+j*y;
                //  cout<<i<<" "<<j<<endl;
                //  cout<<res<<endl;
                //  cout<<"ma="<<ma<<endl;
                 ma=max(ma,res);
             }
         }
     
     
    cout<<ma<<endl;
    
     return 0;


}