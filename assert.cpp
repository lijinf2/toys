#include <iostream>
#include <cstdlib>
#define myassert(expression, message) expression || (prompt(#expression, #message, __FILE__, __LINE__));
bool prompt(const char* expression, const char* message, const char* filename, unsigned int line){
    std::cout << filename << ":" << line 
        << ":" << "Assert " << "\'" << expression << "\'" << " failed, " 
        << message << std::endl;
    abort();
    return false;
}
int main(){
    int a = 2;
    myassert(a != 2, user-defined-messages);
}

