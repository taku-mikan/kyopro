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

int main(){
    int N; cin >> N;
    
    // init
    ll an_2 = 1, an_1 = 1;
    ll an;
    rep(i, N-2){
        an = (an_2 + an_1)%mod;
        an_2 = an_1%mod;
        an_1 = an%mod;
    }
    cout << an << endl;
}