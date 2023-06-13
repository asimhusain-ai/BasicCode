#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Nums To Reverse :- ";
    cin>>n;

    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;
    }
    cout<<"The Reverse Num is:- "<<rev;
    return 0;
}

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Nums To Reverse :- ";
    cin>>n;

    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        cout<<lastdigit;
        n=n/10;
    }
   
    return 0;
}*/