//Sergio Ruescas
#include <iostream>

int main()
{
    int NumberPieces; 
    
    
    scanf("%d", &NumberPieces);
    
    while (NumberPieces != 0)
    {
        bool Complete = false;
        long sum = 0;
        int position = 0;
        int Pieces[NumberPieces];
    
        for (int i = 0; i < NumberPieces; i++)
        {
            scanf("%d", &Pieces[i]);
            sum += Pieces[i];
        }
        
        sum -= Pieces[0];
        
        for (int j = 0; j < NumberPieces ; j++)
        {
            if (Pieces[j] == sum)
            {
                position = j + 1;
                Complete = true;
                break;
            }
            else
            {
                sum -= Pieces[j + 1];
                if ( sum <= 0)
                {
                    break;
                }
            }
    
        }
        
        if (Complete)
            printf("SI %d\n", position);
        else
            printf("NO\n");
        
        scanf("%d", &NumberPieces);
    }  
    return 0;
}

