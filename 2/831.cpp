#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1e6+10,M=1e5+10;
int ne[M];
char s[N],p[M];
int n,m;

int main()
{
    cin>>n>>p+1>>m>>s+1;
    
    //ne[M]数组
    for(int i=2,j=0;i<=n;i++)
    {
        while(j&&p[i]!=p[j+1]) j=ne[j];

        if(p[i]==p[j+1]) j++;
        ne[i]=j;
    }
    //匹配
    for(int i=1,j=0;i<=m;i++)
    {
        while(j&&s[i]!=p[j+1]) j=ne[j];
        
        if(s[i]==p[j+1])  j++;

        if(j==n)
        {
            cout<<i-n<<" ";
            j=ne[j];
            /*去掉printf()最后的 j = ne[j] 也正确，您能说下什么情况必须加上j=ne[j] 呢
                 emmm,这样可以减少复杂度啊,一串匹配成功了了,但是后面的匹配成功的字符也可能有一部分在这段匹配成功的串里面;
                 例如
                 abababab
                 abab
                 匹配成功
                 然后可以直接这样
                 abababab
                 ···abab


                 还可以防止下一轮匹配时j+1越界
              */
        }
    }

return 0;


}