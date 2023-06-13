#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter The Num To Find Factorial :- ";
    cin>>n;

    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    cout<<"The Factorial Is :- "<<fact;
    return 0;
}