#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int rollno;
    char name[15];
} Record;

void main()
{
   Record *array_of_records;
    array_of_records =    (*Record) malloc(10*sizeof(Record))  ;    /*   Fill in the code on the RHS to allocate memory to an array of 10 Records*/ 
}