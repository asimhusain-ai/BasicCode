#include<iostream>
using namespace std;

    void printarray(int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void swaparray(int arr[], int size){
        for(int i=0; i<size; i+=2){
            if(i+1 < size){
                swap(arr[i], arr[i=1]);
            }
        }
    }
int main(){
    int even[8]={5,3,6,8,7,12,34,5};
    int odd[5]={-2,-4, -5, 6, 5};

    swaparray(even, 8);
    printarray(even, 8);

    cout<<endl;

    swaparray(odd, 5);
    printarray(odd, 5);
    return 0;
}

// S E C O N D - - M E T H O D
/*#include<iostream>
using namespace std;

int main(){
    int arr[10]={3,5,6,8,9,3,2,11,21,99};
    int temp,temp1,temp2,temp3,temp4;
    temp=arr[1];
    arr[1]=arr[0];
    arr[0]=temp;

    temp1=arr[3];
    arr[3]=arr[2];
    arr[2]=temp1;

    temp2=arr[5];
    arr[5]=arr[4];
    arr[4]=temp2;

    temp3=arr[7];
    arr[7]=arr[6];
    arr[6]=temp3;
    
    temp4=arr[9];
    arr[9]=arr[8];
    arr[8]=temp4;
    

    cout<<arr[0]<<" "<<arr[1]<<" ";
    cout<<arr[2]<<" "<<arr[3]<<" ";
    cout<<arr[4]<<" "<<arr[5]<<" ";
    cout<<arr[6]<<" "<<arr[7]<<" ";
    cout<<arr[8]<<" "<<arr[9];
}
*/