#include<iostream>
using namespace std ;

int fibo (int n){
    if (n==1||n==0){

        return 1;
    }else{
        return (fibo(n-1)+fibo(n-2));
    }
}

int main (){

    int n;
    for (int i=1; i<10; i++){

        cout<< int(fibo(i))<<"\t";
    }
    return 0;
}