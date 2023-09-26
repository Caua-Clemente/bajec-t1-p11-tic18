#include<iostream>
#include<ctime> // Para gerar valores automaticamente, sem necessidade de inserir manual

void maxmin(int vetor[], int n, int &maximo, int &minimo)
{
    int maior = vetor[0];
    int menor = vetor[0];

    for(int i = 0; i < n; i++)
    {
        maior < vetor[i] ? maior = vetor[i]: maior = maior;
        menor > vetor[i] ? menor = vetor[i]: menor = menor;        
    }

    maximo = maior;
    minimo = menor;
}

int main()
{
    srand(time(0));
    int vetor[10];
    int maior = 0, menor = 0;
    for(int i = 0; i < 10; i ++)
    {
        vetor[i] = (rand() % 100) + 1;
        std::cout << vetor[i] << std::endl;
    }

    maxmin(vetor, 10, maior, menor);
    std::cout << maior << " - " << menor << std::endl;
}