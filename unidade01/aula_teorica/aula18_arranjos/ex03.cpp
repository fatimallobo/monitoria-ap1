#include <iostream>
#include <iomanip> /* Por causa da funcao setw() */

using namespace std;

int main()
{
  int avaliacoes[] = {8, 5, 10, 7, 9, 4, 6, 8, 10, 3, 7, 5, 9, 2, 8, 10, 6, 7};
  
  /* Substituir todas as notas menores que 5 por 5 */
  for(int i = 0; i < 18; i++)
  {
    if(avaliacoes[i]<5)
    {
      avaliacoes[i] = 5; /* Se a avaliacao no indice i for menor que 5, entao sera substituida por 5 */
    }
  }

  /* Mostrar o vetor atualizado */
  cout << "Indice" << setw(18) << "Avaliacao" << endl; 
  for(int i = 0; i < 18; i++)
  {
    cout << setw(5) << i << setw(18) << avaliacoes[i] << endl;
  }
  
  /* Calcular media das avaliacoes */
  int soma = 0;
  for(int i = 0; i < 18; i++)
  {
    soma+=avaliacoes[i];
  }
  float media = soma/18.0;
  cout << "Media das avaliacoes: " << media << endl; 
  
  return 0;
}