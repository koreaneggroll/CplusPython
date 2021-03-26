#include <iostream>

using namespace std;


class Int{
    public:
        int value;
        Int(int val){
            value = val;
        }
};
typedef Int integer;

int main(void){
    integer integher = Int(255);

    cout << integher.value << endl;

}