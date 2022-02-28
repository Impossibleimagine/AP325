#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int p[90010];

int cut(int ,int);
signed main()
{
    LoveRem
    int n,l;
    cin>>n>>l;
    p[0]=0;
    p[n+1]=l;
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    cout<<cut(0,n+1);
}
//
int cut(int left,int right)
{
    if(right-left<=1) return 0;
    //終止條件
    int mid = (p[right]+p[left])/2;
    //找中點
    int m = lower_bound(p+left,p+right,mid)-p;
    //在大於等於中點的值中的最小值
    if (p[m-1]-p[left] >= p[right]-p[m])
        m--;
    //確定m-1是否比較接近中點
    return p[right]-p[left] + cut(left,m) + cut(m,right);
    //遞迴
}
