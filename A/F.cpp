#include <bits/stdc++.h>

using namespace std;
const int MAX = 80112002;
const int N = 500010;
int n;                
int m;                     
vector<int> edge[N];        
int ind[N];                 
int ans;                    



int dfs(int x) {

    if (!edge[x].size()) return 1;
  
    int sum = 0;
    for (int i = 0; i < edge[x].size(); i++) sum = (sum + dfs(edge[x][i])) % MAX;
    return sum % MAX;    
}

int main() 
{
    cin >> n >> m;
 
    for (int i = 1; i <= m; i++) 
    {
        int x, y;
        scanf("%d%d",&x,&y);          
        edge[x].push_back(y);   
        ind[y]++;               
    }
   
    for (int i = 1; i <= n; i++)
     if (!ind[i]) 
     {
       ans = (ans + dfs(i)) % MAX;
     }
     

   
    cout << ans << endl;
    system("pause");
    return 0;
}
