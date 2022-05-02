#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=510,M=1e5+10;

bool st[N];
int e[M],ne[M],h[N],idx;
int match[N];
int n1,n2,m;

void add(int a,int b)
{
    e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
bool find(int x)
{
    for(int i=h[x];i!=-1;i=ne[i])
    {
        int j=e[i];
        if(!st[j])
        {
            st[j]=true;
            if(x==match[j])  continue;
            if(match[j]==0||find(match[j]))
            /* 当前的男生2找的女生1没有男朋友，他们在一起。如果当前的男生2找的女生1有男朋友1，
            就去看这个女生1的男朋友1能不能换一个对象比如说女生2，
            执行find(match[j]),在find()内第一次循环男生1应该还是会遍历到女生1，当男生1遍历到女生1时，
            由于match[j]的值等于男生1，
            if(match[j]==0||find(match[j]))前半部分为false
            又执行find(match[j]),不是陷入循环了吗，为什么还是能正常运行，得出正确结果？

            我想的是加一条判断语句，if(x==match[j])  continue;
            如果男生之前和这个女生在一起了，就跳过这次循环，找下一个女生*/
            {
                match[j]=x;
                return true;

            }
        }
    }
    return false;

}

int main()
{
    memset(h,-1,sizeof h);
    cin>>n1>>n2>>m;
    while (m--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        add(a,b);
    }
    int res=0;
    for(int i=1;i<=n1;i++)
    {
        memset(st,false,sizeof st);
        if(find(i))
        res++;
    }

    cout<<res<<endl;
    return 0;
    


}