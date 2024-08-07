#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter First number ";
    cin>>a;
    cout<<"Enter Second number ";
    cin>>b;
    cout<<"Enter Third number ";
    cin>>c;
    int *p1=&a;
    int *p2=&b;
    int *p3=&c;
    
    cout<<"The address of 'a' is "<<p1<<endl; 
    cout<<"The address of 'b' is "<<p2<<endl; 
    cout<<"The address of 'c' is "<<p3<<endl; 
    
    
    
    cout<<*p1<<endl;
    cout<<*p2<<endl;
    cout<<*p3<<endl;
    
    int sum = *p1+*p2+*p3;
    cout<<"The Sum of three numbers are "<<sum;

  return 0;
    
    
    
}
