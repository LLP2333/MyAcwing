#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
const int N=110;
int a[N];
int n;


int main()
{
    cin>>n;
    int t=0;
    int x;
    for(int i=0;i<n;i++)
    {
        while (cin>>x)
        {
            a[t]=x;
            t++;
            char ch=getchar();
            if(ch=='\n') break;
            
        }
        
    }
    sort(a,a+t);
    

    for(int i=0;i<t-1;i++)
    {
        cout<<a[i]<<',';
    }
    cout<<a[t-1];
    system("pause");
    return 0;



}