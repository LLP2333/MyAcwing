#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=10;
int path[N];//保存序列
int state[N];//数字是否被用过
int n;

void dfs(int u)
{

    if(u>n)//数够了就输出
    {
        for(int i=1;i<=n;i++)
        {
            cout<<path[i]<<' ';

        }
        cout<<endl;
    }


    for(int i=1;i<=n;i++)
    {
        if(!state[i])//数字i未被使用
        {
            path[u]=i;
            state[i]=1;
            dfs(u+1);
            state[i]=0;//回溯状态


        }
    }


}




int main()
{

cin>>n;
dfs(1);


system("pause");
return 0;


}