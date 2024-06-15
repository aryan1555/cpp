#include<iostream>
using namespace std;

int main(){

    for (int i=0; i<10; i++){
        if (i==5){
            goto next;
}
cout<<"\t"<<i;
}
 next : for (int j=0; j<5; j++){
    cout<<"\t"<<j;
 }
 return 0;
}