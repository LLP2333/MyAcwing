#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=100003;
int h[N],e[N],ne[N],idx;

int insert(int x)
{
    int k=(x%N+N)%N;
    e[idx]=x;
    ne[idx]=h[k];
    h[k]=idx++;
}

bool find(int x)
{

    int k=(x%N+N)%N;
    for(int i=h[k];i!=-1;i=ne[i])
    {
        if(e[i]==x)
        return true;
    }

    return false;
}




int main()
{
    int n;
    scanf("%d",&n);

    memset(h,-1,sizeof(h));
    while (n--)
    {
        char a;
        int x;
        cin>>a>>x;
        if(a=='I')
        {
         
            insert(x);

        }
        else if(a=='Q')
        {
           
            if(find(x)) cout<<"Yes"<<endl;
            else    cout<<"No"<<endl;

        }
    }



    return 0;

    
}