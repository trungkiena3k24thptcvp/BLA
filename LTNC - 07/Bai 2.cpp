#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    for (char i = 'a'; i <= 'd'; i++) {
        for (char j = 'a'; j <= 'd'; j++) {
            for (char k = 'a'; k <= 'd'; k++) {
                s = "";
                s += i;
                s += j;
                s += k;
                cout << s << endl;
            }
        }
    }
    return 0;
}
