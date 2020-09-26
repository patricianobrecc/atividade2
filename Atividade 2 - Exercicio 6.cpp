#include <stdio.h>  
 
int main(){  
int numero[10];  
int razao, n1;   

  printf ("Digite um valor inicial o qual iniciara nossa sequencia da PG: ");  
  scanf ("%d" , &n1);  

  printf ("Digite um numero como razao para nossa sequencia: ");  
  scanf ("%d" , &razao);  

  for (int i=0; i<10; i++){  
   printf ("%d" , n1);  
   printf ("  ");
   n1=n1*razao;  

  }  
  return 0;  
  } 
