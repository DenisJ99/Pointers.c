#include <stdio.h>

void printAge(int age)
{
    printf("You are %d years old\n", age);
}

int main()
{
    int age = 21;
//  int *pAge = NULL; // Good practice to assign NULL if declaring a pointer    
    int *pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));

    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge);//dereferencing

    return 0;
}

// Pointer = A "variable-like" reference that holds a memory address to another variable, array, etc.
//           some tasks are performed more easily with pointers
//           * = indirection operator (value at address) 