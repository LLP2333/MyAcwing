#include<iostream>
#include<cstring>
#include<cstdio>
#include<math.h>
#include<algorithm>
using namespace std;
const int N=1010,M=4;
int a[N][M];
int w[N];
int st[N];
int x,y;
float z;//表示的业务量
float MA;//最大业务量
int LMA=1636;
int v[N];//分别表示物品的重量和价值

int main()
{

    //读入数据
    for(int i=1;i<=LMA;i++)
    {
       cin>>x>>y>>z;
       a[i][1]=x,a[i][2]=y,w[i]=z;
       MA+=z;
    }

     int sum=0;
    for(int i=1;i<LMA;i++)
    {
        for(int j=0;j<=2;j++)
        {
            if(j==1&&st[i]==0)
            {
                st[i]==1;
                sum+=w[i];
                for(int t=1;t<=LMA;t++)
                {
                    if(sqrt(   pow((a[t][1]-a[i][1]),2) +pow((a[t][2]-a[i][2]),2)  )<=10&&st[t]==0)
                    {
                        st[t]=1;
                        sum+=w[t];
                    }
                }


            }
            if(j==2&&st[i]==0)
            {
                 st[i]==1;
                sum+=w[i];
                for(int t=1;t<=LMA;t++)
                {
                    if(sqrt(   pow((a[t][1]-a[i][1]),2) +pow((a[t][2]-a[i][2]),2)  )<=30&&st[t]==0)
                    {
                        st[t]=1;
                        sum+=w[t];
                    }
                }


            }
        }
    }


    cout<<sum;
    
 


    return 0;
    
}