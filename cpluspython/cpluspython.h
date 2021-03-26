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

        size_t length();
        char* capitalize();
        char* casefold();
        size_t count(char val);
        int endswith(char val);
        int startswith(char val);
        size_t find(char val);
        size_t index(char val);
        char* join(char *str2);
        char* replace(char val, char rep);
};
typedef Str String;




#endif //C_PLUS_PYTHON
//Header guard end