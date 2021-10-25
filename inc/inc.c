
#include <stdio.h>

/* Headers */
void incVal(int a);
void incRef(int *x);

int main()
{
    int a;
    int b;
    int *ptob;

    a = 10;
    b = 10;
    ptob = &b;
        
    void incVal(int a) { a += 20; }
    void incRef(int *x) { *x += 20; }
    
    incVal(a);      // here we are passing by value
    incRef(ptob);   // here we are passing a pointer to the value in b

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}

