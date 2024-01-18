#include <iostream>
#include <ostream>
#include <iomanip>

using namespace std;

class Time {
    private:
    int hr{0};
    int min{0};
    int sec{0};

    static void setInterval(int &toAlterate, int value, int start, int end){
        if (value > end || value < start) {
            toAlterate = 0;
            return;
        } else {
            toAlterate = value;
            return;
        }
    }

    public:
    friend ostream& operator<<(ostream& os, Time time){
        os << setw(2) << setfill('0') << time.hr << ":" << setw(2) << setfill('0') << time.min << ":" << setw(2) << setfill('0') << time.sec;
        return os;
    }

    Time(int hr, int min, int sec) : hr(hr), min(min), sec(sec){}

    void nextSecond(){
        setSec(getSec() + 1);
        if (!getSec()){
            setMin(getMin() + 1);
            if  (!getMin()){
                setHr(getHr() + 1);
            }
        }
    }

    void setHr(int value){
        setInterval(hr, value, 0, 23);
    }
    void setMin(int value){
        setInterval(min, value, 0, 59);
    }
    void setSec(int value){
        setInterval(sec, value, 0, 59);
    }

    int getHr(){
        return hr;
    }
    int getMin(){
        return min;
    }
    int getSec(){
        return sec;
    }
    
};

int main() {
    Time tempo {23, 59, 22};
    for (int i = 0; i < 80; i++){
        tempo.nextSecond();
        cout << tempo << endl;
    }
    tempo.setHr(25);
    cout << tempo << endl;
    return 0;
}