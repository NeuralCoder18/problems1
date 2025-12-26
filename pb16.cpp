#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;

    unordered_set<int> st(nums.begin(), nums.end());
    int longest = 1;

    for (int it : st) {
        // start only if it is the beginning of a sequence
        if (st.find(it - 1) == st.end()) {
            int cnt = 1;
            int x = it;

            while (st.find(x + 1) != st.end()) {
                x++;
                cnt++;
            }

            longest = max(longest, cnt);
        }
    }
    return longest;
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

    int result = longestConsecutive(nums);
    cout << "Longest consecutive sequence length: " << result << endl;

    return 0;
}

