#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return;

    k = k % n;   

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements of array:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter number of rotations (k): ";
    cin >> k;

    rotateArray(nums, k);

    cout << "Rotated Array: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
