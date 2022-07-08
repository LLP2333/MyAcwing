#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string s;

int main()
{
    cin>>s;
    if(s.size()==1&&s[0]>='0'&&s[0]<='9')
    {
       // cout<<"hello"<<endl;
        if(s[0]>'4'&&s[0]<'8')
        s[0]='9'-s[0]+48;
        cout<<s[0]<<endl;
        return 0;
    }
       if(s[0]>='5'&&s[0]<'9')  s[0]='9'-s[0]+48;
    for(int i=1;i<s.size();i++)
    {
        
        if(s[i]>='5'&&s[i]<='9')  s[i]='9'-s[i]+48;
    }
    cout<<s<<endl;
return 0;
}