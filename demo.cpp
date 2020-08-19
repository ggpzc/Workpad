#include<iostream>
#include<ctime>

#include "pad.h"

using namespace std;

int main(){
    Note t(1,"aasd");
    t.show();

    t.set_deadline(2021);

    t.show();


    t.set_name("pzc");

    t.show();

    t.set_content("h");

    t.show();

    t.add_content("andsome");

    t.show();

    t.delete_content();
    t.show();

    Pad pad1("pad1");
    pad1.notes


    return 0;
}