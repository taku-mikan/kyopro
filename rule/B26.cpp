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

int main(){
    int N; cin >> N;

    int M = 1000000;
    vi Deleted(M+1, 0);
    // init 0と1を削除
    Deleted[0] = 1;
    Deleted[1] = 1;

    // 素数判定
    for (int i=2; i*i<=M; i++){
        if (Deleted[i]) continue;
        for (int j=i*2; j<=M; j+=i) Deleted[j] = 1;
    }

    // 出力
    reps(i, N+1){
        if (!Deleted[i]) cout << i << endl;
    }
}