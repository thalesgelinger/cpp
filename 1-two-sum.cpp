#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  set<int> result;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = 0; j < nums.size(); j++) {
      if (j == i) {
        continue;
      }
      if (target == nums[i] + nums[j]) {
        result.insert(i);
        result.insert(j);
      }
    }
  }

  vector<int> v(result.begin(), result.end());
  return v;
}

int main() {
  vector<int> nums = {2, 7, 11, 15};
  vector<int> result = twoSum(nums, 9);
  for (int i : result) {
    cout << i << endl;
  }
  return 0;
}
