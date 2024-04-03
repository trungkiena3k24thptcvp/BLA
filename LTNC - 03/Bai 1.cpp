#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    cout << n << ' ' << m << endl;
    cout << s1 << s2 << endl;
    cout << s2[0];
    for (int i = 1; i < n; i++) cout << s1[i];
    cout << ' ';
    cout << s1[0];
    for (int i = 1; i < m; i++) cout << s2[i];
    return 0;
}
