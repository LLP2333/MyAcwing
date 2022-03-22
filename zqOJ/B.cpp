#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int n;
string s;
int  a,b;


int main()
{
scanf("%d",&n);
cin>>s;
cin>>a>>b;    
int y=s[a],x;
if(s[a-1]==s[b-1])
{
    cout<<"0"<<endl;
}
else
{
    cout<<"1"<<endl;
}



system("pause");
return 0;

}