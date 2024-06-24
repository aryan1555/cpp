#include<iostream>
using namespace std;
class volume{
    public:
    void value(int a){
        cout<<"Volume of Cube is:"<<a*a*a<<endl;
    }
     void value(int l,int b,int h){
        cout<<"Volume of Cuboid is:"<<l*b*h<<endl;
    }
    void  value(int r,int h){
        float pi=22/7;
        cout<<"Volume of Cone is:"<<(pi)*r*r*h/3<<endl;
    }
     void value(double z){
         float pi=22/7;
         cout<<"Voume of Sphere is:"<<(4*(pi)*z*z*z)/3<<endl;
     }
};
int main(){
    volume t; 
    t.value(6);
    t.value(5,8,9);
    t.value(4,5);
    t.value(9.9);
    return 0;
}