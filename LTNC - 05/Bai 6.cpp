#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
map<string, int> mp;
int q;
int main() {
    cin >> q;
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            string s;
            cin >> s >> x;
            mp[s] += x;
        }
        else if (type == 2) {
            string s;
            cin >> s;
            mp[s] = 0;
        }
        else {
            string s;
            cin >> s;
            cout << mp[s] << endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}



