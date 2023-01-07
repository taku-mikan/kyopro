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
    // aのb乗をmodで割った値を求める
    ll p=a, ans=1;
    
    // 2の60乗まで調査
    for (int i=0; i<60; i++){
        ll wari = (1L << i);
        if ((a/wari)%2 == 1) ans = (ans * p)%mod;

        // update
        p = (p * p) % mod;
    }
    return ans;
}

ll Div(ll a, ll b, ll mod){
    // a÷bをmodで割った余りを求める関数
    return (a * Power(b, mod-2, mod))%mod;
}

ll Comb(ll n, ll r, ll mod){
    // nCrをmodで割った値を求める関数

    // aを分子 bを分母
    ll a = 1;
    reps(i, n+1) a = (a * i) % mod;

    ll b = 1;
    reps(i, r+1) b = (b * i) % mod;
    reps(i, (n-r)+1) b = (b * i) % mod;

    // a/b -> a*b^(mod-2)
    return Div(a, b, mod);
}

int main(){
    int n, r; cin >> n >> r;

    cout << Comb(n, r, mod) << endl;
}