#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n,k;
string s;


int  main()
{
    cin>>n>>k;
    cin>>s;
    int t=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='G')
        {
           
            if(s[i]=='E'&&t<k)
            {
                t++;
            }
            if(t=k)
            {
                
            }



        }
        
        


    }



}