#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void check(int n,int arr[]){
    if(n<=1){
        cout<<"array is sorted (always)";
        return;
    }

    bool inc=true,dec=true;
    for (int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            dec=false;

        }

        else if(arr[i]>arr[i+1]){
            inc=false;

        }

    
    }
    if(inc){
        cout<<"array is sorted in increasing order";
    }
    if(dec){
        cout<<"array is sorted in decreasing order";
    }
    else{
        cout<<"array is not sorted";
    }

}
int main(){
    
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"entr the value of arr["<<i<<"]";
        cin>>arr[i];
    }
    check(n,arr);

    return 0;
}