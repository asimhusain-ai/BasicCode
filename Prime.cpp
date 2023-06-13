#include<iostream>
using namespace std;
int main(){
    int n,prime=0;
    cout<<"Enter The Num To Check :- ";
    cin>>n;
    for(int i=1; i<=5; i++){
        if(n%i==0){
            prime++;
        }
    }
    if(prime==2){
        cout<<" P R I M E ";
    }
    else{
        cout<<" N O T  P R I M E ";
    }
    return 0;
}