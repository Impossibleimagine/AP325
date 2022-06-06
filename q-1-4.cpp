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
void cut(int,int,int);
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
    }//輸入陣列

    p.emplace_back(v[0]);
    for(int i=1;i<n;i++){
        int b = p[i-1] + v[i];
        p.emplace_back(b);
        //cout<<p[i]<<'\n';
    }//做從前面的前綴和

    pp.emplace_back(p[0]);
    for(int i=1;i<n;i++){
        int b = pp[i-1] + p[i];
        pp.emplace_back(b);
        //cout<<pp[i]<<'\n';
    }//做從前面的前前綴和

    q.emplace_back(v[n-1]);
    for(int i=1;i<n;i++){
        int b = q[i-1] + v[n-i-1];
        q.emplace_back(b);
        //cout<<q[i]<<'\n';
    }//做從後面的前綴和

    qq.emplace_back(q[0]);
    for(int i=1;i<n;i++){
        int b = qq[i-1] + q[i];
        qq.emplace_back(b);
        cout<<qq[i]<<'\n';
    }//做從後面的前前綴和
    cut(0,n-4,k);
    //cout<<ans<<'\n';
}

void cut(int left,int right,int cuttime)
{
    if((right-left)<2||cuttime<1) return;//小於3或是k終止
    cuttime-=1;//切的次數加一
    //left = left+1,right = right-1;//更新l,r的值
    int cot = left;
    int m=1e9,mind=-1;
    int sum[100000]={0};
    for(int i=right-2;i>=0;i--){
        sum[cot]=qq[i]-pp[(right-2)-i];
        //cout<<sum[cot]<<' '<<cot<<'\n';
        /**
        if(sum[cot]<m){
            m=sum[cot];
            mind=cot+1;
        }
        cot+=1;
        **/
    }
    //ans+=v[mind];
    //cut(0,mind-1,cuttime);
    //cut(mind,right+1,cuttime);
    //cout<<m<<' '<<mind;
    //for(int i=0;i<7;i++) cout<<sum[i]<<' ';

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
a2 = qq[4] + pp[0]
a3 = qq[3] + pp[1]
a4 = qq[2] + pp[2]
a5 = qq[1] + pp[3]
a6 = qq[0] + pp[4]
a7 = pp[5]
*/
