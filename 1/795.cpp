#include<iostream>
using namespace std;

const int N=1e5+10;
int a[N],b[N];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        b[i]=b[i-1]+a[i-1];
    }
    while (m--)
    {
      int l,r;
      cin>>l>>r;
      cout<<b[r]-b[l-1]<<endl;
    
    }
    return 0;
    
}