#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=110;
int a[N];
int n;


int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        sum=sum+a[i];
        else sum=sum-a[i];
    }
    cout<<sum;

    system("pause");
    return 0;
}