#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int q;
set<int> s;
int main() {
    cin >> q;
    while (q--) {
        int type, x;
        cin >> type >> x;
        if (type == 1) {
            s.insert(x);
        }
        else if (type == 2) {
           s.erase(x);
        }
        else {
            if (s.count(x)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}



