#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int cou = 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += nums[j];
            if(sum == k) {
                cou++;
            }
        }
    }
    return cou;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    int result = subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << endl;

    return 0;
}
