#include<iostream>

float calc_serie(int n)
{
    float s = 0;
    float nf;
    for(int i = 1; i <= n; i++)
    {
        nf = n;
        s += i/(nf+(i-1)) + (nf+(i-1))/i;
        //std::cout << i/(nf+(i-1)) << "+" << (nf+(i-1))/i << " = " <<
        //i/(nf+(i-1)) + (nf+(i-1))/i << std::endl;        

        /* 
        Não ficou claro se era pra o "n" dentro da função ser float ou não,
        então deixei a versão com "nf" sendo n float e n normal, sendo int.
        s += i/(n+(i-1)) + (n+(i-1))/i;
        std::cout << i/(n+(i-1)) << "+" << (n+(i-1))/i << " = " <<
        i/(n+(i-1)) + (n+(i-1))/i << std::endl;
        */
    }

    return s;
}

int main()
{
    int n;
    std::cout << "Valor de N: "; 
    std::cin >> n;

    std::cout << "Valor de S: " << calc_serie(n) << std::endl; 
    
}