//Tr0y2ooo
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define DEBUG 1
#define LoveRem ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
vector <int> v,p,pp,q,qq;
//set <int> st;
//map <int, int> mp;
int cut(int,int,int);
int ans=0;
int cuttime;
signed main()
{
    LoveRem
    if(DEBUG) cout<<"-------OUTPUT------\n";
	//freopen("out.txt", "w", stdout);
    int n,k,a;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        v.emplace_back(a);
    }//块皚

    p.emplace_back(v[0]);
    for(int i=1;i<n;i++){
        int b = p[i-1] + v[i];
        p.emplace_back(b);
    }//暗眖玡玡后㎝

    pp.emplace_back(p[0]);
    for(int i=1;i<n;i++){
        int b = pp[i-1] + p[i];
        pp.emplace_back(b);
    }//暗眖玡玡玡后㎝

    q.emplace_back(v[n-1]);
    for(int i=1;i<n;i++){
        int b = q[i-1] + v[i];
        q.emplace_back(b);
    }//暗眖玡后㎝

    qq.emplace_back(q[0]);
    for(int i=1;i<n;i++){
        int b = qq[i-1] + q[i];
        qq.emplace_back(b);
    }//暗眖玡玡后㎝
    cut(1,n,k);
}

int cut(int left,int right,int cuttime)
{
    cuttime-=1;//ちΩ计
    if((right-left)<2||cuttime<1) return 0;//3┪琌k沧ゎ
    for(int i=left+1;i<)
    int c = //т程ㄎち翴index
    return v[c];

}
/*
a1,a2,a3,a4,a5,a6,a7

p:
p[0]:a1,
p[1]:a1+a2,
p[2]:a1+a2+a3,
p[3]:a1+a2+a3+a4,
p[4]:a1+a2+a3+a4+a5,
p[5]:a1+a2+a3+a4+a5+a6,
p[6]:a1+a2+a3+a4+a5+a6+a7

pp:
pp[0]:a1,
pp[1]:2a1+a2,
pp[2]:3a1+2a2+a3
pp[3]:4a1+3a2+2a3+a4
pp[4]:5a1+4a2+3a3+2a4+a5
pp[5]:6a1+5a2+4a3+3a4+2a5+a6
pp[6]:7a1+6a2+5a3+4a4+3a5+2a6+a7

q:
q[0]:a7
q[1]:a7+a6
q[2]:a7+a6+a5
q[3]:a7+a6+a5+a4
q[4]:a7+a6+a5+a4+a3
q[5]:a7+a6+a5+a4+a3+a2
q[6]:a7+a6+a5+a4+a3+a2+a1

qq:
qq[0]:a7
qq[1]:2a7+a6
qq[2]:3a7+2a6+a5
qq[3]:4a7+3a6+2a5+a4
qq[4]:5a7+4a6+3a5+2a4+a3
qq[5]:6a7+5a6+4a5+3a4+2a3+a2
qq[6]:7a7+6a6+5a5+4a4+3a3+2a2+a1

a1 = qq[5]
a2 = qq[4] + p[0]
a3 = qq[3] + p[1]
a4 = qq[2] + p[2]
a5 = qq[1] + p[3]
a6 = qq[0] + p[4]
a7 = p[5]


*/
