#include<iostream>
using namespace std;
int main ()
{
  
  int marks1;
  int marks2;
  int marks3;
  
  cout<<"enter the first subject marks :";
  cin>>marks1;
  cout<<"enter the seconed subject marks :";
  cin>>marks2;
  cout<<"enter the thered subject marks :";
  cin>>marks3;
  float percentage=(marks1+marks2+marks3)/3;
  
  if (percentage>33){
	  cout<<"pass";
	  
  }else{
	  cout<<"faill";
  }
   return 0;
  
  }