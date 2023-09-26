#include<iostream>
#include<string>
using namespace std;

string codifica(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'z')
            str[i] = 'a';
        else if(str[i] == 'Z')
            str[i] = 'A';
        else if(str[i] == ' ')
            str[i] = ' ';
        else
            str[i]++;
    }

    return str;
}

string descodifica(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'a')
            str[i] = 'z';
        else if(str[i] == 'A')
            str[i] = 'Z';
        else if(str[i] == ' ')
            str[i] = ' ';
        else
            str[i]--;
    }

    return str;
}

int main()
{
    string str, str_cod;

    std::cout << "Valor da string: "; 
    std::getline(cin, str);

    str_cod = codifica(str);

    std::cout << "String codificada: " << str_cod << std::endl;
    std::cout << "Descodificando string: " << descodifica(str_cod) << std::endl;
    
    return 0;
}