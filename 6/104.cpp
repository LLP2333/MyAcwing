#include<algorithm>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
const int N=1e5+10;
int q[N];
int n;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)  scanf("%d",&q[i]);
    sort(q,q+n);
    
    int mid=q[n/2];//n个数字
    long long  res=0;
    for(int i=0;i<n;i++)
    {
     res+=abs(q[i]-mid);   
    }
   // cout<<mid<<endl;
    cout<<res<<endl;
    return 0;
}