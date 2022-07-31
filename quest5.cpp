#include<iostream>
using namespace std;
int findFirstRepeatedElement(int arr[],int n){
    int element = -1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            element = arr[i];
            return element;
        }
    }
    return element;
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
    int repeatedElement = findFirstRepeatedElement(arr,n);
    if(repeatedElement!=-1){
        cout<<"The repeated element is:"<<repeatedElement;
    }
    else{
        cout<<"There is no repeated element";
    }
    return 0;
}