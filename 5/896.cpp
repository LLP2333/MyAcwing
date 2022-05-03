#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=1e5+10;
int n;
int a[N],q[N];//q[i]表示长度为i的的序列的结尾最小元素

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    int len=0;
   // q[0]=-2e9;//q[0]小于所有数，所以无论后面的数是啥都能插在q[0]的后面（看别人说的），但是我发现好像没什么用，mid不可能等于0,
    for(int i=1;i<=n;i++)  //i从1到n
    {
        int l=0,r=len;
        while (l<r)
        {
            int mid=l+r+1>>1;
            if(q[mid]<a[i]) l=mid;//找右边
            else r=mid-1;//找左边
            
        }//l==r循环退出，找到比a[i]小q[l]或者q[r]
        len=max(len,r+1);//果a[i]比q[len]大的话,那么最大的最长上升子序列的值应当加1;
        q[r+1]=a[i];//更新一下  q[r+1]>=a[i]
        
    }


    printf("%d\n",len);
   

 


    return 0;
    
}