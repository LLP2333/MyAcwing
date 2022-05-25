#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
const   int N=7;
int n;
int f[N];
int a[N];

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
         int y;
        cin>>x>>y;
        f[x]=y;

    }

    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i]-=f[j];
        }
        a[i]+=f[i]*6;
        if(i==6)
        {
            cout<<a[i];
              system("pause");
            return 0;
        }
        cout<<a[i]<<" ";

    }
  
    return 0;

    


}