#include<iostream>
using namespace std;
class area{
    public:
   void shape (int a){
        cout<<"Area of Square is:"<<a*a<<endl;
    }
    void shape(int l,int b){
        cout<<"Area of Rectangle is:"<<l*b<<endl;
    }
   void shape(double h,double z){
        cout<<"Area of Triangle is:"<<(z*h)/2<<endl;
    }
   void shape (double r){
       float pi=22/7;
       cout<<"Area of Circle is:"<<pi*r*r<<endl;
    }
};


int main(){
    area t;
   t.shape (7);
   t.shape (6,8);
   t.shape (4.4,3.5);
   t.shape (14.2);
    return 0;
}