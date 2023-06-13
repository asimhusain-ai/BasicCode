// Without Using Function
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Num :- ";
    cin>>n;
    int a=0;
    int b=1;
    for (int i = 0; i<=n; i++){
        int nextnum=a+b;
        cout<<nextnum<<endl;
        a=b;
        b=nextnum;
    }
     
    return 0;
}

// With Using function

/*#include<iostream>
using namespace std;
int asim(int n){
    int a=0;
    int b=1;
    cout<<a<<b<<endl;
    for (int i =1; i<=n; i++){
        int nextnum=a+b;
        cout<<nextnum<<endl;
        a=b;
        b=nextnum;
    }

}
int main(){
    int n;
    cout<<"Enter The Num :- ";
    cin>>n;

    asim(n);
    return 0;
}
*/