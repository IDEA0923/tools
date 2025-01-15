#include <stdio.h>

int main(){
  
  FILE *file;
  char * f_name;
  int buff;
  
  
  //TODO going to do the name interface 
  printf ("input file name : ");
  scanf("%s" , f_name);
  //printf("%s" , f_name);
  
  
  file = fopen (f_name , "r");
  printf("\nDONE\n\nEOF_CODE : %X\n\nCODE HEX : \n\n  " , EOF);
  
  while(!feof(file)){
    buff = fgetc(file);
    printf("%X  " , buff);
  }
  fclose(file);
  
  
  printf("\n\nCOMLETE\n\n");
  return 0;
}
