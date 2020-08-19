#include<string.h>
#include<iostream>
#include<ctime>
#include<string>
#include "date.h"



using std::string;

class Note{

protected:
    string name;
    string content;
    int num=0;
    Date *create_time;
    Date *deadline;

public:

    Note(int t, string m, string n=""){                         //input number, name, content default as empty
        name=m;
        content=n;
        num=t;
        deadline=new Date(1999);
        create_time=new Date;
    }


    virtual ~Note(){
        delete create_time;
        delete deadline;
    }

    void show();                                               //user interface     
    void show_create_time();
    string show_name();
    void show_content();
    void show_deadline();
    int show_num();

    void set_deadline(int year,int month,int day,int hour,int minute,int seconds);
    void set_name(string n);
    void set_content(string n);
    void add_content(string n);
    void delete_content();


};