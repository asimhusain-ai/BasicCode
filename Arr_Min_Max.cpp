#include <iostream>
#include <climits>
using namespace std;
int getMin(int num[],int size){
    int max=INT_MIN;

    for(int i=0; i<size; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}
int getMax(int num[],int size){
    int min=INT_MAX;

    for(int i=0; i<size; i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int main(){
    int size=10;

    int num[10]={1,2,3,4,5,6,7,8,9,8};
    for(int i=0; i<num[10];i++){
    }
    cout<<"The Maximum Value is :- "<<getMax(num,size);
    cout<<"\nThe Minimum Value is :- "<<getMin(num,size);
    return 0;
}