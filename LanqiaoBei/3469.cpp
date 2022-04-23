#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    string s;
    int sum=0;
    for(int i=1;i<=5;i++)
    {
       cin>>s;
       if(s[0]==s[2]&&(s[1]+1==s[3]))
       {
           sum++;
       }
    }
    cout<<sum<<endl;
    return 0;
    

}