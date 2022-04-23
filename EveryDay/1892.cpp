#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a,b,n;//意思如题


int main()
{
    cin>>a>>b>>n;
    int mi=1010;//最终费用初始化最大值
    for(int i=0;i<n;i++)
    {
        int x,y,t,s=0;//x,y分别为费用和城市数
        cin>>x>>y;
        int res=0;
        for(int j=0;j<y;j++)
        {
            cin>>s;
            if(s==a) res++;//a存在
            if(s==b&&res>0)  mi=min(mi,x);//b存在且在a的后面
        }
        
    }
    if(mi<1010)
    cout<<mi<<endl;
    else
    cout<<"-1"<<endl;


    return 0;
}