/*O IMC (Índice de Massa Corporal)
é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de
peso de uma pessoa adulta. A fórmula é:
IMC = peso / altura2

Elabore um algoritmo que, dados o peso e a
altura de um adulto, determine a sua condição
de acordo com a tabela abaixo:
IMC em adultos Condição
IMC < 18,5 Abaixo do peso
18,5 ≤ IMC < 25,0 Peso ideal
25,0 ≤ IMC < 30,0 Sobrepeso
30,0 ≤ IMC < 35,0 Obesidade grau I
35,0 ≤ IMC < 40,0 Obesidade grau II
IMC ≥ 40,0 Obesidade grau III

*/
#include <stdio.h>
void main ()
{
  float IMC, peso, altura;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("\nDigite sua altura: ");
    scanf("%f", &altura);

    IMC = peso/(altura*altura);

    if (IMC <= 18.5)
    {
      printf("sobrepeso");
    }
      else if (IMC <= 25.0)
      {
        printf("peso ideal");
      }
      else if (IMC <= 30)
      {
        printf("Sobrepeso");
      }
      else if (IMC <= 35)
      {
        printf("Obesidade grau I");
      }
      else if (IMC <= 40)
      {
        printf("Obesidade grau II");
      }
      else
      {
        printf("Obesidade grau III");
      }


}
