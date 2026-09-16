#include<bits/stdc++.h>
using namespace std;
int firstoccurance(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid= s+ (e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans= mid;
            e= mid-1;
        }
        else if(arr[mid]> key){
            e=mid-1;
        }
        else{
            s = mid + 1;
        }
        mid= s+ (e-s)/2;
    }
        return ans;
    }

    int lastoccurance(int arr[], int n, int key){
        int s=0;
        int e=n-1;
        int mid= s+ (e-s)/2;
        int ans=-1;
        while(s<=e){
            if(arr[mid]==key){
                ans= mid;
                s= mid+1;
            }
            else if(arr[mid]> key){
                e=mid-1;
            }
            else{
                s = mid + 1;
            }
            mid= s+ (e-s)/2;
        }
        return ans;
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

        int firstindex= firstoccurance(arr, n, key);
        int lastindex= lastoccurance(arr, n, key);
        if(firstindex!=-1 && lastindex!=-1){
            cout<<"first occurence of key found at index: "<<firstindex<<endl;
            cout<<"last occurence of key found at index: "<<lastindex<<endl;
        }
        else{
            cout<<"key not found"<<endl;
        }
        return 0;
    }