#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing array"<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int first[5] = {1,2,3,4,5};
    int second[5] = {6,7,8,9,10};
    int third[5] = {11,12,13,14,15};
    int fourth[5] = {16,17,18,19,20};
    int fifth[5] = {21,22,23,24,25};

        printarray(first, 5);
        printarray(second, 5);
    printarray(third, 5);
        printarray(fourth, 5);

            printarray(fifth, 5);
return 0;
}