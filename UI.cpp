#include<iostream>
#include<string.h>
#include<map>
#include<string>

using namespace std;

#define MAXLENGTH 80

const map<string, int> commands={                   //commands list   
    {"add",0},
    {"ls",1},
    {"list",1},
    {"delete",2},
};


/*
execute command
*/
void execute(char *command){
    int flag=0;                                     //flag show that  if the command exists
    
    
    for (auto t: commands){
        if (!strcmp(t.first.c_str(),command)){
            flag=1;
        }
    }


    if (!flag){
        cout<<"error: command not found"<<endl;
        return;
    }
    else{
        printf("%s: \n",command);
        
    }

}


/*
User Interface function
*/
void shell(void){
    char command[MAXLENGTH];

    while(true){
        cout<<"pzc: ";
        cin>>command;

        if (!strcmp(command,"exit")){
            return;
        }
        else{
            execute(command);
        }
    }
}