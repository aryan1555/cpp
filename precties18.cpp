#include<iostream>
using namespace std;

int main (){

    int i,j,n;
    for(i=1; i<=10; i++){

         for(j=1; j<=10; j++){
            if(i==1||i==10||j==10||i==j||(i+j)%2==0){
                cout<<"*";
            }else
            cout<<" ";
         }
         cout<<endl<<"\t";
    }
    return 0;
}
    
