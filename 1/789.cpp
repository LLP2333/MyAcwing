#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1e5+10;
int a[N];
int n,q;

int erfen(int k,int l,int r)//l表示左边界r表示右边界
{
    while (l < r)
    {
        int mid = l + r >> 1;   // mid 向上取整
        if (k>a[mid]) l = mid+1;
        else r = mid;



        int l1 = l, r1 = n;
        while (l1 + 1 < r1) {
            int mid = l1 + r1 >> 1;
            if (a[mid] <= k)  l1 = mid;
            else    r1 = mid;
        }
    }
    return l;

}


int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    int k=0;
    while (q--)
    {
        scanf("%d",&k);

        
    }
    




    return 0;
}
