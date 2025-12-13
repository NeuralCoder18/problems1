#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findMaxConsecutiveOnes(vector<int>&nums){
    int n=nums.size();
    int count=0;
    int cout=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=1){
            
            cout=0;
        }
        else{
            cout+=1;
        }
        if(count<cout){
            count=cout;
        }
    }
    return count;
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

    int result=findMaxConsecutiveOnes(nums);
    cout<<"Maximum consecutive ones:  "<<result<<endl;
    return 0;
}