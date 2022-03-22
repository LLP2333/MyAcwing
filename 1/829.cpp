#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=1e5+10;
int q[N];


int main()
{
    int m;
    cin>>m;
    int hh=0,tt=-1;//hh为头指针，tt为尾指针
    while (m--)
    {
        string op;
        int x;
        cin>>op;
        if(op=="push")
        {
            cin>>x;
            q[++tt]=x;
          
        }
        else if (op=="pop")
        {
            hh++;
        }
        else if (op=="empty")
        {
            if(hh>tt)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if(op=="query")
        {
            printf("%d\n",q[hh]);
        }
        
        

    }
    


    return 0;
}