#include <iostream>

using namespace std;

int main()
{
  int visualizacoes[7]; /* Vetor com 7 espaços para armazenar as visualizacoes a cada dia da semana */
  cout << "Digite o total de visualizacoes ao longo da semana: " << endl;

  /* Preenchendo o vetor visualizacoes */
  for(int i = 0; i < 7; i++)
  {
    cin >> visualizacoes[i]; /* Usuario informa o total de visualizacoes para cada dia da semana (indice) */
    
    if(visualizacoes[i]<0)
    {
      visualizacoes[i] = 0; /* Se o valor informado for negativo, substituimos por 0 (zero) */
    } 
  }
  
  /* Soma do total de visualizacoes ao longo da semana */
  int soma = 0;
  for(int i = 0; i < 7; i++) 
  {
    soma+=visualizacoes[i]; /* Acumula o total de visualizacoes de cada dia (indice) na variavel soma */
  }
  
  /* Mostrar qual dia (indice) teve o maior pico de visualizacoes) */
  int maiorIndice = 0; /* Definimos uma variavel maiorIndice para armazenar o dia (indice) de maior pico de visualizacoes */
  for(int i = 0; i < 7; i++)
  {
    if(visualizacoes[i]>=visualizacoes[maiorIndice])
    {
      maiorIndice = i;
    }
  }
  
  cout << "Total de visualizacoes ao longo da semana: " << soma << endl;
  cout << "Dia (indice) de maior pico de visualizacoes " << maiorIndice << endl;
  
  return 0;
}