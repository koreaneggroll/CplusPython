#include "./cpluspython.h"

using namespace std;


//INT DATATYPE

void Int::print(){
    cout << value << endl;
}

//INT DATATYPE END


//STRING DATATYPE

size_t String::length(){
    size_t len = 0;
    
    for(int i = 0; value[i] != '\0'; i++){
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


size_t String::count(char val){
    size_t counted = 0;

    for(int i = 0; value[i] != '\0'; i++){
        if(value[i] == val){
            counted++;
        }
    }

    return counted;
}



bool String::endswith(char val){
    int size;

    for(int i = 0; value[i] != '\0'; i++){
        size++;
    }

    if(value[size] == val){
        return true;
    }

    return false;
}


bool String::startswith(char val){
    if(value[0] == val){
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

size_t String::index(char val){
    for(int i = 0; i < value[i] != '\0'; i++){
        if(value[i] == val){
            return i;
        }
    }

    return -1;
}


char* String::join(char *str2){
    char *str3 = (char*)malloc(sizeof(value) + sizeof(str2));

    if(!str3){
        cout << "\n\nERROR: Couldn't allocate memory. join()\n" << endl;
        exit(1);
    }

    strcpy(str3, value);
    strcat(str3, str2);

    return str3;
}



char* String::replace(char val, char rep){
    for(int i = 0; value[i] != '\0'; i++){
        if(value[i] == val){
            value[i] = rep;
        }   
    }

    return value;
}



char* String::upper(){
    for(int i = 0; value[i] != '\0'; i++){
        value[i] = toupper(value[i]);
    }

    return value;
}



void String::print(){
    cout << value << endl;
}


//STRING DATATYPE END




//INT_ARR DATATYPE

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



size_t Int_List::count(int val){
    size_t size = sizeof(value)/sizeof(*value);
    size_t count = 0;

    for(int i = 0; i < size+1; i++){
        if(value[i] == val){
            count++;
        }
    }


    return count;
}



//INT_ARR DATATYPE END






//FUNCTIONS
char ord(int ascii){
    return (char)ascii;
}


int chr(char c){
    return (int)c;
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