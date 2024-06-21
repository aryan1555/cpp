#include<iostream>
using namespace std;

class Test{
    public :
    Test (int a){
        cout<<"value a is :"<<a<<endl;
    }
    Test(char a){
        cout<<"value a is :"<<a<<endl;
    }
    Test(int a,int b){
        cout<<"addition a and b is : "<<a+b<<endl;
    }
    Test(int a,int b ,int c){
        cout<<"addition a ,b and c is :"<<a+b+c<<endl;
    }

};
int main (){
    Test obj(10,20,30),obj1(10),obj2('A'),obj3(10,20);
    return 0;
}
