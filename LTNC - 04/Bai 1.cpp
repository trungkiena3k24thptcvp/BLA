#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
bool check(string s)
{
    string str = s;
    reverse(str.begin(), str.end());
    if (str == s) return true;
    else return false;
}
bool check_other_side(const std::string& s, int left, int right) {
  // This function remains the same as before, checking if a substring is a palindrome
  while (left < right) {
    if (s[left] != s[right]) {
      return false;
    }
    ++left;
    --right;
  }
  return true;
}

int palindromeIndex(string s) {
    int n = s.size();
  int left = 0, right = n - 1;

  // Iterate until pointers meet or cross
  while (left < right) {
    if (s[left] != s[right]) {
      // Check if removing character at right creates a palindrome
      if (s[left] == s[right - 1] && check_other_side(s, left + 1, right - 2)) {
        return right;
      }
      // Check if removing character at left creates a palindrome
      if (s[right] == s[left + 1] && check_other_side(s, left + 2, right - 1)) {
        return left;
      }
    }
    // Move pointers towards center for next comparison
    ++left;
    --right;
  }

  // No mismatch found or no valid removal point
  return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
