#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

long n;
int x;

int main()
{
    cin>>n>>x;
    n=n%6;
    /*
    if(n==1&&x==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(n==2&&x==2)
    {
        cout<<"0"<<endl;
        return 0;
    }
  */
    int re=0;//偶数
    re=n%2;//如果是1,说明为奇数
    for(long i=n;i>0;i--)
    {
        if(re)
        {
            //cout<<x<<endl;
            if(x==1)
            {
                x=0;
            }
            else if(x==0)
            {
                x=1;
            }
            re=0;
           // cout<<x<<endl;
            
        }
        else
        {
            //cout<<x<<endl;
            if(x==1)
            {
                x=2;
            }
            else if(x==2)
            {
                x=1;
            }
            //cout<<x<<endl;
            re=1;
        }

    }

    cout<<x<<endl;
    system("pause");
    return 0;

}