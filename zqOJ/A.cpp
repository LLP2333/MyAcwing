#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int n;
long long int a,b,x;


int main()
{
    cin>>n;
    scanf("%lld%lld",&a,&b);
    if(a<b)
    {
        swap(a,b);
    }
    for(int i=3;i<=n;i++)
    {
        scanf("%lld",&x);
        if(x>b)
        {
            swap(b,x);
        }
        if(a<b)
        {
            swap(a,b);
        }

    }
    cout<<(a+b)<<endl;
    return 0;
}