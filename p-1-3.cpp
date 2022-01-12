#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
vector<int> point;

int cut(int ,int);
signed main()
{
    LoveRem
    int n,l;
    cin>>n>>l;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        point.emplace_back(num);
    }
    sort(point.begin(),point.end());
    int len = l;
    auto it = lower_bound(point.begin(),point.end(),l/2);
    int mid = max(*it,*(it-1));
    cout<<mid;
    //while(!point.empty()){

    //}
}
//
int cut(int left,int right)
{

}
