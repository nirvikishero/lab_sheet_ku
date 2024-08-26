#include<iostream>
using namespace std;
class Complex {
    public:
    int real,imaginary;
    Complex(int r, int i):real(r),imaginary(i){}
    Complex operator -(){
        return Complex(-real, -imaginary);
    }
    Complex operator +(const Complex& c){ return Complex(c.real+real,c.imaginary+imaginary);}
    
};
ostream& operator <<(ostream& os, const Complex& c){

    if (c.real > 0 || c.imaginary > 0){
        os<<"IMag number:"<<c.real<<"+i"<<c.imaginary<<endl<<endl;
    } else{
        os<<"imag number : "<<c.real<<"-i"<<-c.imaginary<<endl<<endl;
    }
}
int main(){
    Complex c(1,2);
    Complex c1(3,4);
    cout<<c;
    cout<<c1;
    cout<<c+c1;
    cout<<-c1;

}