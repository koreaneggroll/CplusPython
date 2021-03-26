//Header guard
#ifndef C_PLUS_PYTHON
#define C_PLUS_PYTHON


//INCLUDES
#include <iostream>
#include <string.h>



//DEFINES
#define and &&
#define or ||
#define in ,
#define is ==
#define isnt !=


//CLASSES
class Int{
    public:
        int value;
        Int(int val){
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
        //Returns the length of a string
        size_t length();
        //Returns the string with the firstr letter capitalized
        char* capitalize();
        //Returns a lowercased string
        char* casefold();
        //Returns how many times a value was found in a string
        size_t count(char val);
        //Returns 0 if the string ends with the specified value
        bool endswith(char val);
        //Returns 0 if the string starts with the specified value
        bool startswith(char val);
        //Returns the index of a value in the string
        size_t find(char val);
        //Returns the index of a value in the string
        size_t index(char val);
        //Returns a third string joining 2 strings
        char* join(char *str2);
        //Replaces every accurence of a character in a string with another replacement
        char* replace(char val, char rep);
};
typedef Str String;




#endif //C_PLUS_PYTHON
//Header guard end