#include<iostream>
#include<vector>
#include<string>
#include "note.cpp"

using namespace std;


class Pad{
protected:
    int number;
    vector<Note> notes;
    string name;

public:
    Pad(string n,int num=0){
        number=number;
        name=n;
    }

    Pad(string n,vector<Note>& vecnote,int num=0){
        name=n;
        notes=vecnote;
        number=num;
    }

    virtual ~Pad(){

    }

    void add_note(Note& note){
        notes.push_back(note);
    }
    
    void add_notes(vector<Note> vecnote){
        notes.insert(notes.end(),vecnote.begin(),vecnote.end());
    }

    void remove(int i){
        notes.erase(notes.begin()+i);
    }

    void remove(string dename){
        int flag=1;
        for(int i=0;i<notes.size();i++){
            string note_name=notes[i].show_name();
            if(!strcmp(dename.c_str(),note_name.c_str())){
                notes.erase(notes.begin()+i);
                flag=0;
            }
        }

        if(flag){
            printf("error: wrong name!\n");
        }
    }

    void show(){
        if(is_empty()){
            printf("error: no notes in pad!\n");
            return;
        }

        for(int i=0;i<notes.size();i++){
            printf("the %dth\n",i+1);
            notes[i].show_name();
        }
    }

    bool is_empty(){
        if(notes.size()){
            return 0;
        }
        return 1;
    }

};