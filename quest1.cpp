#include<iostream>
using namespace std;
int findGreatestValueInTheArray(int arr[],int n){
    int greatestValue = INT32_MIN;
    for(int i=0;i<n;i++){
        greatestValue = max(greatestValue,arr[i]);
    }
    return greatestValue;
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
    int largestValueInTheArray = findGreatestValueInTheArray(arr,n);
    cout<<"The largest value in the array is:"<<largestValueInTheArray;
    return 0;
}