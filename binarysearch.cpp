#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int s=0;
    int e = n-1;
     int mid= (s+e)/2;
     while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]> key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid= (s+e)/2;
     }
     return -1;
}

int main(){
    int n, arr[100], key;
    cout<<"enter array size: ";
    cin>>n;
    cout<<"enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter key to search: ";
    cin>>key;

    int index= binarysearch(arr, n, key);
    if(index!=-1){
        cout<<"key found at index: "<<index<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
}