#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=110;
int person[N];//persion[i] i为第i个小朋友，p[i]==1，说明出局
int a[N];//a[i] i为游戏论，a[i]为次数 
int n,k;

int main()
{
    int  sum;
  cin>>n>>k;
  sum=n;//初始游戏人数
  for(int i=1;i<=k;i++)  cin>>a[i];
  int tou=1;
  int i=1;
  int m;
  while (sum>0&&i<=k)
  {
      a[i]=a[i]%sum;
     for( m=tou+1;a[i]>0;m=(m+1)/n)
     {
         
         if(person[m]==0)
         a[i]--;
         //m=(m+1)/n;
     }
     person[m]=1;//出局
     cout<<m<<" ";
     while (a[(m+1)/n]!=0)
     {
         m++;
     }
     
     tou=m;
     ++i;
     sum--;
     cout<<"hello"<<endl;
      
  }

  system("pause");

  return 0;
  

}