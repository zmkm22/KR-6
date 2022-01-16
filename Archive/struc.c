#include <stdio.h>

int main(int argc, char *argv[])
{
    // struct declares a new type
    struct point
    {
        int x;
        int y;
    } a, b, c;

    struct point maxpoint = {100, 120};

    int memberX;
    memberX = maxpoint.x;

    printf("%d\n", memberX);

    // struct can be nested

    // a declaration: specifies type
    struct rect
    {
        struct point lower; // referred by rectName.lower its type is struct point
        struct point upper;
    }; // don't forget this semicolon

    // a defintiion: allocates memory

    struct point A = {0, 0};
    struct point B = {10, 10};
    struct rect screen = {A, B};

    // struct rect screen = { { 0, 0 }, { 10, 10 } };

    printf("%d\n", screen.lower.x);

    struct point *P; 

    (*P).x = 1000;
    (*P).y = 2000;

    printf("%d\n", (*P).x);
    printf("%d\n", P->y); // use -> when given struct address 
    // .and -> associated left to right, thus a.b.c unambiguously (a.b).c

    return 0;
}