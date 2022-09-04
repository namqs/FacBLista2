/*Escrever um algoritmo que,
dados um número inteiro i e três valores a, b e
c, apresente os 3 números na ordem definida
por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no
meio dos outros.*/

#include <stdio.h>
void main ()
{
  int a, b, c, i;

    printf("Digite 3 valores inteiros:\n");
    scanf("%i %i %i", &a, &b, &c);
    printf("escolha uma ordem: \n");
    printf("i = 1: os três valores em ordem crescente");
    printf("\ni = 2: os três valores em ordem decrescente");
    printf("\ni = 3: o maior valor deve ser apresentado no meio dos outros");
    scanf("%i", &i);

    switch (i) // a b c/ a c b/ b a c/ b c a/ c a b/ c b a
    {
      case 1: if (a<b && b<c)
                {
                  printf("%i %i %i", c, b, a);
                }
                else if (a<c && c<b)
                {
                  printf("%i %i %i", b, c, a);
                }
                  else if (b<a && a<c)
                  {
                    printf("%i %i %i", c, a, b);
                  }
                    else if (b<c && c<a)
                    {
                      printf("%i %i %i", a, c, b);
                    }
                      else if (c<a && a<b)
                      {
                        printf("%i %i %i", b, a ,c);
                      }
                        else
                        {
                          printf("%i %i %i", a, b, c);
                        }
        break;

      case 2:  if (a<b && b<c)
                {
                  printf("%i %i %i", a, b, c);
                }
                else if (a<c && c<b)
                {
                  printf("%i %i %i", a, c, b);
                }
                  else if (b<a && a<c)
                  {
                    printf("%i %i %i", b, a, c);
                  }
                    else if (b<c && c<a)
                    {
                      printf("%i %i %i", b, c, a);
                    }
                      else if (c<a && a<b)
                      {
                        printf("%i %i %i", c, a, b);
                      }
                        else
                        {
                          printf("%i %i %i", c, b, a);
                        }
        break;

        case 3:  if (a<b && b<c)
                {
                  printf("%i %i %i", c, a, b);
                }
                else if (a<c && c<b)
                {
                  printf("%i %i %i", b, a, c);
                }
                  else if (b<a && a<c)
                  {
                    printf("%i %i %i", c, b, a);
                  }
                    else if (b<c && c<a)
                    {
                      printf("%i %i %i", a, b, c);
                    }
                      else if (c<a && a<b)
                      {
                        printf("%i %i %i", b, c, a);
                      }
                        else
                        {
                          printf("%i %i %i", a, c, b);
                        }
    }

}
