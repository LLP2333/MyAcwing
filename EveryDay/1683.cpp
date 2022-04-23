#include<iostream>//困牛放牧
#include<cstring>
#include<algorithm>
using namespace std;
int a,b,c;
int mi,ma;

int main()
{
    cin>>a>>b>>c;
    
    if((b-a)==1&&(c-b)==1)
    {
        cout<<"0"<<"\n"<<"0"<<endl;
        return 0;
    }
    if((b-a)==2||(c-b)==2)
    cout<<"1"<<endl;
    else
    cout<<"2"<<endl;

    ma=max((b-a),(c-b))-1;
    cout<<ma<<endl;
    return 0;
    


}