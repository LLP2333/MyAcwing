#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                //cout<<i<<j<<k<<endl;
                if(i<=j&&j<=k&&(i^j^k)==0&&i+j>k&&i+k>j&&j+k>i)
                {
                    sum++;
                   //cout<<"abc"<<i^j^k<<endl;
                }
            }
        }
    }

    cout<<sum<<endl;
    system("pause");
    return 0;
}