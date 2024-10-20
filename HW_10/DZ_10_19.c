#include <stdio.h>
#include <string.h>
 
const int line_width = 1000;
 
void bubble_sort(int size, char* array)
{
char buf;
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (array[i] > array[j])
            {
                buf = array[i];
                array[i] = array[j];
                array[j] = buf;
            }
}
 
void palindrome(int size, char* line)
{
	char letters[size][2];
	int letters_count = 0;
	int idx = 0;
    bubble_sort(strlen(line), line);
    for (int i = 0; i < size; i++)
    {
        idx = -1;
        for (int j = 0; j < letters_count; j++)
            if (line[i] == letters[j][0])       	
            {
                idx = j;
                letters[idx][1]++;
                break;
            }
        if (idx < 0)
        {
            idx = letters_count++;
            letters[idx][0] = line[i];
            letters[idx][1] = 1;
        }
    }  


int p_length = 0;  
int l_length, m_p = -1;
    for (int i = 0; i < letters_count; i++)
    {
        while (letters[i][1] && (letters[i][1] / 2 > 0)) 
        {
            line[p_length++] = letters[i][0];
            letters[i][1] -= 2;
        }   	
        if ((m_p < 0) && (letters[i][1] % 2 == 1))
            m_p = i;
    }  
    l_length = p_length;
    if (m_p >= 0)
        line[p_length++] = letters[m_p][0]; 	
    for (int i = l_length - 1; i >= 0; i--)
        line[p_length++] = line[i];
    //line[p_length] = '\0';
}
 
int main(void)
{  
	FILE *inp = fopen("input.txt", "r");
	FILE *outp = fopen("output.txt", "w");
	char line[line_width];
    fscanf(inp, "%[^\n]", line);
    fclose(inp);
    palindrome(strlen(line), line);
    fprintf(outp, "%s", line);
    fclose(outp);


    return 0;
}
