#include<iostream>
using namespace std;
int main(){
    int n,a,b=0;
    cout<<"Enter Number To Check :- ";
    cin>>n;
    a=n;

    while(n>0){
        int digit=n%10;
        b=b*10+digit;
        n=n/10;
    }
    if(a==b){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    return 0;
}