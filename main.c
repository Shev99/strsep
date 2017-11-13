#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ){

  char ** arg = (char**)calloc(6,sizeof(char*));
  int i = 0;
  while(line){
    arg[i] = strsep( &line, " ");
    i++;
  }
  return arg;

}

int main(){

  char line[10] = "ls -al";
  char ** args = parse_args( line );
  execvp(args[0], args);

}
