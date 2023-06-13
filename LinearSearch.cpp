#include<iostream>
using namespace std;
    bool search(int arr[],int size, int key){
        for(int i=0;i<=size;i++){
            if(arr[i]==key){
                return 1;
            }
        }
      return 0;
    }

int main(){
    int arr[20]={2,3,4,7,6,5,8,5,-76,-21,3,-9,-7,5,6,21,34,98,5};
    int key;
    cout<<"Enter Number To Find In The Array:- ";
    cin>>key;

    bool found= search(arr,20,key);
        if(found){
            cout<<"      "<<endl;
            cout<<" P R E S E N T "<<endl;
            cout<<"     "<<endl;
        }
        else{
            cout<<"     "<<endl;
            cout<<" A B S E N T "<<endl;
            cout<<"     "<<endl;
        }

    return 0;
}