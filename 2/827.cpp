#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1e5+10;

int e[N],l[N],r[N],idx;

void init()
{
    l[1]=0;//尾节点指向头节点
    r[0]=1;//头节点指向尾节点
    idx=2;//已经有0，1这两个节点了,0是最左端，1是最右端
}

void insert(int a,int x)//在a右边插入，插入的值为x
{
    e[idx]=x;
    l[idx]=a,r[idx]=r[a];
    l[r[a]]=idx,r[a]=idx;
    idx++;

}

void remove(int a)
{
    r[l[a]]=r[a];
    l[r[a]]=l[a];
}


int main()
{
    int m;
    int k,x;
    string s;
    init();//初始化
    cin>>m;


    while (m--)
    {
        cin>>s;
        if(s=="L")
        {
            cin>>x;
           insert(0,x);
        }
        else if(s=="R")
        {
            cin>>x;
            insert(l[1],x);
        }
        else if(s=="D")
        {
            cin>>k;
            remove(k+1);//第一个点的下标为1
        }
        else if(s=="IL")
        {
            cin>>k>>x;
            insert(l[k+1],x);
        }
        else
        {
            cin>>k>>x;
            insert(k+1,x);
        }
    }

    for(int i = r[0]; i != 1; i = r[i]) cout << e[i] << ' ';

    return 0;
    

}