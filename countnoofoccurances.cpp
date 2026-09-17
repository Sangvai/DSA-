#include<bits/stdc++.h>
using namespace std;

   
int firstoccurance(int arr[], int n, int key){
    int s=0, e= n-1;
    int ans=-1;
    while(s<=e){
        int mid= s+(e-s)/2;
        if(arr[mid]==key){
            ans= mid;
            e=mid-1;
        }
        if(arr[mid]> key){
            e=mid-1;
        }
        else{
            s= mid+1;
        }
    }
    return ans;
}

int lastoccurance(int arr[], int n, int key){
    int s=0, e= n-1;
    int ans=-1;
    while(s<=e){
        int mid= s+(e-s)/2;
        if(arr[mid]==key){
            ans= mid;
            s=mid+1;
        }
        if(arr[mid]> key){
            e=mid-1;
        }
        else{
            s= mid+1;
        }
    }
    return ans;
}

int main(){
    int n, key, arr[1000];
    cout<<"enter array size: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter key to search: ";
    cin>>key;
    
    int firstindex= firstoccurance(arr, n, key);
    int lastindex= lastoccurance(arr, n, key);
    if(firstindex!=-1 && lastindex!=-1){
        cout<<"count of occurrences: "<<(lastindex-firstindex+1)<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
}