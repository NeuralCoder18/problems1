#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    
    int posIndex = 0;
    int negIndex = 1;
    
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            ans[posIndex] = nums[i];
            posIndex += 2;
        } else {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
    }
    
    return ans;
}

int main() {
    int n;
    cout << "Enter size of array (even): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (equal positives & negatives):\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = rearrangeArray(nums);

    cout << "Rearranged array:\n";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
