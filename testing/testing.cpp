#include <iostream>
#include <string.h>
#include <stdarg.h>

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





class Int_List{
    public:
        int *value;

        Int_List(int *array){
            value = array;
        }

        void print();
        void append(int value);
        void clear();
        void copy(int *dest);
};
typedef Int_List Ilist;


void Int_List::print(){
    int size = sizeof(value)/sizeof(*value);

    for(int i = 0 ; i < size + 1; i++){
        cout << "[" << value[i] << "]" << ", ";
    }
}



void Int_List::append(int val){
    int size = sizeof(value)/sizeof(*value);

    value[size+1] = val;
}


void Int_List::clear(){
    int size = sizeof(value)/sizeof(*value);

    for(int i = 0; i < size+1; i++){
        value[i] = '\0';
    }
}


void Int_List::copy(int *dest){
    int size = sizeof(value)/sizeof(*value);

    for(int i = 0; i < size+1; i++){
        dest[i] = value[i];
    }
}





void print_int(int int_to_print){
        int a = int_to_print;

        if (int_to_print < 0){
                putchar('-');
                int_to_print = -int_to_print;
        }

        if (int_to_print > 9) print_int(int_to_print/10);

        putchar('0'+ (a%10));
}


/*Prints an integer array*/
void print_int_arr(int *arr, int size){
        for(int i = 0; i < size; i++){
                cout << "[" << arr[i] << "], ";
        }
}


/*Prints a double array*/
void print_double_arr(double *arr, int size){
        for(int i = 0; i < size; i++){
                cout << "[" << arr[i] << "], ";
        }
}

/*Prints a long array*/
void print_long_arr(long *arr, int size){
        for(int i = 0; i < size; i++){
                cout << "[" << arr[i] << "], ";
        }
}



/*Prints a string array*/
void print_str_arr(char **arr, int size){
	for(int i = 0; i < size+1; i++){
		cout << "[" << arr[i] << "], ";
	}
}




/*Basically printf but has array printing built in*/
void print(char *format, ...){
        va_list argp;
        va_start(argp, format);
        while (*format != '\0') {
                if (*format == '%') {
                                format++;
                        if (*format == '%') {
                                putchar('%');
                        } else if (*format == 'c') { //this is for a character
                                char char_to_print = va_arg(argp, int);
                                putchar(char_to_print);
                        }else if(*format == 's'){ //this is for a string
                                char *string_to_print = va_arg(argp, char*);
                                for(int i = 0; i < strlen(string_to_print); i++){
                                                putchar(string_to_print[i]);
                                }
                        }else if(*format == 'd'){ //this is for an integer
                                int int_to_print = va_arg(argp, int);
                                print_int(int_to_print);
                        }else if(*format == 't'){ //this is for an integer array
                                int *int_arr_to_print = va_arg(argp, int*);
                                int size = sizeof(int_arr_to_print)/sizeof(int_arr_to_print[0]);
                                print_int_arr(int_arr_to_print, size);
                        }else if(*format == 'e'){ //for double arrays
                                double *double_arr_to_print = va_arg(argp, double*);
                                int size = sizeof(double_arr_to_print)/sizeof(double_arr_to_print[0]);
                                print_double_arr(double_arr_to_print, size);
                        }else if(*format == 'g'){ //for long arrays
                                long *long_arr_to_print = va_arg(argp, long*);
                                int size = sizeof(long_arr_to_print)/sizeof(long_arr_to_print[0]);
                                print_long_arr(long_arr_to_print, size);
                        }else if(*format == 'r'){
				char **str_arr_to_print = va_arg(argp, char**);
				int size = sizeof(str_arr_to_print)/sizeof(str_arr_to_print[0]);

				print_str_arr(str_arr_to_print, size);
			}


                        else {
                                fputs("Not implemented", stdout);
                        }

                } else {
                        putchar(*format);
                }
                        format++;
                }
                putchar('\n');
                va_end(argp);   
}




int main(void){
}