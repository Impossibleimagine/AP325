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
    }//輸入陣列

    p.emplace_back(v[0]);
    for(int i=1;i<n;i++){
        int b = p[i-1] + v[i];
        p.emplace_back(b);
    }//做從前面的前綴和

    pp.emplace_back(p[0]);
    for(int i=1;i<n;i++){
        int b = pp[i-1] + p[i];
        pp.emplace_back(b);
    }//做從前面的前前綴和

    q.emplace_back(v[n-1]);
    for(int i=1;i<n;i++){
        int b = q[i-1] + v[i];
        q.emplace_back(b);
    }//做從後面的前綴和

    qq.emplace_back(q[0]);
    for(int i=1;i<n;i++){
        int b = qq[i-1] + q[i];
        qq.emplace_back(b);
    }//做從後面的前前綴和
    /*cout<<"p \n";
    for(auto i=p.begin();i!=p.end();i++){
        cout<<*i<<' '<<'\n';
    }
    cout<<"pp ";
    for(auto i=pp.begin();i!=pp.end();i++){
        cout<<*i<<' '<<'\n';
    }*/
    cout<<"q ";
    for(auto i=q.begin();i!=q.end();i++){
        cout<<*i<<' '<<'\n';
    }/*
    cout<<"qq ";
    for(auto i=qq.begin();i!=qq.end();i++){
        cout<<*i<<' '<<'\n';
    }*/
}
