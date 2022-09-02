/*As vendas parceladas se
tornaram uma ótima opção para os lojistas que,
a cada dia, criam novas promoções para tentar
conquistar novos clientes. Faça um algoritmo
que permita ao lojista informar o preço do
produto e receber as seguintes informações:
a) O valor com 10% de desconto para
pagamento à vista;
b) O valor da prestação para parcelamento
sem juros, em 5x;
c) O valor da prestação para parcelamento
com juros, em 10x, com 20% de acréscimo
no valor do produto. */

#include <stdio.h>
void main ()
{
  float valorCarro, DezPorc, ParcSemJuros, ParcComJuros;

    printf("Informe o valor do carro: ");
    scanf("%f", &valorCarro);

    DezPorc = 0.9 * valorCarro;
    ParcSemJuros = valorCarro / 5;
    ParcComJuros = (valorCarro + valorCarro * 0.2) / 10;

    printf("A vista vc paga: %f", DezPorc);
    printf("\nSem juros, 5x: %f", ParcSemJuros);
    printf("\nCom juros, 10x: %f", ParcComJuros);

}
