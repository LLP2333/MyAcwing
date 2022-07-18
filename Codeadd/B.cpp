#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n;
string s;
const int N=1e5;
char a[N];


int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin.getline(a,N);
      cout<<a<<endl;
    }
    system("pause");
    return 0;
}