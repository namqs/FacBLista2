/*O cardápio de uma lanchonete é
o seguinte:
Especificação    Código Preço
Cachorro quente    100   3,50
Bauru simples      101   4,50
Bauru com ovo      102   5,20
Hamburger          103  3,00
Cheeseburger       104 4,00
Refrigerante       105 2,50
Escrever um algoritmo que obtenha o código
do item pedido, a quantidade e calcule o valor
a ser pago.
Considere que, a cada execução do algoritmo,
somente será calculado o valor relacionado a
um item.*/
#include <stdio.h>
void main ()
{
  int codigo, quant;
  float valor;

    printf("Especificação    Código Preço");
    printf("\nCachorro quente    100   3,50");
    printf("\nBauru simples      101   4,50");
    printf("\nBauru com ovo      102   5,20");
    printf("\nHamburger          103   3,00");
    printf("\nCheeseburger       104   4,00");
    printf("\nRefrigerante       105   2,50");
    printf("\n\nEscreva o cógigo do item escolhido: ");
    scanf ("%i", &codigo);
    printf("Digite a quantidade de itens: ");
    scanf ("%i", &quant);

    switch(codigo)
    {
      case 100:
        valor = quant * 3.50;
        printf("Voce pagara: %2.f", valor);
        break;

      case 101:
        valor = quant * 4.50;
        printf("Voce pagara: %2.f", valor);
        break;

      case 102:
        valor = quant * 5.20;
        printf("Voce pagara: %2.f", valor);
        break;

      case 103:
        valor = quant * 3;
        printf("Voce pagara: %f", valor);
        break;

      case 104:
        valor = quant * 4;
        printf("Voce pagara: %f", valor);
        break;

      case 105:
        valor = quant * 2.50;
        printf("Voce pagara: %2.f", valor);
    }

//o print poderia estar aqui no final, pra facilitar a manutenção do codigo :)
}
