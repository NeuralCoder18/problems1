#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int remove_duplicates(vector<int>&nums){
    int n=nums.size();
    if(n==0) return 0;
    int j=0;
    for(int i=1;i<n;i++){
        if(nums[i]!=nums[j]){
            j++;
            nums[j]=nums[i]; 
        }
        
    }
    return j+1;
    }

int main (){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k = remove_duplicates(nums);

    cout << "Unique count = " << k << endl;
    cout << "Vector after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}