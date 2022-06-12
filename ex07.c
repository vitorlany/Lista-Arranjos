#include <stdlib.h>
#include <stdio.h>

int main() {
    srand(time(NULL));
    int numero = (rand() % (50 - 15 + 1)) + 15;
    
    return 0;
}