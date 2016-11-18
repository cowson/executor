#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
  char command[100];
  char *p = command;
  char *args[10];
  printf("What would you like to do? \t");
  fgets(command, sizeof(command), stdin);
  strtok(command, "\n");
  int i = 0;
  printf("%s\n", command);
  while(p){
    args[i] = strsep(&p, " ");
    printf("%s\n", args[i]);
    i++;
  }
  args[i] = NULL;
  execvp(args[0], args);
  return 1;
}
