#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=2e5+10;
int a[N];
int t[N];
int b[N];
int n;



int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>t[i];
    int j=1;
  
    for(int i=1;i<=n;i++)
    {
        if(t[i]==0)
        {
           // cout<<t[i]<<endl;
            a[j]=i;//a[j]按顺序存的为0的坐标，从a[1]开始存
            j++;//j的值为a[j]的大小
        }
        
    }


    int  x,y;//
    int res=0;
    for(int w=2;w<j;w++)
    {
        
        int mid=(a[w]+a[w-1])/2;
     
        for(int i=a[w-1]+1;i<=mid;i++)
        {
            res++;
            b[i]=res;
          
        }
        res=0;
        for(int i=a[w]-1;i>=mid+1;i--)
        {
            res++;
            b[i]=res;
       
        }
        res=0;

    }
    res=0;
 
    for(int i=a[1]-1;i>=1;i--)
    {
        res++;
        b[i]=res;


    }
    res=0;

    for(int i=a[j-1]+1;i<=n;i++)
    {
        res++;
        b[i]=res;
    }


   for(int i=1;i<=n;i++)
    cout<<b[i]<<" ";
    return 0;


    

}