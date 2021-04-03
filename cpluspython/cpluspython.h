//Header guard
#ifndef C_PLUS_PYTHON
#define C_PLUS_PYTHON


//INCLUDES
#include <iostream>
#include <string.h>
#include <stdarg.h>



//DEFINES
#define AND &&
#define OR ||
#define IN ,
#define IS ==
#define ISNT !=
#define True 1
#define False 0


//CLASSES
class Int{
    public:
        int value;
        Int(int val){
            value = val;
        }

        //FOLLOWING FUNCTIONS ARE FOR THE C PROGRAMMING LANGUAGE(don't really work)
        void print();
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
        //Returns an upper case version of the origin string
        char* upper();

        //FOLLOWING FUNCTIONS ARE FOR THE C PROGRAMMING LANGUAGE(don't really work)
        void print();
};
typedef Str String;



class Chr{
    public:
        char value;

        Chr(char val){
            value = val;
        }


};
typedef Chr Char;




class Int_List{
    public:
        int *value;

        Int_List(int *array){
            value = array;
        }
        //prints the list
        void print();
        //adds an element to the end of the list
        void append(int val);
        //sets all of the arrays elements to 0
        void clear();
        //Copies 1 arrays elements into anothers
        void copy(int *dest);
        //Returns the number of elements with the specified value
        size_t count(int value);
};
typedef Int_List Ilist;





//FUNCTIONS
//Converts from ascii to character
char ord(int ascii);
//Converts from character to ascii
int chr(char c);


void print_int(int int_to_print);


/*Prints an integer array*/
void print_int_arr(int *arr, int size);


/*Prints a double array*/
void print_double_arr(double *arr, int size);

/*Prints a long array*/
void print_long_arr(long *arr, int size);


/*Prints a string array*/
void print_str_arr(char **arr, int size);

/*Basically printf but has array printing built in*/
void print(char *format, ...);



#endif //C_PLUS_PYTHON
//Header guard end