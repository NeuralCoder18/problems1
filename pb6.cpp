#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for( int i=0;i<n;i++){
            if(nums[i]!=0){
                
                nums[j]=nums[i];
                j++;
            }
        }
        while(j<n){
            nums[j++]=0;
        }
        
    }
    int main(){
     int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    moveZeroes(nums);
    for(int x : nums){
            cout<<x<<" ";
        }
    
    return 0;
}