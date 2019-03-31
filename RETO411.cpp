//Rueskas
#include <iostream>
using namespace std;

int main()
{
    int red,red2, pesos, account;
    do
    {
        scanf("%d\n",&red);

        if (red == 0)
            break;

        account = 0;
        red2 = red;
        do
        {
            scanf("%d",&pesos);
            if (red2 - pesos < 0)
            {
                while (pesos != 0)
                    scanf("%d",&pesos);
                break;
            }
            if (pesos == 0)
                break;
            else
            {
                account++;
                red2 = red2 - pesos;
            }
            
        } while (pesos != 0);
        
        printf("%d\n", account);
        
    } while (red != 0);
    return 0;
}
