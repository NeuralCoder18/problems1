#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int singleNumber(vector<int>& nums) {
        int a=0;
        for(int x : nums){
            a^=x;
        }
        return a;
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
     int result=singleNumber(nums);
    cout<<"Number that appeared one times:  "<<result<<endl;
    return 0;
}