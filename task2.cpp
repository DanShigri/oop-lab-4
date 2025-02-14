#include <iostream>
#include <string>
using namespace std;

class WeekDays {
private:
    string Days[7];
    int CurrentDay;
public:
    WeekDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = 0;
    }
    WeekDays(int day) {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
     Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = day % 7; 
    }
    string getCurrentDay() const {
        return Days[CurrentDay];
    }
    string getNextDay() const {
        return Days[(CurrentDay + 1) % 7];
    }

    string getPreviousDay() const {
        return Days[(CurrentDay + 6) % 7]; 
    }

    string getNthDayFromToday(int N) const {
        return Days[(CurrentDay + N) % 7];
    }
};

int main() {
    WeekDays today;
    cout << "Current day: " << today.getCurrentDay() << endl;
    cout << "Next day: " << today.getNextDay() << endl;
    cout << "Previous day: " << today.getPreviousDay() << endl;
    cout << "Day in 20 days: " << today.getNthDayFromToday(20) << endl;
    WeekDays customDay(8); 
    cout << "Custom day: " << customDay.getCurrentDay() << endl;
    cout << "Next day from custom day: " << customDay.getNextDay() << endl;

    return 0;
}

