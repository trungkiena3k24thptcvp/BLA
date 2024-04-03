#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
      int n = s.size();
      if (s[0] == '1' && s[1] == '2') {string ans = "";
          if (s[n - 2] == 'A') {
              s[0] = '0';
              s[1] = '0';

          for (int i = 0; i < n - 2; i++) ans += s[i];
          }
          else {
              //string ans = "";
          for (int i = 0; i < n - 2; i++) ans += s[i];
          }
          return ans;
      }
      else if (s[n - 2] == 'A') {
          string ans = "";
          for (int i = 0; i < n - 2; i++) ans += s[i];
          return ans;
      }
      else {string str = "";
          str += s[0];
          str += s[1];
          int x = stoi(str);
          x += 12;
          string ans = to_string(x);
          s[0] = ans[0];
          s[1] = ans[1];
          ans.clear();
          for (int i = 0; i < n - 2; i++) ans += s[i];
          return ans;
      }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
