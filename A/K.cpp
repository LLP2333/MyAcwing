#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int n,m;
int a[300];

int main()
{
    cin>>n;
    int t=0;
    int sum=0;
    for(int i=0;i<n;i++)//n组
    {
        cin>>m;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
               scanf("%d",&t);
               if(t>=1)
               {
                   a[j]=1;
               }
            }
            
        }
       
        for(int i=0;i<m;i++)
        {
            if(a[i]==1)
            {
                sum++;
            }
        }
 
        if(sum==m)
        cout<<"嗨害! "<<endl;
        else 
        cout<<"NO"<<endl;
        sum=0;
        for(int i=0;i<m;i++)
        {
            a[i]=0;
        }
    }
    system("pause");

    return 0;
}