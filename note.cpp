#include "note.h"
#include<iostream>



void Note::show_content(){
    if(!content.length()){
        printf("content is empty\n");
    }
    else{
        std::cout<<content<<std::endl;
    }
}

string Note::show_name(){
    printf("name: ");
    std::cout<<name<<std::endl;
    return name;
}

void Note::show_create_time(){
    printf("create time: ");
    create_time->show_date();
}

void Note::show_deadline(){
    if(deadline->seconds()>create_time->seconds()){
        printf("deadline: ");
        deadline->show_date();
    }
    else{
        printf("this note has no deadline.\n");
    }
}

int Note::show_num(){
    printf("the number of this note is: %d",num);
    return num;
}

void Note::show(){
    printf("\n");
    show_name();
    show_create_time();
    if(deadline->seconds()>create_time->seconds()){
        show_deadline();
    }
    show_content();
    printf("\n");
}


void Note::set_deadline(int year,int month=1,int day=1,int hour=0,int minute=0,int seconds=0){
    delete deadline;
    deadline=new Date(year,month,day,hour,minute,seconds);
}


void Note::set_name(string n){
    name=n;
}


void Note::set_content(string n){
    content=n;
}


void Note::add_content(string n){
    content+=n;
}

void Note::delete_content(){
    content="";
}