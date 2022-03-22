#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1e5+10;
int a[N];

int fab(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    if(n>2)
        return fab(n-1)+fab(n-2);
}


int isfab(int m)
{
    int result=0;
    for(int i=0; fab(i)<m; i++)
    {
        if(fab(i+1)==m)
        {
            result=1;
            break;
        }
        else
            result=0;

    }
    return result;
}


int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      if(isfab(i)==1)
      {
        cout<<"O";
      }
      else 
      cout<<"o";

  }
  return 0;


}