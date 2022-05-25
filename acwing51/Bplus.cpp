#include<iostream>
#include<cstring>
#include<queue>

using namespace std ;
const int N =  1010 ;
typedef pair<int, int> PII;

char g[N][N] ;
string s[N] ;
int n , m , cnt;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
bool st[N][N] ;

void dfs(int x , int y)
{
    st[x][y] = true ;
    cnt ++ ;

    for(int i = 0 ; i < 4 ; i ++)
    {
        int a = x + dx[i] , b = y + dy[i] ;

        if(a < 0 || a >= n || b < 0 || b >= m || st[a][b]) continue ;
        if( g[a][b] == '*' )   continue ;


        dfs(a , b) ;

    }
}

int main()
{
    cin >> n >> m ;

    for(int i = 0 ; i < n ; i ++) 
     {
      cin >> g[i] ;
      s[i] = g[i] ;
     }


    for(int i = 0 ; i < n ; i ++)
    for(int j = 0 ; j < m ; j ++)
    if(g[i][j] == '*')
    {
        cnt = 0 ;
        memset(st , false , sizeof st) ;
        dfs(i , j) ;
        cnt %= 10 ;
        char t = cnt + '0' ;
     //   cout << t << endl ;
        s[i][j] = t;
    }
    for(int i = 0 ; i < n ; i ++)
  cout << s[i] << endl ;
    return 0 ;
}