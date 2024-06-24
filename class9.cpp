#include<iostream>
using namespace std;
class area{
    public:
    area(int a){
        cout<<"Area of Square is:"<<a*a<<endl;
    }
    area(int l,int b){
        cout<<"Area of Rectangle is:"<<l*b<<endl;
    }
    area(double h,double z){
        cout<<"Area of Triangle is:"<<(z*h)/2<<endl;
    }
    area(double r){
       float pi=22/7;
       cout<<"Area of Circle is:"<<pi*r*r<<endl;
    }
};


int main(){
    area obj(7),obj1(6,8),obj2(4.4,3.5),obj3(14.2);
    return 0;
}