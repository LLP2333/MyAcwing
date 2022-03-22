#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,k;
const int N=1e5+10;
int a[N];
int sum;


void  teet(int l,int r)
{
    if(l<r)
    {
     while (r-l+1!=m)
        {
            if(a[l]<=a[r])
            {
                l++;
            }
            else r--;
        }
        for(int i=l;i<=r;i++)
        {
            sum=sum+a[i];
        }
        teet(0,l-1);
        teet(r+1,n);

    }
    else if(l==r)
    {
        sum=sum+a[l];
        return;
    }


}


int main()
{
    int a[N];
    int ma=0;
    for(int i=1;i<=n;i++)
    {
       scanf("%d",&a[i]);
    }
    teet(0,n);
    cout<<sum<<endl;
    

    return 0;
}
// 0-n/k  n/k