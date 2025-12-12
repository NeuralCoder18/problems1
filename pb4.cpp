#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = (n * (n + 1)) / 2;
    int s2 = 0;
    for (int i = 0; i < n; i++) {
        s2 += nums[i];
    }
    return sum - s2;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = missingNumber(nums);
    cout << "Missing number is: " << result << endl;

    return 0;
}
