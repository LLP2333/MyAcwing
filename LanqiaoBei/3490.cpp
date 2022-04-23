#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int sum=0;
  for(int  i=n-1;i>=1;i--)
  {
      if((i*i%n)>(n/2.0))
      {
              ++sum; 
      }
  }

  cout<<sum;
  return 0;

}