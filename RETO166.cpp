//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{


        int inicio, canal, account = 0, account2 = 0;
        scanf("%d %d",&inicio,&canal);
        while (inicio != 0 || canal != 0)
        {
            
        for( int i = inicio ; i != canal; i++)
        {
            if ( i == 99)
                i = 0;
            account++;
        }
        
        for( int i = inicio ; i != canal; i--)
        {
            if ( i == 1)
                i = 100;
            account2++;
        }
        
        if (account < account2)
            printf("%d\n", account);
        else
            printf("%d\n", account2);
        
        account = 0;
        account2 = 0;
        
        scanf("%d %d",&inicio,&canal);
        }

    return 0;
}

