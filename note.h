#include<string.h>
#include<iostream>
#include<ctime>


using namespace std;

class Note{

protected:
    string name="";
    string content="";
    int num=0;

public:

    Note(int t, string m, string n=""){
        name=m;
        content=n;
        num=t;
    }


};