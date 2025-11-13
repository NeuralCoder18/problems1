#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int y;
    cout<<"Enter the value of y which you want to search";
    cin>>y;
    vector <int> arr(n);
    int i;
    for(i=0;i<n;i++){
        cout<<"Enter the value of arr["<<i<<"]";
        cin>>arr[i];

    }
    bool found=false;
    for(i=0;i<n;i++){
        if(arr[i]==y){
            cout<<"the number"<<" "<<arr[i]<<" "<<"first time present at index"<<" "<<i<<endl;
            found=true;
            break;
        }
        
    }
    if(!found){
        cout<<"the number"<<y<<"is not present in array";
    }
   

    return 0;
}