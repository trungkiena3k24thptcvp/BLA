#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
int n, q;
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            int a;
            cin >> a;
            v[i].push_back(a);
        }
    }
    while (q--) {
        int idx1, idx2;
        cin >> idx1 >> idx2;
        cout << v[idx1][idx2] << endl;
    }
    return 0;
}
