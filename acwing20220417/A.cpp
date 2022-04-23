#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=40;
int a[N];
char s[1010];

int main()
{
    cin.getline(s,1010);
    for(int i=0;i<100;i++)
    {
       // cout<<s[i];
        if(s[i]<='z'&&s[i]>='a')
        a[s[i]-'a']++;
    }
    int sum=0;
    for(int i=0;i<N;i++)
    {
       // cout<<a[i]<<endl;
        if(a[i]>0)
        sum++;
    }
    cout<<sum<<endl;
    return 0;
   

}