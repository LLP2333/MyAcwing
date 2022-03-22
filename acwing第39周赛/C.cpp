#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=2e5+10;


struct 
{
    string a;
    bool t;
}m[N];
int n;


bool pare(string a,string b)
{
    // string c;
    // if(a.size()>b.size())
    // {
    //     c=a;
    //     a=b;
    //     b=c;
    // }
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                return false;
            }
        }

    }
    return true;
}



int main()
{

    cin>>n;
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>m[i].a;
        m[i].t=true;
    }

     for(int i=0;i<n;i++)
     {
       if(m[i].t==true)
       {
           for(int j=0;j<n;j++)
           {
               if(m[j].t==true)
               {
                   m[j].t=pare(m[i].a,m[j].a);
                   x++;
               }
           }
       }

     }

     cout<<n<<x<<endl;
     system("pause");
     return 0;



}