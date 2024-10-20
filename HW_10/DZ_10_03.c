#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    int  i=0, n=1000;
    char c;
    char *str = (char*)malloc(n*sizeof(char));
    
    while ((c = fgetc(inp)) != EOF)
        str[i++]=c;
    fclose(inp);  
	for (int j=0; j<i-1; j++)
		if (str[j]==str[i-1])
			fprintf(outp,"%d ", j);

    fclose (outp);
    return 0;
}
