#include<iostream>
#include<ctime>

using namespace std;



class Date{
protected:
    long time_seconds;
    tm* time_date;
public:
    Date(int year, int month=1, int day=1, int hour=0, int minute=0, int seconds=0){
        time_date->tm_year=year;
        time_date->tm_mon=month;
        time_date->tm_mday=day;
        time_date->tm_hour=hour;
        time_date->tm_min=minute;
        time_date->tm_sec=seconds;
        time_date->tm_isdst=false;

    }

    Date(){
        time_seconds=time(0);
        time_date=localtime(&time_seconds);
    }

    ~Date(){
        delete [] time_date;
    }
};