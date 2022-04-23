//838. 堆排序
//堆其实就是完全二叉树，该题要用小根堆
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

const int N=1e5+10;
int H[N],Hsize;

void down(int u)
{
    int t=u;//t保存的是三个节点最小值的位置
    if(u*2<=Hsize&&H[u*2]<H[t])  t=u*2;
    if((u*2+1)<=Hsize&&H[u*2+1]<H[t])  t=u*2+1;
    if(t!=u)
    {

     swap(H[t],H[u]);
     down(t);//交换数值后继续递归


    }
    


}

void up(int u)
{
    while (u / 2 && H[u] < H[u / 2])
    {
        swap(H[u], H[u/2]);
        u >>= 1;
    }
}

int main()
{

    int n,m;
    scanf("%d%d",&n,&m);
    Hsize=n;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&H[i]);
       // Hsize++;
    }

    for(int i=n/2;i>0;i--)
    {
        down(i);
    }

    //输出  注根节点最小
    while (m--)
    {
       printf("%d ",H[1]);
       H[1]=H[Hsize--];
       down(1);
    }
    system("pause");
    return 0;
    

}