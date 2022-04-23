//二进制中一的个数
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
int n;

int lowbit(int x)
{
   return x&-x;
}

int main()
{
    cin>>n;
   
    while (n--)
    {
         int x;
        int res=0;//计数
        cin>>x;
        while (x)
        {
            x=x-lowbit(x);
            res++;

        }
        printf("%d ",res);
        
    }

    return 0;
    


}