#include<iostream>
using namespace std;
int main(){
    int a,b,hcf;
    cout<<"Enter The Value Of A and B:- ";
    cin>>a>>b;
    for(int i=1; i<=a || i<=b; i++){
        if(a%i==0 && b%i==0);
            hcf=i;
    }
        cout<<hcf;
    
    return 0;
}