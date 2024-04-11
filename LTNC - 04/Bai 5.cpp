#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 5;
map<int, int> cnt1, cnt2;
int n;
int b[N];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cnt1[a]++;
    }
    for (int i = 0; i <= n; i++) {
       cin >> b[i];
        cnt2[b[i]]++;
    }
    for (int i = 0; i <= n; i++) {
        if (cnt2[b[i]] - cnt1[b[i]] == 1) {
            cout << b[i];
            return 0;
        }
    }
    return 0;
}
