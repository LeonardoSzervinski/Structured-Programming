#include <stdio.h>
#include <stdlib.h>

int main()
{
  float altura, peso_ideal;
  char sexo;

  printf("Informe a altura: ");
  scanf("%f", &altura);

  printf("Informe o sexo: ");
  scanf(" %c", &sexo);

  if(sexo == 'M' || sexo == 'm') {
    peso_ideal = (72.7 * altura) - 58;
    printf("O peso ideal para um homem com %.2fm de altura e: %.2fkg\n", altura, peso_ideal);
  }
  else if(sexo == 'F' || sexo == 'f') {
    peso_ideal = (62.1 * altura) - 44.7;
    printf("O peso ideal para uma mulher com %.2fm de altura e: %.2fkg\n", altura, peso_ideal);
  }

  system("pause");
  return 0;
}