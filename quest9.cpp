#include<iostream>
using namespace std;
void merge(int arr[],int left,int mid,int right){
    int n1 = mid-left+1;
    int n2 = right-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i] = arr[left+i];
    }
    for(int j=0;j<n2;j++){
        b[j] = arr[mid+1+j];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(a[i]>=b[j]){
            arr[k++] = a[i++];
        }
        else{
            arr[k++] = b[j++];
        }
    }
    while(i<n1){
        arr[k++] = a[i++];
    }
    while(j<n2){
        arr[k++] = b[j++];
    }
}
void mergeSort(int arr[],int left,int right){
    if(left<right){
        int mid = (left+right)>>1;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
int* mergeTwoArraysInDescd(int arr[],int n,int arr2[],int m){
    int i=0,j=0,k = 0;
    int *arr3 = new int[n+m];
    while(i<n && j<m){
        if(arr[i]>=arr2[j]){
            arr3[k++] = arr[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n){
        arr3[k++] = arr[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }
    return arr3;
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
    mergeSort(arr,0,n-1);
    cout<<"\n";
    int m;
    cout<<"Enter the number of elements in the 2nd array:";
    cin>>m;
    int arr2[m];
    cout<<"Enter the elements in the array:";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    mergeSort(arr2,0,m-1);
    int *newMergedArray = mergeTwoArraysInDescd(arr,n,arr2,m);
    for(int i=0;i<n+m;i++){
        cout<<newMergedArray[i]<<" ";
    }
    return 0;
}