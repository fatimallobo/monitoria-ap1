#include <iostream>

using namespace std;

int main()
{
  const int meta_copos = 8; /* Constante para armazenar a meta de copos */ 
  int copos[10]; /* Vetor com 10 espaços para armazenar o total de copos consumidos ao longo de 10 dias */
  
  /* Preenchendo o vetor copos */
  for(int i = 0; i < 10; i ++) 
  {
    cout << "Digite o total de copos consumidos no dia " << i + 1 << ": ";
    cin >> copos[i]; /* Usuario informa o total de copos consumido a cada dia */
  }
  
  /* Mostrando o total de copos na ordem inversa */
  for(int i = 9; i >= 0; i--) /* i = 9, pois vamos da ultima posicao ate a posicao 0, i-- pois iremos diminuir 1 (um) do indice */
  {
    cout << "Total de copos consumidos no dia " << i + 1 << ": " << copos[i] << endl;
  }

  /* Mostrando o total de copos na ordem inversa */
  for(int i = 9; i >= 0; i--) /* i = 9, pois vamos da ultima posicao ate a posicao 0, i-- pois iremos diminuir 1 (um) do indice */
  {
    cout << "Total de copos consumidos no dia " << i + 1 << ": " << copos[i] << endl;
  }
  
  /* Calcular a media de copos consumidos ao longo de 10 dias */
  int soma_copos = 0;
  for(int i = 0; i < 10; i++)
  {
    soma_copos+=copos[i];
  }
  float media = soma_copos/10.0;
  cout << "Media de copos consumidos ao longo de 10 dias: " << media << endl;
  
  /* Contar quantos dias ficaram abaixo da meta */
  int dias_abaixo = 0;
  for(int i = 0; i < 10; i++)
  {
    if(copos[i]<meta_copos)
    {
      dias_abaixo++; /* Se a quantidade de copos for abaixo da meta, adiciona 1 ao valor da variavel dias_abaixo */
    }
  }
  cout << "Total de dias abaixo da meta de " << meta_copos << " copos por dia: " << dias_abaixo << endl;
  
  return 0;
}