//835. Trie字符串统计
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1e5+10;
int son[N][26],cnt[N],idx;
char str[N];


void insert(char str[])
{
    int p=0;
    for(int i=0;str[i];i++)
    {
        int u=str[i]-'a';
        if(!son[p][u])
        son[p][u]=++idx;//son[p][u]存的是节点的顺序
        p=son[p][u];
    }

    cnt[p]++;//cnt[p]存的是相同字符串的个数

}
int query(char str[])
{
    int p=0;
    for(int i=0;str[i];i++)
    {
        int u=str[i]-'a';
        if(!son[p][u])  return 0;
        p=son[p][u];
    }

    return cnt[p];
}

int main()
{
    int n;
    cin>>n;

    while (n--)
    {
        char op[2];
        scanf("%s%s",op,str);
        //cin>>op[2]>>str[N];
        if(op[0]=='I') insert(str);
        else   cout<<query(str)<<endl;
    }
    
  return 0;

}