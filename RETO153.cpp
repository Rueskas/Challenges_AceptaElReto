//Sergio Ruescas
#include <iostream>

using namespace std;

int main()
{
    int hourEnd, minEnd, cases;
    string hourInit, hour = "", min = "";
    scanf("%d", &cases);
    
    for (int i = 0; i < cases ; i++)
    {
        cin>>hourInit;

        for ( int j = 0 ; j <= 4 ; j++)
        {
            if ( j < 2)
                hour += hourInit[j];
            if ( j > 2)
                min += hourInit[j];
        }
        
        int hourInt = stoi( hour );
        int minInt = stoi( min );
        
        if (hourInt != 12)
            hourEnd = 12 - hourInt;
        else
            hourEnd = 12;
        
        if (minInt != 0)
        {
            minEnd = 60 - minInt;
            hourEnd--;
            if (hourEnd == 0)
                hourEnd = 12;
        }
        else
            minEnd = 0;
        
        printf("%02d:%02d\n", hourEnd, minEnd);
        
        hour = "", min = "";
    }
    
}

