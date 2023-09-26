#include<iostream>

void intercala(int *vet1, int tam1, int *vet2, int tam2, int *vet3)
{
    int taman3 = tam1 + tam2;
    int check1 = tam1, check2 = tam2;

    int j = 0;
    for(int i = 0; i < taman3; i++)
    {
        if(check1 > 0)
        {
            --check1;
            vet3[j++] = vet1[i];
        }

        if(check2 > 0)
        {
            --check2;
            vet3[j++] = vet2[i];
        }
    }
}

int main()
{
    int taman1, taman2;
    
    std::cout << "Tamanho do primeiro array: "; 
    std::cin >> taman1;

    std::cout << "Tamanho do segundo array: "; 
    std::cin >> taman2;

    int arr1[taman1] = {0}, arr2[taman2] = {0};

    std::cout << "Valores para o array 1: " << std::endl;
    for(int i = 0; i < taman1; i++)
    {
        std::cout << i + 1 << ": "; 
        std::cin >> arr1[i];
    }

    std::cout << "Valores para o array 2: " << std::endl;
    for(int i = 0; i < taman2; i++)
    {
        std::cout << i + 1 << ": "; 
        std::cin >> arr2[i];
    }

    int arr3[taman1 + taman2];
    intercala(arr1, taman1, arr2, taman2, arr3);

    std::cout << "Valores do novo array: " << std::endl;
    for(int i = 0; i < taman1 + taman2; i++)
    {
        std::cout << i + 1 << ": " << arr3[i] << std::endl;
    }

}