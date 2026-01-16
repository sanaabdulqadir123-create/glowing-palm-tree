#include<iostream>
using namespace std;


void swapnumber(int *u,int *t, int *s){

int temp;
temp = *u;
*u= *t;
*t = temp;

}


int main (){
    int u;
    int t;
    int s;
    
    cout<<"Enter 3 numbers:";
    cin>> u >> t >> s ;
    
    
    cout << "Before swap: " << u << " " << t << " " << s << endl;
   
    swapnumber(&s,&t,&s);
    cout << "After swap: " << u << " " << t << " " << s << endl;
    return 0;
}
    
    