#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool check_sorted(vector<int>&arr){
    int n=arr.size();
    if (n<=1) return true;

    bool inc=true, dec=true;
    for(int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]) inc=false;
        if (arr[i]<arr[i+1]) dec=false;
    }
    return inc||dec;
}