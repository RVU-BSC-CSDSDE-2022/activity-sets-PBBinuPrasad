#include <stdio.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main(){
char a[100];
int no_words;
input_string(a);
no_words=count_words(a);
output(a,no_words);
return 0;
}

void input_string(char *a){
printf("Enter a string:\n");
scanf("%[^\n]s",a);
}
int count_words(char *string){
int no_words=1,i;
for(int i=1;string[i]!='\0';i++)
{
if(string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
{
no_words++;
}
}
return no_words;
}

void output(char *string, int no_words){
printf("the total number of words in string is %d",no_words);
}