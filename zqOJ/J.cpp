#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=1e5;
int q[N];
int find(int x)
  {
      if(q[x]!=x)
      {
          q[x]=find(q[x]);
      }
      return q[x];
  }
  int n,m;



int sum(int n)
{
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if (find(i) == i)
			cnt++;
 
	return cnt;
}



int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        q[i]=i;
    }
    char x;
    int a,b;
    while (m--)
    {
        cin>>a>>b;
        
      q[find(a)]=find(b);
        
    }
    cout<<sum(n)<<endl;
 
    
    

    system("pause");
    return 0;
}