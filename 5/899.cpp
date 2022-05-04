#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
const int N=15,M=1010;

int n,m;
int f[N][N];
char str[M][N];

int edit_distance(char a[],char b[])
{
    int la=strlen(a+1),lb=strlen(b+1);
    for(int i=0;i<=la;i++) f[i][0]=i;
    for(int j=0;j<=lb;j++) f[0][j]=j;//初始化



    for(int i=1;i<=la;i++)
    for(int j=1;j<=lb;j++)
    {
        f[i][j]=min(f[i-1][j]+1,f[i][j-1]+1);
        f[i][j]=min(f[i][j],f[i-1][j-1]+(a[i]!=b[j]));
    }

    return f[la][lb];
}


int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)  scanf("%s",str[i]+1);//str[M][N]每一行存一个字符串

    while (m--)
    {
       char s[N];
       int limit;
       scanf("%s%d",s+1,&limit);
       int res=0;
       for(int i=0;i<n;i++)//遍历个字符串
       {
           if(edit_distance(str[i],s)<=limit)//判断需要操作的次数是否小于限制次数
           res++;
       }
       printf("%d\n",res);
    }
    
    return 0;

}