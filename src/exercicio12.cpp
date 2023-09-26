#include<iostream>
#include<string>
using namespace std;

string mescla(string str1, string str2)
{
    string str3;

    for(int i = 0; i < str1.length(); i++)
    {
        for(int j = 0; j < str2.length(); j++)
        {
            if(str1[i] == str2[j])
            {
                bool check = 1;
                for(int k = 0; k < str3.length() && check == 1; k++)
                {
                    str3[k] == str1[i] ? check = 0: check = check;
                }
                
                if(check)
                {
                    str3+=str1[i];
                    j += str2.length();
                }
            }
        }
    }

    return str3;
}

int main()
{
    string str1, str2, str3;

    std::cout << "Valor da string 1: "; 
    std::getline(cin, str1);

    std::cout << "Valor da string 2: "; 
    std::getline(cin, str2);

    str3 = mescla(str1, str2);

    std::cout << "Caracteres contidos nas duas strings: " << str3 << std::endl;    
    return 0;
}