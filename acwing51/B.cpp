#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
const int N=1010;
int a[N][N];
int n,m;
int ans;
typedef pair<int ,int> P;
P  loca[N];
int con;
bool s[N][N];


void check(int x,int y)
{
    int x1[2]={-1,1};
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    {
        
        if(x+x1[i]>=1&&y+x1[j]>=1&&x+x1[i]<=n&&y+x1[j]<=m)
        {
            if(!s[x+x1[i]][y+x1[j]]&&a[x+x1[i]][y+x1[j]]==0)
            {
             s[x+x1[i]][y+x1[j]]=true;
             a[x][y]++;
             check(x+x1[i],y+x1[j]);
              s[x+x1[i]][y+x1[j]]=false;

            }
          
        }

    }

}

void se()
{
    int x,y;
    for(int i=0;i<con;i++)
    {
        x=loca[i].first,y=loca[i].second;
        check(x,y);
       
         
        


    }
    
}

int main()
{
    cin>>n>>m;
    char t;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
        cin>>t;
        if(t=='*')
        {
            a[i][j]=1;
            //障碍物坐标
            loca[con]={i,j};
            s[i][j]=true;
            con++;

        }
        
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(!a[i][j])
            cout<<".";
           else
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;

}