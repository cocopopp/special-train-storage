#include <iostream>
#include <string>
 
using namespace std;
 
class Date{
private:
    int year;
    int month;
    int day;
public:
    Date(int y, int m, int d){year = y; month = m; day = d;}
    Date(string);
    int getYear(){return year;}
    int getMonth(){return month;}
    int getDay(){return day;}
    void show(){cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << endl;}
};
Date::Date(string str){
    int temp;
    int len = (int)str.length();
    
	temp = stoi(str.substr(0, 4));

    year = temp;

	temp = (str[6] == '/') ? ((int)str[5] - 48) : stoi(str.substr(5, 7));

    month = temp;
    
	temp = (str[len - 2] == '/') ? ((int)str[len - 1] - 48) : stoi(str.substr(len - 2));
    
    day = temp;
}
 
int main(void){
    Date birth(2014, 3, 20);
    Date independanceDay("1945/8/15");
    
    independanceDay.show();
    
    cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl;

    return 0;
}