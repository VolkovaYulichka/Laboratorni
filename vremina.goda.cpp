#include <stdio.h> 
#include <stdlib.h> 

int main(int argc, char *argv[]) { 
 int a; 
 printf("Enter number of month:\n"); 
 scanf("%d", &a); 
  if (a>=13){
 	printf ("Not correct enter(1-12).Try againt");
  }else{
  if ((a <= 2) && (a >= 1)) { 
    printf("Winter"); 
  } else { 
  if (a == 12) { 
    printf("Zima"); 
  } else { 
  if ((a >= 3) && (a <= 5)) { 
     printf("Spring"); 
  } else { 
  if ((a >= 6) && (a <= 8)) { 
     printf("Summer"); 
  } else { 
  if ((a >= 9) && (a <= 11)) { 
     printf("Fall");
}
} 
} 
} 
} 
} 
return 0; 
}
