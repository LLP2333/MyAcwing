#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=1e5+10;
int n;
bool a[N];

int main()
{

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int t;
        scanf("%d",&t);
        a[t]=true;
    }
    for(int i=1;i<=n;i++)
    {
        if(!a[i])
        cout<<i<<endl;
    }
    return 0;
    
}

