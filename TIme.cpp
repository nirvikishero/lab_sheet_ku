#include<iostream>
using namespace std;
class Time {
    public:
    int hour,minute,seconds;
    public:
    Time(int h = 0, int m = 0, int s =0 ){
        hour=h;
        minute=m;
        seconds=s;
        }
    Time(const Time& m,const Time& n){
        seconds = m.seconds + n.seconds;
        minute = m.minute + n.minute + seconds/60;
        hour = m.hour + n.hour + minute/100;
        minute %= 60;
        seconds %= 60;
    }
    void display_time(){
        cout<<"Time : "<<hour<<"hr : "<<minute<<"min : "<<seconds<<"sec."<<endl<<endl;
    }
};
int main(){
    Time t1(1,45,48);
    Time t2(2,45,38);
    t1.display_time();
    t2.display_time();
    Time t3(t1,t2);
    t3.display_time();
    return 0;
}