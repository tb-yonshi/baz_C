#include "functions.h"

void help() 
{
    printf("Temp statistic application. Please enter key:\n");
    printf("-h for help\n");
    printf("-f file name for load this file\n");
    printf("-m for xx statistic for xx month\n");
}

temp* read_f(const char* filename, int* size) 
{
    FILE* file = fopen(filename, "r");
    temp* data = NULL;
    char line[256];
    *size = 0;
    int line_number = 0;
    while (fgets(line, sizeof(line), file)) 
    {
        line_number++;
        temp temp;
        if (sscanf(line, "%d,%d,%d,%d,%d,%d", &temp.year, &temp.month, &temp.day, &temp.hour, &temp.minute, &temp.temperature) == 6) 
            add_record(&data, size, temp);
        else 
            printf("uncorrect data in line %d\n", line_number);
    }
    fclose(file);
    return data;
}

float avg(const temp* data, int size, int month) 
{
    float sum = 0;
    if (month==-1)
    {
        for (int i = 0; i < size; i++) 
            sum = sum + data[i].temperature;
        if (size > 0)
            return(sum/size);
        else
            return(-100);
    }
    else
    {
        int count = 0;

        for (int i = 0; i < size; i++) 
            if (data[i].month == month) 
            {
                sum = sum + data[i].temperature;
                count++;
            }

        if (count > 0) 
            return(sum /count);
        else 
            return(-100);
    }
}

int mmin(const temp* data, int size, int month) 
{
    int min = 100;
    int flag = 0;
    if (month == -1)
    {
        for (int i = 0; i < size; i++)
            if (data[i].temperature < min)
                min = data[i].temperature;
    }
    else
    {
        for (int i = 0; i < size; i++) 
            if (data[i].month == month) 
            {
                if (data[i].temperature < min)
                    min = data[i].temperature;
                flag = 1;
            }       
    }
    if (flag || (size>0))
        return(min);
    else
        return(-100);
}

int mmax(const temp* data, int size, int month) 
{
    int max = -100;
    int flag = 0;
    if (month == -1)
    {
        for (int i = 0; i < size; i++)
            if (data[i].temperature > max)
                max = data[i].temperature;
        
    }
    else
    {
        for (int i = 0; i < size; i++)
            if (data[i].month == month) 
            {
                if (data[i].temperature > max)
                    max = data[i].temperature;
                flag = 1;
            }
    }
    if (flag || (size > 0))
        return(max);
    else 
        return(-100);
}

void add_record(temp** data, int* size, temp record) 
{
    *data = realloc(*data, (*size + 1) * sizeof(temp));
    (*data)[*size] = record;
    (*size)++;
}