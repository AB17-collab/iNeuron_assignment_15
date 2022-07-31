#include<bits/stdc++.h>
using namespace std;
int findTheNumberOfUniqueElements(int arr[],int n){
    int maxElement = arr[0];
    for(int i=0;i<n;i++){
        maxElement = max(maxElement,arr[i]);
    }
    vector<int> v1(maxElement+1,0);
    for(int i=0;i<n;i++){
        v1[arr[i]]++;
    }
    int countUniqueElement = 0;
    for(int i=0;i<v1.size();i++){
        if(v1[i]==1){
            countUniqueElement++;
        }
    }
    return countUniqueElement;
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
    int totalUniqueElements = findTheNumberOfUniqueElements(arr,n);
    cout<<"The number of unique elements are:"<<totalUniqueElements;
    return 0;
}