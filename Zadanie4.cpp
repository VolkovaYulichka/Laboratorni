#include <stdio.h> 
#include <stdlib.h> 
#include <iostream> 

int main(int argc, char *argv[]) { 
 int a; 
 printf("Vvedite vremya:"); 
 scanf("%d", &a); 
  if (a>=25){
	printf("dinie vremya ne v diapazone 0-24:\n");
  }else{
  if ((a >= 7) && (a <= 12)){ 
    printf("Dobrogo ranky\n"); 
  } else { 
  if ((a >= 13) && (a <= 18)) { 
    printf("Dobrogo dnya\n"); 
  } else { 
  if ((a >= 19) && (a <= 24)){ 
    printf("Dobrogo vechora\n"); 
  } else { 
  if ((a >= 0) && (a <= 6)) { 
  printf("Sladkih snov\n"); 
 } 
 } 
 } 
 } 
 }
system("pause"); 
return 0; 
}
