#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string minutesSeconds = s.substr(2, 6);  // ":MM:SS"

    bool isPM = s.find("PM") != string::npos;

    if (isPM) {
        if (hour != 12) hour += 12;
    } else {
        if (hour == 12) hour = 0;
    }

    string hh = (hour < 10 ? "0" : "") + to_string(hour);

    return hh + minutesSeconds;

}


int main() {
    timeConversion("07:05:45PM");
    return 0;
}