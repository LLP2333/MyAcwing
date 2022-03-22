#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


const int N=1e3+10;

struct 
{
    string a;//第一个字符串
    string b;//第二个字符串
    bool t;//标记是否存在
}m[N];
int n;




int main()
{
  //读入数据
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m[i].a>>m[i].b;
        m[i].t=true;
    }

    int x=0;//记录合并的次数

    for(int i=0;i<n;i++)
    {
        if(m[i].t==true)
        {
          for(int j=0;j<n;j++)
        {
            if(m[i].b.compare(m[j].a)==0)
            {
                 m[j].t=false;
                 m[i].b=m[j].b;
                 x++;
            }
        }

        }
        
    }

    cout<<n-x<<endl;
    for(int i=0;i<n;i++)
    {
        if(m[i].t==true)
        {
            cout<<m[i].a<<' '<<m[i].b<<endl;
        }
    }
    
    system("pause");
    return 0;


}