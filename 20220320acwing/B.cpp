#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=210;
int a[N];
int t,n,k;

int main()
{
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        int cha=0;
        for(int i=1;i<=k;i++)
        {
            cin>>a[i];
            if(i>=2)
            {
                cha=max(cha,a[i]-a[i-1]-1);
            }
        }
        if(cha%2==1)
        {
            cha=(cha+1)/2;
        }
        else
        {
            cha=cha/2;
        }
        int tim;
        tim=max(cha,a[1]-1);
        tim=max(tim,n-a[k]);
        cout<<tim+1<<endl;

        for(int i=1;i<=k;i++)
        {
            a[i]=0;
        }
    }
    

    return 0;
}