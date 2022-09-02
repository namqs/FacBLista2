/*Desenvolva um algoritmo que
calcule o consumo de combustível de um
automóvel em determinada viagem. Para isso,
devem ser obtidos: i) o percurso (em
quilômetros) da viagem; ii) o número de
quilômetros que o carro percorre com um litro
de combustível (km/l); e iii) o preço do litro do
combustível.
Ao final, o algoritmo deve determinar:
- A quantidade de combustível, em litros,
consumida durante a viagem;
- O custo total de combustível.
*/

#include <stdio.h>
void main ()
{
  int km, KmPorL, QntComb;
  float PrecoLitro, CustoTotal;

    printf("Digite quantos kms terá sua jornada: ");
    scanf("%i", &km);
    printf("Digite quantos km seu carro percorre com 1 L: ");
    scanf("%i", &KmPorL);
    printf("Digite o preço do litro do combustp=ível: ");
    scanf("%f", &PrecoLitro);

    QntComb = km/KmPorL;
    CustoTotal = QntComb * PrecoLitro;

    printf("Vc vai consumir: %i litros", QntComb);
    printf("\nE o custo total de sua viagem sera: %f", CustoTotal);
}
