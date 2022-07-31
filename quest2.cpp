#include<iostream>
using namespace std;
int findSmallestValueInTheArray(int arr[],int n){
    int smallestValue = INT32_MAX;
    for(int i=0;i<n;i++){
        smallestValue = min(smallestValue,arr[i]);
    }
    return smallestValue;
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
    int smallestValueInTheArray = findSmallestValueInTheArray(arr,n);
    cout<<"The largest value in the array is:"<<smallestValueInTheArray;
    return 0;
}