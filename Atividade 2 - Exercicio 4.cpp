#include <stdio.h>

int main(void){
int ano;

int verifica(int ano);

	printf("Digite o ano no qual deseja saber se e bissexto: "); scanf("%d",&ano);

		if (verifica(ano) == 1)
		printf("%d, ano bissexto!",ano);
		else
		printf("%d, nao e ano bissexto!",ano);
	
	return 0;
}
			int verifica(int x){
			if(x%400==0 || x%4==0 && x%100!=0)
			return 1;
			else
			
		return 0;
}
