#include <iostream>
using namespace std;
class solid
{
   

    public:
    solid(int a)
    {
        cout << " Volume of Cube : " << (a * a * a)<<endl; 
    }
    solid(double r)
    {
    float pi=22/7;
       cout<<"Volume of sphere Cone : " <<(4*(pi)*r*r*r)/3<<endl;
    }
    solid(int l,int b,int )


};

int main (){
    solid obj(10),obj1(5.0);
    return 0;
}