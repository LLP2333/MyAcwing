#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n,k;
const int N=2e5+10;
int a[N][1],b[N];
//初始都为反面

int main()
{
    cin>>n>>k;
    int res=0;//正面数
    for(int i=1;i<=n;i++)
    {
        cin>>a[i][0];
        
    }
    for(int i =1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i][0]<=b[i])//正面<=反面
        {
            a[i][1]=1;//正面
            res++;
            
        }
    }
    
    
        while (res<k)
        {
            int mi=1e5;
         int f;
        for(int i=1;i<=n;i++)
        {
            if(a[i][1]==0&&mi>=b[i])
            {
                mi=b[i];
                f=i;
            
            }
           

            
        }
        a[f][1]=1;
        res++;
        }
        cout<<k<<res<<endl;
        
         int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i][1]==0)
        {
            cout<<"b[]"<<b[i]<<endl;
            sum+=b[i];
        }
        else
        {
            cout<<"a"<<a[i][0]<<endl;
            sum+=a[i][0];
        }
    }


    cout<<res<<endl;
    cout<<sum<<endl;
    system("pause");
    return 0;
  

}
