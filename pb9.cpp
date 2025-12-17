#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
           
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);

    cout << "Sorted array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
