#include<bits/stdc++.h>
using namespace std;
void calculateTheFrequency(int arr[],int n){
    unordered_map<int,int> ump;
    for(int i=0;i<n;i++){
        ump[arr[i]]++;
    }
    cout<<"The respective frequencies of the elements in the array are:";
    for(int i=0;i<n;i++){
        if(ump[arr[i]]!=0){
            cout<<arr[i]<<" "<<ump[arr[i]]<<"\n";
            ump[arr[i]] = 0;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    calculateTheFrequency(arr,n);
    return 0;
}