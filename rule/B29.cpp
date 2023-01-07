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
#define vii vector<vector<int>>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define reps(i, x) for(int i=1; i<x; i++)
#define rep(i, x) for(int i=0; i<x; i++)

using namespace std;

int mod = 1000000007;

ll Power(ll a, ll b, ll mod){
    // aのb乗をmodで割った余りを求める関数
    ll p=a, ans=1;
    
    // 2の60乗(==10^19乗)まで確認
    for (int i=0; i<60; i++){
        ll wari = (1L << i);
        // bを2進数表示したときに各桁が1かどうか確認
        if ((b/wari)%2 == 1){
            // 1ならansに掛け合わせる
            ans = (ans * p) % mod;
        }

        // 更新
        p = (p * p) % mod;
    }
    return ans;
}

int main(){
    ll a, b; cin >> a >> b;
    cout << Power(a, b, mod) << endl;
}