#include <iostream>
#define NDEBUG
#include <cassert>

int main(){
    assert(2 + 2 == 4); // int + int ok

    assert("a" +"a" == "aa"); // char + char = string ok 
    
    assert(3.14159265359 == 3.14159265359); // float == float

    assert(1 != -1); // signo

    assert("Hola mundo" != "hola mundo"); // string

    assert(true || false == false); // bool

}