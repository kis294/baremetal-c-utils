#include <stdio.h>
#include <stdint.h>
#include "mem_leaks.h"


void another_func(){
    //int* n1 = malloc(sizeof(int));
}

int main() {
    int *n1 = malloc(sizeof(int));
    free(n1);

    int *n2 = NULL;
    free(n2);

    int *n3 = malloc(sizeof(int));
    free(n3);
    free(n3);

    int *n4 = malloc(sizeof(int));
    free(n4);

    another_func();
    print_report();
    return 0;
}

