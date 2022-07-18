#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
const int N=110;
int a[N];

int main()
{
    string s;
    cin>>s;
    int si=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            a[si]=s[i]-'0';
            si++;
        }
    }

    int w=0;
    if(si%2==0)
    w=si-1;
    else
    w=si-2;
    for(int i=0;i<w;i=i+2)
    {
        // int temp=0;
        // temp=a[i];
        // a[i]=a[i+1];
        // a[i+1]=temp;
        swap(a[i],a[i+1]);

    }
    for(int i=0;i<si-1;i++)
    {
        cout<<a[i]<<',';
    }
    cout<<a[si-1];
    system("pause");
    return 0;
    
}