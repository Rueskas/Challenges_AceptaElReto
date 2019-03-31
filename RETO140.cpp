//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string numero, digito;
    int digitoreal, suma = 0;
    cin>>numero;
    
    while(!cin.eof())
    {
        if (atoi(numero.c_str())>=0)
        {
            for (unsigned int i = 0 ; i < numero.length() - 1 ; i++ )
            {
                digito = numero[i];
                digitoreal =  atoi(digito.c_str());
                suma += digitoreal;
                printf("%d + ", digitoreal);
            }
            
            digito = numero[numero.length() - 1];
            digitoreal =  atoi(digito.c_str());
            suma += digitoreal;
            printf("%d = %d\n", digitoreal, suma);
        }
        cin>>numero;
        suma = 0;
    }
}
   

