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
    //�פ����
    int mid = (p[right]+p[left])/2;
    //�䤤�I
    int m = lower_bound(p+left,p+right,mid)-p;
    //�b�j�󵥩��I���Ȥ����̤p��
    if (p[m-1]-p[left] >= p[right]-p[m])
        m--;
    //�T�wm-1�O�_��������I
    return p[right]-p[left] + cut(left,m) + cut(m,right);
    //���j
}
