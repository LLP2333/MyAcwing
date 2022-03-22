#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1e5+10;
int st[N];
int tt=0;
int x,m;


int main()
{
    cin>>m;
    string s;
    while (m--)
    {
        cin>>s;
        if(s.compare("push")==0)
        {
            cin>>x;
            st[++tt]=x;
        }
        else if(s.compare("pop")==0&&tt>0)
        {
            tt--;
        }
        else if(s.compare("empty")==0)
        {
             if(tt==0)
             cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
        }
        else 
        {
            cout<<st[tt]<<endl;
        }
        
    }
    


    return 0;
}