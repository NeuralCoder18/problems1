#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int maxSubArray(vector<int>& nums) {
        
        long long maxi = LLONG_MIN; 
        long long sum = 0; 
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i]; 
            
           
            if (sum > maxi) {
                maxi = sum; 
            }
            
           
            if (sum < 0) {
                sum = 0; 
            }
        }
        

        return maxi;
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
    

    int maxSum = maxSubArray(nums);

    
    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}