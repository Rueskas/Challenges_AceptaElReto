// Sergio Ruescas
//pos-11 0.28 seg
#include <iostream>
using namespace std;

    struct bikes
    {
        string combinations;
        float ratio;
    };
int main()
{
    int numberPlates, numberCrowns;
    scanf("%d %d", &numberPlates, &numberCrowns);
    while(numberPlates != 0)
    {
        
        int plates[numberPlates];
        int crowns[numberCrowns];
        
        for (int i = 0; i < numberPlates ; i++)
        {
            scanf("%d", &plates[i]);
        }
        for (int i = 0; i < numberCrowns ; i++)
        {
            scanf("%d", &crowns[i]);
        }
        
        bikes bike[numberPlates*numberCrowns];
        int count = 0;
        for (int i = 0; i < numberPlates; i++)
        {
            
            for (int j = 0; j < numberCrowns; j++)
            {
                string input = to_string(plates[i]) + "-" + to_string(crowns[j]);
                bike[count].combinations = input;
                bike[count].ratio = (float)plates[i]/crowns[j];
            }
        }
        
        for (int i = 0; i < numberPlates*numberCrowns; i++)
        {
            cout<<bike[i].combinations<<endl;
        }
        

        scanf("%d %d", &numberPlates, &numberCrowns);
    }
    
    return 0;
}
