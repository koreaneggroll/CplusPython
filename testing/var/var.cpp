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
};
typedef Str String;


size_t Str::length(){

    size_t len = 0;

    for(int i = 0; i < value[i] != '\0'; i++){
        len++;
    }

    return len;
}


int main(void){
    String str = Str("whatever");

    cout << str.value << endl;
    cout << str.length() << endl;

}