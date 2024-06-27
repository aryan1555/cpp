#include<iostream>
using namespace std;

class complex { 
int x;
int y;

    public:
    complex(){
        x=0;
        y=0;
    }
    complex(int a,int b){
        x=a;
    }
    void desplay (){
        cout<<"value of x :"<<x<<endl;
        cout<<"value of y :"<<y<<endl;
    }
    complex operator/(complex e){
        complex t;
        t.x=x/e.x;
        t.y=y/e.x;

        return t;


    }
};

int main (){
    complex s1,s2,s3;
    s1=complex(6,5);
    s2=complex(6,5);

    cout<<"first object"<<endl;
    s1.desplay ();
    cout<<"secon object"<<endl;
    s2.desplay ();
    cout<<"final output"<<endl;
    0
    s3=s1/s2;
    s3.desplay();
    return 0;
}


