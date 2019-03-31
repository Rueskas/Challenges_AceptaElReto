//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int base, exponent, result, multiplication;
    result = 0;
    scanf("%d %d", &base, & exponent);

    while (base != 0 || exponent != 0)
    {
            if (exponent == 0)
            {
                printf("%d\n", base);
                scanf("%d %d", &base, & exponent);
            }
            else
            {
                for (int i = 1 ; i <= base ; i++)
                {
                        multiplication = i;
                    for (int j = 2 ; j <= exponent ; j++)
                    {
                        multiplication = ((multiplication % 46337) * (i % 46337)) % 46337;
                    }
                    result = ((result % 46337 ) + (multiplication % 46337 )) % 46337 ;
                    
                }
                    printf("%d\n", result);
                    result = 0;
                    scanf("%d %d", &base, & exponent);
            }
    } 
    return 0;
}
