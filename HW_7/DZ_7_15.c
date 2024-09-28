#include <stdio.h>
 
int maxf(int max)
{
	int input;
    scanf("%d", &input);
    if (input == 0)
        return max;
    if ((max == 0) ||(input > max))
        max = input;
    return maxf(max);
}
 
int main()
{
    printf("%d", maxf(0));
    return 0;
}
