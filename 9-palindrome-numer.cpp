#include <cmath>
#include <iostream>

using namespace std;

bool isPalindrome(int x) {
  if (x < 0) {
    return false;
  }
  double reverse = 0;
  for (int i = x; i >= 1; i = floor(i / 10)) {
    int digit = x % 10;
    if (reverse > (INT_MAX - digit) / 10) {
      return false;
    }
    reverse = reverse * 10 + i % 10;
  }
  return reverse == x;
}

int main() {
  string response = isPalindrome(1234567899) ? "true" : "false";
  cout << response << endl;
  return 0;
}
