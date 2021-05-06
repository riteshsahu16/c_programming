#include<stdio.h>
#define IN 1
#define OUT 0
#define MAX 50
int main()
{
	//Compute length of each word & print it 
	int ch, len=0, state=OUT, no_word=0, data[MAX], i=0;
	while((ch = getchar()) != EOF)
	{
		if(ch == ' ' || ch == '\n' || ch == '\t')
		{
			if(state==IN){
				//putchar(' ');
				no_word++;
				data[i] = len;
				i++;
				state = OUT;
				len = 0;
			}
		}
		else
		{
			//putchar(ch);
			if(state==IN)
				len++;
			else{
				state = IN;
				len++;			
			}
		}	
	}
	printf("Total no. of words : %d \n", no_word);
	
	for(i=0; i<no_word; i++)
		printf("length : %d\n", data[i]);
}
