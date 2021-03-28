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



//INT_ARR DATATYPE END






//FUNCTIONS
char ord(int ascii){
    return (char)ascii;
}


int chr(char c){
    return (int)c;
}
