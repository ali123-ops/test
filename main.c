#include <stdio.h>

int main (argc, *argv[]){

    int i;
    
    printf("argc= %d", argc);

    for(i=0; i<=argc; i++){
        printf("argv[%d] = %s", i, argv[i]);
    }

    return 0;
}