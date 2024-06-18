#include<iostream>

using namespace std;

class student {
    private:
    int adno;
    char sname[20];
    float eng,maths,sci;
    float  total;
    float ctotal(int eng, int maths, int sci);

    public:
    void getdata(){
        cout<<"enter the adnumber :";
        cin>>adno;
        cout<<"enter the  sname:";
        cin>>sname;
        cout<<"enter the eng marks :";
        cin>>eng;
        cout<<"enter the maths marks :";
        cin>>maths;
        cout<<"enter the sci:";
        cin>>sci;
    }
    void showdata (){
        cout<<"adno :"<<adno<<endl;
        cout<<"sname :"<<sname<<endl;
        cout<<"total :"<<ctotal(eng,maths,sci);
    }
};

float student::ctotal(int eng, int maths, int sci){
    return eng+maths+sci;
}
int main(){
class student st;
st.getdata();
st.showdata();
return 0;
}
