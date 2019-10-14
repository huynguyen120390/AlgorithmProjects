#include <iostream>
using namespace std;

int factorial(int num){
    if(num <= 1){
        return 1;
    }
    return num * factorial(num - 1);
}

int main(int argc, char ** argv){
    int num = 10;
    std::cout << factorial(num) << endl;

    assert(factorial(5) == 120);
    assert(factorial(6) == 720);
    return 0;
}