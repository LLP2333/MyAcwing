#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n;
string s;
int main()
{
    cin>>n;
    for(int i=0;i<=n+1;i++)
    {
      
      getline(cin,s);
       char x;
       
       int res=0;
      
       if(s.size()>32)
       {
        cout<<"CE"<<endl;
        continue;
       }

       for(i=0;i<s.size();i++)
       {
        x=s[i];
      
        if(!((x>='0'&&x<='9')||(x>='a'&&x<='z')||(x>='A'&&x<='Z')||x=='_'||x=='$'))
       {
        res=1;
       }
       }

        if(res==1)
        {
            cout<<"CE"<<endl;
            
        }
        else
        cout<<"OK"<<endl;
       
    }
    system("pause");
    return 0;
}