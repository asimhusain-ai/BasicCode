// REVERSING AN ARRAY
#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Enter The value of Array:- ";
    for(int i=0;i<=9;i++){
        cin>>arr[i];
    }
    cout<<"Reverse Of Array :--";
    for(int i=9; i>=0; i--){
        cout<<arr[i];
    }
    return 0;
}