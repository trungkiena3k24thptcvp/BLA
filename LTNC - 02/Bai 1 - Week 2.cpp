#include <bits/stdc++.h>
using namespace std;
int t, n;
int main()
{
    cin >> t;
    while (t--) {
        string s;
        cin >> n;
        s = to_string(n);
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            int x = s[i] - '0';
            if (x == 0) continue;
            else {
                if (n % x == 0) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
