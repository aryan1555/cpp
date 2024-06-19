#include<iostream>
using namespace std ;
class flight 
{
    private:
    int flightno ;
    string  destination ;
    float distance,fuel ;

    float calfuel()
    {
        if(distance<=1000)
        {
            fuel = 500 ;
        }
        else if(distance>1000 && distance <= 2000)
        {
            fuel = 1100 ;
        }
        else
        {
            fuel = 2200 ;
        }
        return fuel ;
    }

    public:
    void readdata ()
    {
        cout<<"enter the flightno= ";
        cin>>flightno;
        cout<<"enter the destination =";
        cin>>destination;
        cout<<"enter the distance ";
        cin>>distance;
        
        fuel = calfuel();
    }

    void showdata()
    {
        cout<<"flightno :"<<flightno<<endl;
        cout<<"destination : "<<destination<<endl;
        cout<<"distance : "<<distance<<endl;
        cout<<"used fuel :"<<fuel<<endl;
    }
};
int main()
{
    flight t;
    t.feedinfo();
    t.showinfo();
}