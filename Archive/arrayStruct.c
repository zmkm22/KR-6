#include <stdio.h>
int main(void)
{
    struct school {
        char *name;
        int age;
    };

    // comma in defintion, semicolon in declaration of struct

    // init a struct
    struct school McMaster = {
        {"Aiden", 21},
        {"Betty", 23}      // ... braces not need if all key value pairs are present 
    };

    printf("%lu\n", sizeof McMaster);
}