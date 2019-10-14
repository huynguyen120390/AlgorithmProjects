#include <stdio.h>
#include <assert.h>


int factorial(int num){
    if (num <= 1){
        return 1;
    }
    return num * factorial(num - 1);
}

int main(int arc, char ** argv){
    int num = 5;
    printf("%d",factorial(num));
    assert(factorial(num) == 120);
    return 0;
}