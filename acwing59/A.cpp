#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=110;
int a[N];
int s,x,n;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
        if(x>=0)
        x=min(0,s);
        else
        x=min(x,s);
    }

    cout<<s-x;
    return 0;
}