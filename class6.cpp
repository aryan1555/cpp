#include<iostream>
using namespace std ;
class book 
{
     private :
    int bookno,n;
    string booktitle ;
    float price,totalcost ;
    
    float total_cost(int num)
    {
        return price * num ;
    }

    public :
    void input()
    {
        cout<<"enter the book no:";
        cin>>bookno;
        cout<<"enter the book title :";
        cin>>booktitle;
        cout<<"enter price : ";
        cin>>price;
    }
    void purchase()
    {
        cout<<"enter the number of the copies";
        cin>>n;
        totalcost = total_cost(n);
    }
    void displaydata()
    {
        cout<<"book no :"<<bookno<<endl;
        cout<<"book title"<<booktitle<<endl;
        cout<<"price"<<price<<endl;
        cout<<"number of the copies"<<n<<endl;
        cout<<"total cost :"<<totalcost<<endl;
    }
};
int main ()
{
    book t;
    t.input();
    t.purchase();
    t.displaydata();
}