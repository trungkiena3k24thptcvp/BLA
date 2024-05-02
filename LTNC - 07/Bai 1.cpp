#include <iostream>
int a[100005];
int n, x;
using namespace std;
int BinarySearch(int arr[], int low, int high, int x) {
  if (high >= low) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == x) {
      return mid;
    }
    if (arr[mid] > x) {
      return BinarySearch(arr, low, mid - 1, x);
    }
    return BinarySearch(arr, mid + 1, high, x);
  }
  return -1;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  cin >> x;
  int result = BinarySearch(a, 0, n - 1, x);
  if (result == -1) {
    cout << "Khong tim thay gia tri" << x << " trong mang." << endl;
  } else {
    cout << "Tim thay gia tri " << x << " tai vi tri " << result + 1 << endl;
  }
  return 0;
}
