#include<bits/stdc++.h>
using namespace std;
void rotateByRight(int arr[],int n,int pos){
    deque<int> forRotation; 
    for(int i=0;i<n;i++){
        forRotation.push_back(arr[i]);
    }
    int count = 0;
    while(count<pos){
        int k = forRotation.back();
        forRotation.pop_back();
        forRotation.push_front(k);
        count++;
    }
    int i = 0;
    while(!forRotation.empty() && i<n){
        arr[i++] = forRotation.front();
        forRotation.pop_front();
    }
}
void rotateByLeft(int arr[],int n,int pos){
    deque<int> forRotation; 
    for(int i=0;i<n;i++){
        forRotation.push_back(arr[i]);
    }
    int count = 0;
    while(count<pos){
        int k = forRotation.front();
        forRotation.pop_front();
        forRotation.push_back(k);
        count++;
    }
    int i = 0;
    while(!forRotation.empty() && i<n){
        arr[i++] = forRotation.front();
        forRotation.pop_front();
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
    int choice;
    cout<<"Choose if you want to rotate the array by left or right: 1.Left 2.Right ";
    cin>>choice;
    int position;
    cout<<"Enter by how many positions you would like to rotate the array:";
    cin>>position;
    if(choice==1){
        rotateByLeft(arr,n,position);
        for(auto i:arr){
            cout<<i<<" ";
        }
    }
    else{
        rotateByRight(arr,n,position);
        for(auto i:arr){
            cout<<i<<" ";
        }
    }
    return 0;
}