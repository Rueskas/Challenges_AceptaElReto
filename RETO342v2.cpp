//Rueskas
#include <iostream>
using namespace std;

int main()
{
    int rangeMin, rangeMax, hideNumber, questions, input;
    bool known;
    string finished;
    do
    {
        scanf("%d %d %d",&rangeMin, &rangeMax, &hideNumber);
        known = false;
        if(rangeMin != 0)
        {
            if (rangeMax == hideNumber && hideNumber == rangeMin)
            {
                
                scanf("%d", &questions);
                getline(cin, finished);
                printf("LO SABE\n");
                continue;
            }
            else
            {
                scanf("%d", &questions);
                for (int i = 0; i < questions; i++)
                {
                    scanf("%d", &input);
                    if(input > hideNumber && input <= rangeMax)
                    {
                        rangeMax = input-1;
                    }
                    if(input <= hideNumber && input >= rangeMin){
                        rangeMin = input;
                    }
                    if(rangeMax == hideNumber && hideNumber == rangeMin)
                    {
                        known = true;
                        getline(cin, finished);
                        break;
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
