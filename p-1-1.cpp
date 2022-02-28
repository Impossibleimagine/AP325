#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

int eval();
signed main()
{
    LoveRem
    cout<<eval();
}

int eval()
{
    string a;
    int x,y;
    cin>>a ;
    if(a[0] == 'f'){
        x = eval();
        return 2*x - 1;
    }
    else if(a[0] == 'g' ){
        x = eval();
        y = eval();
        return x + 2*y - 3;
    }
    else
        return (stoi(a));
}
