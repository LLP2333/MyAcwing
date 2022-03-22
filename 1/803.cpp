#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> PII;
vector<PII> segs;

void merge(vector<PII>&segs)
{
    vector<PII> res;
    sort(segs.begin(),segs.end());
    int l = -2e9,r = -2e9;
    for(auto item:segs)
        if(r < item.first)
        {
            if(l != -2e9) res.push_back({l,r});
            l = item.first;
            r = item.second;
        }
        else r = max(r,item.second);
    if(l != -2e9) res.push_back({l,r});
    segs = res;
}
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        segs.push_back({l,r});
    }
    merge(segs);
    cout << segs.size() << endl;
    return 0;
}