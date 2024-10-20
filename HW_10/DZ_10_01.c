#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    int  i=0, n=1000;
    char c;
    char *str = (char*)malloc(n*sizeof(char));
    
    while (((c = fgetc(inp))!= EOF) && (c!='\n'))
        str[i++]=c;
    fclose(inp);
	for (int k=0; k<3; k++)
	{
		for (int j=0; j<i; j++)
			fprintf(outp, "%c", str[j]);
		if(k<2)
			fprintf(outp, ", ");
	}
	fprintf(outp, " 3");
    fclose(outp);
    return 0;
}
