#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int n,m;
int main()
{
  cin>>n>>m;
  //int res=1;
      int j=1;
      while(j*m<=n)
      {
          n++;
          j++;
      }
      

      cout<<n<<endl;
      return 0;
  

}