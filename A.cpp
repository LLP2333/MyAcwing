#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string add(string a, string b) {
  // 补充具体实现
  //string c;
  if(b.size()<a.size())
  swap(a,b);
  int mi=min(a.size(),b.size());
  for(int i=0;i<a.size();i++ )
  {
      if(a[i]>=97)
      a[i]=a[i]-87;
  }
  for(int i=0;i<b.size();i++ )
  {
      if(b[i]>=97)
      b[i]=a[i]-87;
  }
  int res=0;
  
  if(mi==a.size())
  {
      for(int i=mi-1;i>=0;i--)
      {
        
              b[i]=(a[i]+b[i])%36;
              if(i>0)
              b[i-1]=b[i-1]+(a[i]+b[i])/36;
              else
               if(i==0&&(a[i]+b[i])>36)
               res=1;          
              
          

      }

      for(int i=0;i<b.size();i++)
      {
          if(b[i]>9)
          b[i]+=87;
      }
      if(res==0)
      {
          cout<<b;
      }
      else
      cout<<"1"<<b;
     // return 0;
  }
  

}



int mian()
{
    string a,b;
    cin>>a>>b;
    add(a,b);
    return 0;

}
