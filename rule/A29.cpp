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

ll mod = 1000000007;

ll Power(ll a, ll b, ll mod){
    //  aのb乗をmodで割った余りを返す関数
    ll p = a, ans = 1;

    // 2のi乗を1つ1つ調べる
    for (int i=0; i<30; i++){
        ll wari = (1 << i);
        // bを2進数で表したとき各桁が1かどうかで場合分け
        if ((b / wari)%2 == 1){
            // 1の場合にはansに掛け合わせる
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