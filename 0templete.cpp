// #include<bits/stdc++.h>

#include <iostream>
#include <queue>
#include <stack>
#include <vector>
// #include <cstring>
// #include <array>

#pragma GCC optimize("Ofast,unroll-loops") 

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define for0(i, n) for(int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for(int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define PI 3.1415926535897932384626433832795l 


using namespace std;
void solve();

// write your code declaration/defination

//---------------------------------------

int main(){
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("in", "r", stdin);
        freopen("err", "w", stderr);
        freopen("out", "w", stdout);
    #endif
    int t=1;
    /*is Single Test case?*/cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}
void solve(){
}
