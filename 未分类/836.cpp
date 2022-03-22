#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=1e5+10;
int q[N],siz[N];
  int find(int x)
  {
      if(q[x]!=x)
      {
          q[x]=find(q[x]);
      }
      return q[x];
  }
  int n,m;
  




int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        q[i]=i;
        siz[i]=1;
    }
    string x;
    int a,b;
    while (m--)
    {
        cin>>x;
        if(x.compare("C")==0)
        {
            cin>>a>>b;
            a=find(a);
            b=find(b);
            if(a!=b)
            {

              q[a]=b;
              siz[b]+=siz[a];
            }
               
             
        
           
        }
        else if(x.compare("Q1")==0)
        {
            cin>>a>>b;
            a=find(a);
            b=find(b);
            if(a==b)
            {
                cout<<"Yes"<<endl;
            }
            else  
            {
                cout<<"No"<<endl;
            }
        }
        else if(x.compare("Q2")==0)
        {
            cin>>a;
            cout<<siz[find(a)]<<endl;
        }
    }
    
    

    system("pause");
    return 0;
}