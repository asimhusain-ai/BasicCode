// M E T H O D - 1.

/*
#include<iostream>
using namespace std;

int main(){
    int arr[7]={2,3,2,4,3,5,4};
    int sum=arr[0]^arr[1]^arr[2]^arr[3]^arr[4]^arr[5]^arr[6];
    cout<<sum;
    return 0;
}
*/

// M E T H O D - 2.
#include<iostream>
using namespace std;

int asim(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[7]={2,3,2,3,4,5,4};
    cout<<asim(arr, 7);
    return 0;
}