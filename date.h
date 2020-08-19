#include<iostream>
#include<ctime>




/*
class of date
default as current time
store seconds since 1900 and date
*/
class Date{
protected:
    long time_seconds=0;                    //seconds since 1900
    tm* time_date=new tm;                          //date 
public:
    Date(int year, int month=2, int day=7, int hour=0, int minute=0, int seconds=0){
        time_date->tm_year=year-1900;
        time_date->tm_mon=month-1;
        time_date->tm_mday=day;
        time_date->tm_hour=hour;
        time_date->tm_min=minute;
        time_date->tm_sec=seconds;

        time_seconds=mktime(time_date);
    }

    Date(){
        time_seconds=time(0);
        time_date=localtime(&time_seconds);
    }

    virtual ~Date(){
        delete time_date;
    }

    long show_seconds(){
        printf("seconds since 1900: %li\n",time_seconds);
        return time_seconds;
    }

    long seconds(){
        return time_seconds;
    }

    void show_date(){
        printf("%d.%d.%d %d:%d:%d\n",time_date->tm_year+1900,time_date->tm_mon+1,time_date->tm_mday,time_date->tm_hour,time_date->tm_min,time_date->tm_sec);        
    }

    
};