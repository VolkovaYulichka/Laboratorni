#include <stdio.h> 
#include <stdlib.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 

int main(int argc, char *argv[])
{ 
    int n; 
	printf("Skol'ko vam let?\t"); 
	scanf("%d", &n); 
	if (n>=101) { 
		printf ("Not correct enter(0-101).Try againt\n");
	} else {
		if ((n==1) && (n==21) && (n == 31) && (n==41) && (n==51) && (n==61) && (n==71) && (n==81) && (n==91)) { 
			printf("god\n"); 
		} else { 
			if ((n>=2) && (n<=4)) { 
				printf("goda\n"); 
				} else { 
					if ((n>=5) && (n<=20)) { 
						printf("let\n"); 
					} 
				} 
		}
	}
	system("pause"); 
	return 0; 
}


