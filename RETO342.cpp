//Rueskas
#include <iostream>
using namespace std;

int main()
{
    int rangeMin, rangeMax, hideNumber, questions, input;
    bool number, numberUp, known;
    string finished;
    do
    {
        scanf("%d %d %d",&rangeMin, &rangeMax, &hideNumber);
        number = numberUp = known = false;
        if(rangeMin != 0)
        {
            if(rangeMin == rangeMax && rangeMax == hideNumber)
            {
                
                scanf("%d", &questions);
                getline(cin, finished);
                printf("LO SABE\n");
            }
            else
            {
                if (hideNumber == rangeMax)
                {
                    scanf("%d", &questions);
                    for (int i = 0; i < questions; i++)
                    {
                        scanf("%d", &input);
                        if(input==hideNumber)
                        {
                            known = true;
                            getline(cin, finished);
                            break;
                        }
                    }
                }
                else if(hideNumber == rangeMin)
                {
                    scanf("%d", &questions);
                    for (int i = 0; i < questions; i++)
                    {
                        scanf("%d", &input);
                        if(input==hideNumber+1)
                        {
                            known = true;
                            getline(cin, finished);
                            break;
                        }
                    }
                }
                else
                {
                    scanf("%d", &questions);
                    for (int i = 0; i < questions; i++)
                    {
                        scanf("%d", &input);
                        if(input == hideNumber+1 && numberUp == false)
                        {
                            numberUp = true;
                        }
                        else if(input==hideNumber && number == false)
                        {
                            number = true;
                        }
                        if (number == true && numberUp == true)
                        {
                            known = true;
                            getline(cin, finished);
                            break;
                        }
                    }
                }
                if(known)
                    printf("LO SABE\n");
                else
                    printf("NO LO SABE\n");
            }
        }
        } while(rangeMin != 0);   
    return 0;
}
