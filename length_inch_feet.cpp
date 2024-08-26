#include<iostream>
using namespace std;
class Length {
    public :
    int feet,inch;
    Length (int f = 0, int i = 0 ):feet(f+i/12),inch(i%12){}
    Length operator+(const Length& l1){
        return Length(feet+l1.feet,inch+l1.inch);
    }
};
ostream& operator<<(ostream& os, const Length& p){
    os<<"Length : "<<p.feet<<"feet "<<p.inch<<"inch."<<endl<<endl;
}
int main(){
    Length l1(5,11);
    cout<<l1;
    Length l2(6,12);
    cout<<l2;
    cout<<l1+l2;
}