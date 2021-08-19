#include<stdio.h>
#define MAXLINE 1000 // maximum input line size
int max; // maximum length seen so far
int line[MAXLINE]; // current input line
char longest[MAXLINE]; // longest line saved here

int getline(void);
void copy(void);

//print longest input line
int main()
{
	int len;
	extern  max;
	extern  longest[];

	max = 0;
	while ( (len = getline()) > 0)
		if (len>max){
			max = len;
			copy();
		}
	if (max > 0) // there was a line
		printf("%s\n", longest);
	return 0;
}

//getline
int getline(void)
{
	int c, i;
	extern line[];
	for (i=0; i< MAXLINE-1 && (c=getchar()) != EOF && c !='\n'; ++i)
		line[i] = c;
	if (c=='\n'){
		line[i]= c;
		++i;
	}
	line[i] = '\0';
	return i;
}

//copy
void copy(void)
{
	int i;
	extern line[], longest[];
	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}
