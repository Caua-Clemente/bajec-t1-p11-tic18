#include<iostream>

int conta_primos(int *vet, int qtde)
{
    int nprimos = 0;
    for(int i = 0; i < qtde; i++)
    {
        bool check = true;
        {
            for(int j = vet[i]-2; j > 1; j-=2)
            {
                if(vet[i]%j == 0)
                {
                    check = 0;
                    j = 0;
                }
            }
        }

        check ? nprimos++ : nprimos = nprimos;
    }

    return nprimos;
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

    std::cout << "Quantidade de numeros primos: " << (conta_primos(arr, taman)) << std::endl;

    return 0;
}