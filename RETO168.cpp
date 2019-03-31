// Sergio Ruescas

#include <iostream>
using namespace std;

int main()
{
    int piece;
    scanf("%d", &piece);
    while (piece != 0)
    {
        int number, sumComplete = 0, sumIncomplete = 0, rest;
         for ( int i = 1 ; i <= piece ; i++ )
        {
            sumComplete +=i;
            if (i!=piece)
            {
                scanf("%d", &number);
                sumIncomplete+=number;
            }
        }

        rest = sumComplete-sumIncomplete;
        printf("%d\n", rest);
        scanf("%d", &piece);
        
    }
    return 0;
   
}
