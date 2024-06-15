#include<iostream>
using namespace std;

float intrest (int p,int t,int r){
  float area;
    area=p*t*r/100;
    return area;

}
int main (){
  float area;
  area=intrest(10000,2,5);
  cout<<area;
  

    return 0;
}