#include<iostream>
using namespace std;
int main(){
  int size;
  cout<<"Enter The Value Of Size :- ";
  cin>>size;

  int sum=0;

  int arr[size];
  cout<<"Enter "<<size<<" Integers :- ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
    sum=sum+arr[i];
  }
  cout<<"The Sum Is :- "<<sum;
  return 0;
}