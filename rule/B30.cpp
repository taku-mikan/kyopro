#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <queue>
#include <cmath>
#include <numeric>

constexpr long long INF = 1LL << 60;
long long mini= -1'000'000'000'000'000LL;
#define mini2 1e-9
#define ll long long
#define vi vector<int>
#define vivi vector<vector<int>>
#define vll vector<long long>
#define vllvll vector<vector<long long>>
#define reps(i, x) for(int i=1; i<x; i++)
#define rep(i, x) for(int i=0; i<x; i++)

using namespace std;

ll mod = 1000000007;

ll Power(ll a, ll b, ll mod){
    // aのb乗をmodで割った余りを求める関数
    ll p=a, res=1;
    
    // 2の60乗まで確認
    for (int i=0; i<60; i++){
        ll wari = (1L << i);
        if ((b/wari)%2 == 1) res = (res * p) % mod;

        // update
        p = (p * p) % mod;
    }
    return res;
}

ll Div(ll a, ll b, ll mod){
    // a÷bをmodで割った余りを求める関数
    // フェルマーの小定理を用いる
    // a ÷ b -> a * b^(mod-2)
    return (a * Power(b, mod-2, mod)) % mod;
}

ll Comb(ll n, ll r, ll mod){
    // nCrをmodで割ったあまりを求める関数

    // 分子 a / 分母 b
    // 分子
    ll a = 1;
    reps(i, n+1) a = (a * i) % mod;

    // 分母
    ll b = 1;
    reps(i, r+1) b = (b * i) % mod;
    reps(i, (n-r)+1) b = (b * i) % mod;

    return Div(a, b, mod);
}

int main(){
    int H, W; cin >> H >> W;

    // H+W-2CH-1を求めれば良い
    cout << Comb(H+W-2, H-1, mod) << endl;
}