#include <iostream>
#include <string.h>

using namespace std;


class Int{
    public:
        int value;
        Int(const int val){
            value = val;
        }
};
typedef Int integer;


class Str{
    public:
        char* value;
        Str(const char *val){
            strcpy(value, val);
        }

        size_t length();
        char* capitalize();
        char* casefold();
        size_t count(char val);
        bool endswith(char val);
        bool startswith(char val);
        size_t find(char val);
        size_t index(char val);
        char* join(char *str2);
        char* replace(char val, char rep);
};
typedef Str String;


size_t Str::length(){

    size_t len = 0;

    for(int i = 0; i < value[i] != '\0'; i++){
        len++;
    }

    return len;
}


char* String::capitalize(){
    value[0] = toupper(value[0]);

    return value;
}

char* String::casefold(){
    for(int i = 0; i < value[i] != '\0'; i++){
        value[i] = tolower(value[i]);
    }

    return value;
}


bool String::endswith(char val){
    size_t size = 0;

    for(int i = 0; value[i] != '\0'; i++){
        size++;
    }

    if(value[size-1] == val){
        return true;
    }

    return false;
}


size_t String::find(char val){
    for(int i = 0; i < value[i] != '\0'; i++){
        if(value[i] == val){
            return i;
        }
    }

    return -1;
}




class Chr{
    public:
        char value;

        Chr(char val){
            value = val;
        }


};
typedef Chr Char;



char ord(int ascii){
    return (char)ascii;
}


int chr(char c){
    return (int)c;
}



int main(void){
    String str = Str("whAtever");
    Char character = Char('2');

    cout << character.value << endl;

    cout << str.value << endl;
    cout << str.length() << endl;
    cout << str.capitalize() << endl;
    cout << str.casefold() << endl;
    cout << str.endswith('r') << endl;
    cout << str.find('w') << endl;

}