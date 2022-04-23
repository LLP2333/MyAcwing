#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1e5+10;
int a[N];

int main()
{
    long long int n;
    cin>>n;
    long long int res=1;
    for(long long int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int s=0;
            while (n%i==0)
            {
                s++;
                n/=i;
            }
            if(s%2)  res *=i;
            
        }
    }
    if(n>1) res *=n;
    cout<<res;
    return 0;

  
}