#include<iostream>

void order(int &n1, int &n2, int &n3, int &n4)
{
    int arr[4] = {n1, n2, n3, n4};
    int aux = 0;

    bool check = false;
    while(!check)
    {
        check = true;
        for(int i = 0; i < 3; i++)
        {
            if(arr[i] > arr[i+1])
            {
                aux = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = aux;
                check = 0;
            } 
        }
    }

    n1 = arr[0];
    n2 = arr[1];
    n3 = arr[2];
    n4 = arr[3];

}

int main()
{
    int n1, n2, n3, n4;

    std::cout << "n1: ";
    std::cin >> n1;
    
    std::cout << "n2: ";
    std::cin >> n2;
    
    std::cout << "n3: ";
    std::cin >> n3;
    
    std::cout << "n4: ";
    std::cin >> n4;
    
    order(n1, n2, n3, n4);
    std::cout << "n1 - " << n1 << std::endl;
    std::cout << "n2 - " << n2 << std::endl;
    std::cout << "n3 - " << n3 << std::endl;
    std::cout << "n4 - " << n4 << std::endl;
}