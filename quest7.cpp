#include<bits/stdc++.h>
using namespace std;
int findTheNumberOfDuplicateElements(int arr[],int n){
    int maxElement = arr[0];
    for(int i=0;i<n;i++){
        maxElement = max(maxElement,arr[i]);
    }
    vector<int> v1(maxElement+1,0);
    for(int i=0;i<n;i++){
        v1[arr[i]]++;
    }
    int countOfDuplicateElements = 0;
    for(int i=0;i<v1.size();i++){
        if(v1[i]>1){
            countOfDuplicateElements++;
        }
    }
    return countOfDuplicateElements;
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
    int totalDuplicateElements = findTheNumberOfDuplicateElements(arr,n);
    cout<<"The number of duplicate elements are:"<<totalDuplicateElements;
    return 0;
}