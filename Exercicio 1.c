#include <stdio.h>
  /*  O custo ao consumidor de um carro novo é a
      soma do custo de fábrica com a porcentagem
      do distribuidor e dos impostos (aplicados ao
      custo de fábrica). Desenvolver um algoritmo
      que calcule o custo ao consumidor de
      determinado carro.
  */
    void main(){
    //declaração de variáveis
      float CF, CD, PI;
      float CC, dist, imp;
    //comandos
      printf("Informe o custo de fabrica: ");
      scanf("%f", &CF);
      printf("Informe o custo do distribuidor: ");
      scanf("%d", &CD);
      printf("Informe o imposto: ");
      scanf("%f", &PI);
        dist=(CD/100)*CF;
        imp=(PI/100)*CF;
        CC=CF + dist + imp;
          printf("O custo e: %f", CC);
  }
