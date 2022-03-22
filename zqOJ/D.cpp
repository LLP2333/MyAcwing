#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int t;
long long int t1,t2;
long long int a(int i)
{
    return 60*i-10;
}
long long int b(int i)
{
    return 60*(i-1);
}



int main()
{
    cin>>t;
    long long int h=0,min=0;
   long long int q,w;
    while (t--)
    {
        scanf("%lld%lld",&t1,&t2);
        //auto x=t1;
        int i=1;
        while(a(i)<=t2)
        {
            if(b(i)+1>=t1&&a(i)<=t2)
            {
               // cout<<"biai"<<b(i)<<" "<<a(i)<<endl;
                h=h+1;
               // cout<<h<<endl;
            }else if(b(i)+1<t1&&a(i)>t1)
            {
                min=min+a(i)-t1+1;
            }
            i++;
            
        }
       long long int l=t2%60;
        q=(50*h+min+l)/60;
        w=(50*h+min+l)%60;
        //cout<<h<<" "<<min<<" "<<l<<" "<<endl;
        if(w>0)
        {
           cout<<q<<"小时"<<w<<"分钟"<<endl;
        }
        else
        cout<<q<<"小时"<<endl;

        h=0;

        
    }
    system("pause");
    return 0;
    
    
}