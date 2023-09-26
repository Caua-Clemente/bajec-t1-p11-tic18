#include<iostream>

void multiplica_por_n(int *vet, int qtde, int n)
{
    for(int i = 0; i < qtde; i++)
        vet[i] *= n;
}

int main()
{
    int taman;
    
    std::cout << "Tamanho do vetor: "; 
    std::cin >> taman;

    int arr[taman];

    std::cout << "Valores para o array: " << std::endl;
    for(int i = 0; i < taman; i++)
    {
        std::cout << i + 1 << ": "; 
        std::cin >> arr[i];
    }

    int n;
    std::cout << "Valor para multiplicar: "; 
    std::cin >> n;

    multiplica_por_n(arr, taman, n);

    std::cout << "Novos valores: " << std::endl;
    for(int i = 0; i < taman; i++)
    {
        std::cout << i + 1 << ": " << arr[i] << std::endl;
    }

    return 0;
}