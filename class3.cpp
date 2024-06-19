#include<iostream>

using namespace std;

class batsman {

    private:

    int bcod;
    char bname [20];
    int innings, notout, runs;
    float batavg;
    float calcavg(int innings,int notout, int runs); 

    public:
    void readdata (){
        cout<<"enter the bcod number:";
        cin>>bcod;
        cout<<"enter the bname:";
        cin>>bname;
        cout<<"enter the innings:";
        cin>>innings;
        cout<<"enter the notout  :";
        cin>>notout;
        cout<<"enter the runs:";
        cin>>runs;
        calcavg(innings,notout,runs);
    }

    void showdata (){

        cout<<"bcode  :"<<bcod<<endl;
        cout<<"bname  :"<<bname<<endl;
        cout<<"innings:"<<innings<<endl;
        cout<<"notout :"<<notout<<endl;
        cout<<"runs   :"<<runs<<endl;
        cout<<"batavg   :"<<batavg;
    }

};

float batsman :: calcavg(int innings,int notout, int runs) {

return batavg=runs/(innings-notout);
}
int main (){
    class batsman st;
    st.readdata();
    st.showdata();
    return 0;
}
