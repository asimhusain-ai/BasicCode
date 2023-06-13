#include<iostream>
using namespace std;
int main(){
    int amount,a,b,c,d,e,f,g,h,i;
    a=b=c=d=e=f=g=h=i=0;
    cout<<"Enter The Nums Of Notes :- ";
    cin>>amount;
    
    switch(amount>=500){
        case 1:
        a=amount/500;
        amount=amount%500;
        break;
    }
    switch(amount>=200){
        case 1:
        b=amount/200;
        amount=amount%200;
        break;
    }
    switch(amount>=100){
        case 1:
        c=amount/100;
        amount=amount%100;
        break;
    }
    switch(amount>=50){
        case 1:
        d=amount/50;
        amount=amount%50;
        break;
    }
    switch(amount>=20){
        case 1:
        e=amount/20;
        amount=amount%20;
        break;
    }
    switch(amount>=10){
        case 1:
        f=amount/10;
        amount=amount%10;
        break;
    }
    switch(amount>=5){
        case 1:
        g=amount/5;
        amount=amount%5;
        break;
    }
    switch(amount>=2){
        case 1:
        h=amount/2;
        amount=amount%2;
        break;
    }
    switch(amount>=1){
        case 1:
        i=amount/1;
        amount=amount%1;
        break;
    }
    cout<<"The Notes Are Divided According To Their Types "<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"500 :- "<<a<<endl;
    cout<<"200 :- "<<b<<endl;
    cout<<"100 :- "<<c<<endl;
    cout<<"50  :- "<<d<<endl;
    cout<<"20  :- "<<e<<endl;
    cout<<"10  :- "<<f<<endl;
    cout<<"5   :- "<<g<<endl;
    cout<<"2   :- "<<h<<endl;
    cout<<"1   :- "<<i<<endl;
    return 0;
}