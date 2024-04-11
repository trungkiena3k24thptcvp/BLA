#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 1e5 + 5;
pair<int, int> x[N]; // Array to store value-index pairs

bool cmp(const pair<int, int>& a1, const pair<int, int>& a2) {
    if (a1.first == a2.first) {
        return a1.second < a2.second; // Sort by index if values are equal
    }
    return a1.first < a2.first; // Sort by value in ascending order
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) { // Iterate from 0 to n-1 (avoid potential off-by-one errors)
        cin >> x[i].first;
        x[i].second = i;
    }

    sort(x, x + n, cmp); // Sort the x array

    int q;
    cin >> q;

    while (q--) {
        int y;
        cin >> y;

        auto it = lower_bound(x, x + n, make_pair(y, -1)); // Use make_pair for clarity
        if (it != x + n && it->first == y) { // Check if found element is equal to y
            cout << "Yes" << ' ' << it - x + 1 << endl;
        } else {
            cout << "No" << ' ' << it - x + 1 << endl;
        }
    }

    return 0;
}
