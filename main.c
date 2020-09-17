// Author: Haorong Xu hxx5086@psu.edu 
// Collaborator: John Heil jch70@psu.edu
// Collaborator: Param Nigam pqn5106@psu.edu
// Collarborator: Kunmao Yu kzy5155@psu.edu
// Section: 12
// Breakout: 15 

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum=0;
int sum_n(int n){
  if (n>0){
    sum=sum+n;
    sum_n(n-1);
  }

  return sum;
}

void print_n(const char*s, int n){
  if(n>0){
    printf("%s\n",s);
    print_n(s,n-1);
  }
}

int main(void) {
  char*num=readline("Enter an int: ");
  int repeat=atoi(num);
  printf("sum is %d.\n", sum_n(repeat));
  char*string=readline("Enter a string: ");
  print_n(string, repeat);
}