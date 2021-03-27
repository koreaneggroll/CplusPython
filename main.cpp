#include <iostream>
#include "cpluspython/cpluspython.h"

using namespace std;

int main(void){
        String str = String("Hello world");
        Int number = Int(255);

        cout << str.value << endl;
        cout << number.value << endl;
}