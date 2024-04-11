#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int w, h;
pair<int, int> pos;
bool check[N][N];
string s[N];
pair<int, int> moves[] = {{1, 1}, {1, -1}, {1, 0}};
bool chk(int x, int y)
{
    if (x >= 0 && y >= 0 && x < w && y < h && s[x][y] == 'E' && !check[x][y]) return true;
    else return false;
}
void dfs(int x, int y)
{
    check[x][y] = true;
    for (int i = 0; i < 3; i++) {
        int dx = x + moves[i].first;
        int dy = y + moves[i].second;
        if (chk(dx, dy) && s[dx - 1][dy] != 'R') {
           //check[dx][dy] = true;
           dfs(dx, dy);
        }
    }
}
int main() {
    cin >> h >> w;
    memset(check, false, sizeof(check));
    for (int i = 0; i < w; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            if (s[i][j] == 'Y') {
                pos.first = i;
                pos.second = j;
            }
        }
    }
    dfs(pos.first, pos.second);
    /*for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            cout << check[i][j];
        }
        cout << endl;
    }*/
    for (int j = 0; j < h; j++) {
        if (check[w - 1][j]) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
