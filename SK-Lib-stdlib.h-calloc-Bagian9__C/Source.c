#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int number = -1;
int element_size = 1000;

int main() {
    void* p = calloc(number, element_size);      // Boom!
    printf("calloc returned: %zu\n", (size_t)p);

    _getch();
    return 0;
}