#include<iostream>
using namespace std;
int main ()
  {
  int a;
  int b;
  int c;
   
   cout<<"value of a :";
   cin>>a;
   cout<<"value of b :";
   cin>>b;
   
   c=a;
   a=b;
   b=c;
    
	cout<<"value of a :"<<a;
	cout<<endl<<"value of b :"<<b;
	
	return 0;
  }