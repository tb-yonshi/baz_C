#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} temp;

void help();
temp* read_f (const char*, int*);
float avg(const temp* data, int size, int month);
int mmin(const temp* data, int size, int month);
int mmax(const temp* data, int size, int month);
void add_record(temp** data, int* size, temp new_record);