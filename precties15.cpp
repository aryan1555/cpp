#include<iostream>
using namespace std;

void devide(int a, int b){
    cout<<endl<<a/b;
}
int subtrec (int a, int b){
    int total;
    total=a-b;
    return total;
}
int main (){
    devide(50,10);
    int total;
    total=subtrec(50,10);
    cout<<"total";
    return 0;
}