#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> a, b;

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0)
            a.push_back(nums[i]);
        else
            b.push_back(nums[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            nums[i] = a[i / 2];
        else
            nums[i] = b[i / 2];
    }

    return nums;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = rearrangeArray(nums);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
