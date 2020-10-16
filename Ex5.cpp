/***************************************************************************

05. Para elementos já ordenados, o método por bolha tem o mesmo custo
computacional que em elementos desordenados. Implemente uma
melhoria no algoritmo Bubble Sort para diminuir a quantidade de
comparações entre elementos desnecessários. 

****************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <time.h>

int main()
{
  printf("\n ---------------- Exercicio 5 -------------------\n");

	srand(time(NULL));

  //int Num[] = {3, 4, 8, 9, 7, 5, 2, 6, 1, };
  int Num[20];
  int len = sizeof(Num) / sizeof(Num[0]);
  int i, j, aux = 0, cont = 0, troca = 0;
  int Qcomp1 = 0, Qcomp2 = 0, Qcomp3 = 0, trocou = 0;
  

  for(i = 0; i < len; i++){
    Num[i] = rand() % 100 + 1;
  }
    
  do {
    trocou = false;
      for (i = 0; i < len - 1; i++) {
        Qcomp1++;
        if (Num[i] > Num[i+1]) {
                
          aux = Num[i];
          Num[i] = Num[i+1];
          Num[i+1] = aux;

          troca++;    
          trocou = true;
        }
        else{
          Qcomp2++;
        }
      }
  } while (trocou);

  for(i = 0; i < len; i++){
    for(j = 0; j < len; j++){

      if(i != j){
        
        if(Num[i] == Num[j]){
          cont++;
        }
        else{
          Qcomp3++;
        }
      }
    }
  }
  printf("\n");
    
  for(i = 0; i < len; i++){
        
    printf("Vetor Ordenado: %d \n", Num[i]);
  }
  printf("\n");
 
  printf("Troca: %d \n", troca);
  printf("Comparação dos Numero: %d \n", Qcomp1);
  printf("Comparação do Menor Numero: %d \n", Qcomp2);
  printf("Comparação do Numero Nao Repetido: %d \n", Qcomp3);
  printf("Numero repetido %d \n", cont);

}
