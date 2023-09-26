#include<iostream>
#include<string>
using namespace std;

int conta_letra(string str, char ch, int *vet)
{
    int qtde = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ch)
        {
            vet[qtde++] = i;
        }
    }

    return qtde;
}

int main()
{
    string str;
    char ch;
    int array[100] = {0};
    std::cout << "Valor da string: "; 
    std::cin >> str;

    std::cout << "Caractere a ser procurado: "; 
    std::cin >> ch;

    int qtde = conta_letra(str, ch, array); 
    std::cout << "Quantidade de '" << ch << "' na string: " << qtde << std::endl; 

    std::cout << "Posicoes em que foi encontrado: " << std::endl; 
    for(int i = 0; i < qtde; i++)
    {
        std::cout << array[i] << " - ";
    }
    
}