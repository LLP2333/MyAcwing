#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n;

int main()
{
    int ans=0;
    cin>>n;
    while (n--)
    {
        /* code */
        int x,y;
        cin>>x>>y;
        if(y-x>=2)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}

