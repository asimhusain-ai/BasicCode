#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number To Operate :- ";
    cin>>num;

    int lastdigit=num%10;
    while(num>9){
        num=num/10;
    }
    int sum=lastdigit+num;
    cout<<"The Sum Of First + LastDigit :- "<<sum;
    return 0;
}