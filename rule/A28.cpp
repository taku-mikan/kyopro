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

ll mod = 10000;

int main(){
    int N; cin >> N;
    vector<char> T(N+1);
    vl A(N+1, 0);

    reps(i, N+1) cin >> T[i] >> A[i];

    ll ans = 0;
    reps(i, N+1){
        if (T[i] == '+') ans += (A[i]%mod);
        if (T[i] == '-') ans -= (A[i]%mod);
        if (T[i] == '*') ans *= (A[i]%mod);

        if (ans < 0) ans += mod;

        ans = ans % mod;
        cout << ans << endl;
    }
}