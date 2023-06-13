#include<iostream>
using namespace std;
int dummy(int n){
    n--;
    cout<<"N is :- "<<n<<endl;
}
int main(){
    int n;
    cin>>n;

    dummy(n);
    cout<<"The Value is "<<n<<endl;
}