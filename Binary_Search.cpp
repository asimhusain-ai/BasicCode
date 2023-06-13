#include<iostream>
using namespace std;
 int binarysearch(int arr[],int size, int key){
    int start = 0;
    int end =size-1;

    int mid = start+(end-start)/2;
    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]<key){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }

        mid = start+(end-start)/2;
    }
    return -1;
 }

 int main(){
    int arr1[10]={12,34,56,87,90,32,45,67,89,91};
    int arr2[9]={12,34,56,87,90,32,45,55,91};

    int even = binarysearch(arr1,10,32);
    int odd = binarysearch(arr2,9,91);

    cout<<"Even_Answer:  "<<even<<endl;
    cout<<"Odd_Answer:  "<<odd;
    return 0;
 }