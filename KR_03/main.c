#include "functions.h"

int main(int argc, char* argv[]) 
{
    char *mes[12] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
    char* filename = NULL;
    int month = -1;
    int fl = 0;
    for (int i = 1; i < argc; i++) 
    {
        if (strcmp(argv[i], "-h") == 0) 
            fl = 1;
        else 
        if (strcmp(argv[i], "-f") == 0 && (i+1)< argc) 
            filename = argv[++i];
        else 
        if (strcmp(argv[i], "-m") == 0 && (i+1) < argc) 
            month = atoi(argv[++i]);
    }

    if (!filename||(fl==1)) 
    {
        help();
        return 0;
    }

    int size = 0;
    temp* data = read_f(filename, &size);

    if (month != -1) 
    {
        printf("Month      Avg     Min    Max\n");
        printf("%4s %10.1f %6d %6d\n", mes[month-1], avg(data, size, month), mmin(data, size, month), mmax(data, size, month));
    } 
    else 
    {
        printf("Month      Avg     Min    Max\n");
        for (int m = 1; m <= 12; m++) 
			printf("%4s %10.1f %6d %6d\n", mes[m-1], avg(data, size, m), mmin(data, size, m), mmax(data, size, m));
        printf("\n");
        printf("Statictic                 Avg      Min    Max\n");
        printf("Year                      %.1f     %d     %d\n", avg(data, size,month),mmin(data, size,month),mmax(data, size,month));
    }
    return 0;
}