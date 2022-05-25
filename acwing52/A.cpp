#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n;

int main()
{
    cin>>n;
    int sum=0;
    int t=0;
    int  i=1;
     while (n>0)
     {
         t=(i+1)*i/2;
         n=n-t;
         i++;
        if(n>=0) sum++;
     }
     

    cout<<sum<<endl;
    return 0;
}