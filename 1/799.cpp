#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=1e5+10;
int a[N],s[N];//a[N]存储序列，s[N]下标i，为序列的数，s[i]为序列出现的次数
int n;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int res=0;//初始化  区间不重复最大长度

    for(int i=1,j=1;i<=n;i++)
    {
        s[a[i]]++;
        while (s[a[i]]>1)//不需要判断j<=i，因为j>i的时候，区间为空，也就不存在重复元素
        {
            s[a[j]]--;
            j++;
        }
        res=max(res,i-j+1);

        
    }
    cout<<res<<endl;
    return 0;

}