#include<iostream>
using namespace std ;
class test {

    private :
    int testcode,nocandidate,centerreqd;

    string description;


    public :
    void schedule()
    {
        cout<<"enter the testcode  : ";
        cin>>testcode;
        cout<<"enter the description : ";
        cin>>description;
        cout<<" enter the nocandidate ";
        cin>>nocandidate;
        centerreqd = calcntr();
    };
    void disptest()
    {
        cout<<"testcode"<<testcode<<endl;
        cout<<"nocandidate "<<nocandidate<<endl;
        cout<<"centerreqd"<<centerreqd<<endl;
        cout<<"description"<<description<<endl;
    }

};
    float calcntr()
    {
        return (nocandidate/100+1);
    }
int main()
{
    test t;
    t.schedule();
    t.disptest();
    
    return 0;
}
