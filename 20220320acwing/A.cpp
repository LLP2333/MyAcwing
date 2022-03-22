#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string decstr2hexstr(string str)
{
    uint32_t num = std::stoul(str);
    string ret;
    for(int i = 3; i >= 0; --i)
    {
        ret.push_back("0123456789ABCDEF"[(((uint8_t*)&num)[i] >> 4) & 0xF]);
        ret.push_back("0123456789ABCDEF"[((uint8_t*)&num)[i] & 0xF]);
    }
    return ret;
}

int main()
{
    string x,y;
    cin>>x;
    if(x=="0")
    {
        cout<<"1"<<endl;
        return 0;
    }
    y=decstr2hexstr(x);
    //cout<<y<<endl;
    int n=0,sum=0;
    for(int i=0;i<8&&y[i]=='0';i++)
    {
        n++;
    }
    for(int i=n;i<8;i++)
    {
        if(y[i]=='8'||y[i]=='B')
        {
            sum=sum+2;
        }
        else if(y[i]=='0'||y[i]=='4'||y[i]=='6'||y[i]=='9'||y[i]=='A'||y[i]=='D')
        {
                sum=sum+1;
        }
    }
    cout<<sum<<endl;
    
   // system("pause");

    return 0;
}