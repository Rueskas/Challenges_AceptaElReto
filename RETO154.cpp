// Sergio Ruescas
//pos-11 0.28 seg
#include <iostream>
using namespace std;

int main()
{
    char words[3];
    int number;
    scanf("%d %c%c%c", &number, &words[0], &words[1], &words[2]);
    while (number != 9999 || words[0] != 'Z' || words[1] != 'Z' || words[2] != 'Z')
    {   

        if ( number == 9999)
        {
            if (words[2] == 'Z')
            {
                words[2] = 'B';
                if (words[1] == 'Z')
                {
                    words[1] = 'B';
                    words[0] += 1;
                    if( words[0]== 'E' || words[0] == 'I' || words[0]== 'O' 
                        || words[0]== 'U')
                        words[0]++;
                    printf("0000 %c%c%c\n", words[0], words[1], words[2]);
                }
                else
                {
                    words[1] += 1;
                    if( words[1]== 'E' || words[1]== 'I' || words[1]== 'O' 
                        || words[1]== 'U')
                        words[1]++;
                    printf("0000 %c%c%c\n", words[0], words[1], words[2]);
                }
            }
            else
            {
                    words[2] += 1;
                    if( words[2] == 'E' || words[2]== 'I' || words[2]== 'O' 
                        || words[2]== 'U')
                        words[2]++;
                    printf("0000 %c%c%c\n", words[0], words[1], words[2]);
            }
        }
        else
        {
            number++;
            if ( number >= 1000)
                printf("%d %c%c%c\n", number, words[0], words[1], words[2]);
            else if ( number >= 100)
                printf("0%d %c%c%c\n", number, words[0], words[1], words[2]);
            else if ( number >= 10)
                printf("00%d %c%c%c\n", number, words[0], words[1], words[2]);
            else
                printf("000%d %c%c%c\n", number, words[0], words[1], words[2]);
        }
        scanf("%d %c%c%c", &number, &words[0], &words[1], &words[2]);
    }

    return 0;
}
