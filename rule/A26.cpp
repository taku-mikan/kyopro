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

bool check(int x){
    // 素数判定
    bool flag = true;
    for (int i=2; i*i<=x; i++){
        if (x%i == 0) flag = false;
    }
    return flag;
}

int main(){
    int Q; cin >> Q;
    vi X(Q+1, 0);
    reps(i, Q+1) cin >> X[i];

    reps(i, Q+1){
        bool flag = check(X[i]);
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}