#include<iostream>
using namespace std;
int main (){
    char str[7]="HELLO";

    for (int i=0; i<=5; i++){

        for (int j=0; j<i;j++){

            cout<<str[j];
        }
        cout<<endl;
    }
    return 0;
}