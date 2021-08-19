#include<stdio.h>
#define MAXLINE 1000 // maximum input line size

int getline(char line[], int maxline);
void copy(char to[], char from[]);

//print longest input lines
void main()
{
	int len;	// current line length
	int max;	// maximum length seen so for
	char line[MAXLINE];	//Current input line
	char longest[MAXLINE];	// Longest line saved here
	
	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest, line);
		}
	if (max>0)	// There was a line
		printf("%s\n", longest);
	return 0;
}

//getline: read a line into s, return length
int getline(char s[], int lim)
{
	int c, i;
	for(i=0; i<lim-1 && (c=getchar()) != EOF && c !='\n'; ++i)
		int c, i;
	if(c =='\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

//copy: copy 'from' to 'to' : assume 'to' is big enough
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
