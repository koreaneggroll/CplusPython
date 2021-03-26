#include "./cpluspython.h"

class Str{
    public:
        char* value;
        Str(const char *val){
            strcpy(value, val);
        }

        size_t length();
};
typedef Str String;