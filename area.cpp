#include<iostream>
#define PI 3.14
using namespace std;
// Area of circle is denoted by areac
int areac(float x){
    cout<<"Area of circle is :"<<PI*x*x;
    return 0;
}
// Area of rectangle is denoted by arear
int arear(int a, int b){
    cout<<"\nArea of rectangle is: "<<a*b;
    return 0;
}
// Area of triangle is denoted by areat
int areat(int l, int m){
    cout<<"\nArea of triangle is: "<<(l*m)/2;
}
int main(){
    areac(7);
    arear(4,6);
    arear(55,44);
    areat(3,4);
    return 0;
}
