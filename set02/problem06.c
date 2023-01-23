#include <stdio.h>
#include <string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main(){
  char str[100],rev_str[100];
  input_string(str); 
  str_reverse(str,rev_str);
  output(str,rev_str);
  return 0;
}

void input_string(char *a){
  printf("Enter the string\n");
  scanf("%s",a);
}

void str_reverse(char *str, char *rev_str){
  int i,len,rev;
  len=strlen(str);
  for(i=0;i< len/2;i++){
    rev=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=rev;
  }
}

void output(char *a, char *reverse_a){
  printf("%s is the reverse string",a);
}