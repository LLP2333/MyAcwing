#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
const int N=3000+10;
int a[N];

int main()
{

    int t=0;
    cin>>n;
    int max=0,min=3000;
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        max=max>x?max:x;
        min=min<x?min:x;

        a[x]++;
        //cout<<a[x];
    }
    // cout<<min<<max<<endl;
    for(int i=min;i<=max;i++)
    {
        // cout<<"h"<<endl;
        while(a[i]>1)
        {
            int j=i;
            for(;j<=3000;j++)
            {
               // cout<<"h"<<endl;
                if(a[j]==0&&a[i]>1)
                {
                  a[j]++;
                  a[i]--;
                  t=t+(j-i);
                }
             

            }
        }


    }
    cout<<t<<endl;

 system("pause");
    return 0;
}