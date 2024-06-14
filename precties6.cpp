#include<iostream>
using namespace std;

int main (){

    int a;
    cout<<"enter the number:";
    cin>>a;

    if (a>0){
        cout<<"it is a positive :";
    }else if (a<0){

        cout<<"it is negative";

    }else{
        cout<<"it is a 0";
    }
    return 0;
}