#include<iostream>

int insere_meio(int vet[], int qtde, int elemento)
{
    for(int i = qtde+1; i > qtde/2; i--)
    {
        vet[i] = vet[i-1];
    }

    vet[qtde/2] = elemento;
    return ++qtde;
}

int main()
{
    int qtde;

    std::cout << "Quantidade de elementos: ";
    std::cin >> qtde;
    int vetor[100] = {0};

    for(int i = 0; i < qtde; i++)
    {
        int aux;
        std::cout << i+1 << ": ";
        std::cin >> aux;
        vetor[i] = aux;
    }

    int elemento;
    std::cout << "Elemento: ";
    std::cin >> elemento;

    qtde = insere_meio(vetor, qtde, elemento);

    for(int i = 0; i < qtde; i++)
    {
        std::cout << i+1 << ": " << vetor[i] << std::endl;
    }
}