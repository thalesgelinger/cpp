#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> result;

  for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];
    if (result.count(complement)) {
      return {result[complement], i};
    }

    result[nums[i]] = i;
  }
  return {};
}

int main() {
  vector<int> nums = {3, 2, 3};
  vector<int> result = twoSum(nums, 6);
  for (int i : result) {
    cout << i << endl;
  }
  return 0;
}
