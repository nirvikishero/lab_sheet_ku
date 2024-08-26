#include<iostream>
using namespace std;
class Age{
    public:
    int year,month,day;
    int age;
    Age(int y=0, int m=0, int d=0):year(y),month(m),day(d){}
    int operator-(const Age& birth){
        int age = year - birth.year;
        if (month < birth.month || day < birth.day ){
            age--; // ek din ek mahina le garda ni age kaam hunxa
        }
        return age;
    }

};
int main(){
    Age current_date(2024,8,26);
    Age date_of_birth(2003,11,24);
    cout<<"The Age is : "<<current_date - date_of_birth<<endl; 
}