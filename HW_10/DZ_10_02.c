#include <stdio.h>

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
	FILE *outp = fopen("output.txt", "w");
	int n, i=0; 
	fscanf(inp, "%d", &n);
	char str[n];
	fclose(inp);
	char b='A', c='2';
	
	while(i<=(n-2))
	{
		str[i]=b;
		b=b+1;
		str[i+1]=c;
		if (c>='8')
			c='2';
		else
			c=c+2;
		i=i+2;
	}
	str[i]='\0';
	printf("%s", str);
	fprintf(outp,"%s", str);
	fclose (outp);
	return 0;
}

