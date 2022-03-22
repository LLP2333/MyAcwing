#include<iostream>
using namespace std;

const int N=1e5+10;
int A[N],B[N],C[N];

int ked(int a[],int b[],int c[],int  cnt)
{
    int t=0;//t表示进位
    for(int i=1;i<=cnt;i++)
    {
        t+=a[i]+b[i];//进位加上a[i]和b[i]
        c[i]=t%10;
        t/=10;
    }
    if(t) c[++cnt]=1;//如果t==1，说明还有进位，要补上。如4+9=13，一位数相加变二位数
    return cnt;


}



int main()
{
    string a,b;
    cin>>a>>b;
    int cnt1=0;
    for(int i=a.size()-1;i>=0;i--)//倒着读的 注意i>=0
    {
        A[++cnt1]=a[i]-'0';
    }
    int cnt2=0;
    for(int i=b.size()-1;i>=0;i--)//倒着读的  注意i>=0
    {
        B[++cnt2]=b[i]-'0';//ascii差值就是真实的数的值

    }
    int tot =ked(A,B,C,max(cnt1,cnt2));//
    for(int i=tot;i>0;i--)
    {
        cout<<C[i];
    }


    return 0;
}