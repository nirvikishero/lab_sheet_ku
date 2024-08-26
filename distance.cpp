#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    double d;
    cout<<"Enter the cordinate[x1 y1] : ";
    cin>>x1>>y1;
    cout<<"Enter the cordinate[x2 y2] : ";
    cin>>x2>>y2;
    d = (x1-x2)*(x1-x2) +(y1-y2)*(y1-y2);
    d = sqrt(d);
    cout<<"The distace between two point : "<<d<<endl;
}