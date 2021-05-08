#include <iostream>
//#define NDEBUG
#include <cassert>

int main(){
    assert(2 + 2 == 4); // int + int ok

    assert('a' != "a"); // char != string ok 
    
    assert(3.14 == 3.14); // float == float

    assert(1 != -1); // unsigned

    assert("Hola mundo" != "hola mundo"); // string

    assert(true || false == false); // bool

}
