#include <iostream>
using namespace std;

void calAge();
int validateYear(int birthYear);
int validateMonth(int birthMonth);
int validateDay (int birthDay, int month, int year);
void calcAge (int years, int months, int days, int currentDay, int currentMonth,int currentYear);

int main () {
    calAge();
    return 0;
}

void calAge() {
    int currentDay = 3;
    int currentMonth = 11;
    int currentYear = 2025;

    int birthYear;
    int birthMonth;
    int birthDay;

    int years;
    int months;
    int days;

    cout << "enter your year from 1980-2025" << endl;
    cin >> birthYear;
    birthYear=validateYear(birthYear);

    cout << "enter your month" << endl;
    cin >> birthMonth;
    birthMonth = validateMonth(birthMonth);

    cout << "enter your day" << endl;
    cin >> birthDay;
    birthDay=validateDay(birthDay, birthMonth, birthYear);


    years = currentYear - birthYear;
    months = currentMonth - birthMonth;
    days = currentDay - birthDay;

    if (days < 0) {
        days+=30;
        months--;

    }
    if (months < 0) {
        months+=12;
        years--;
    }

    cout << "your are " << years << "y " << months << " months " << "and " << days << " days";
}

int validateYear(int birthYear) {
    while (birthYear < 1980 || birthYear > 2025) {
        cout << "enter your year from 1980-2025";
        cin >> birthYear;
    }

    return birthYear;
}

int validateMonth(int birthMonth) {

    while (birthMonth < 0 || birthMonth > 12) {
        cout << "enter your month";
        cin >> birthMonth;
    }
    return birthMonth;
}

int validateDay (int birthDay, int month, int year) {
        int maxDay;
        if (month == 2) {
            if (year % 4 == 0) {
                maxDay = 29;
            } else {
                maxDay = 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDay = 30;
        } else {
            maxDay = 31;
        }

        while (birthDay < 1 || birthDay > maxDay) {
            cout << "enter your day (1-" << maxDay << "): ";
            cin >> birthDay;
        }
        return birthDay;
}
