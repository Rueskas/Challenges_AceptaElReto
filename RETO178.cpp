// Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int cases;
    string sentence, hidden;
    scanf("%d", &cases);
    getline (cin, sentence);
    for ( int i = 0 ; i < cases ; i++ )
    {   
        string found = "";
        unsigned int posicion = 0;
        getline (cin, sentence);
        getline (cin, hidden);
        for ( unsigned int j = 0; j < hidden.length() ; j++)
        {
            if ( hidden[j] == ' ')
            {
                found += ' ';
                continue;
            }
            for (posicion ; posicion < sentence.length() ; posicion++)
            {
                if (toupper(hidden[j]) == toupper(sentence[posicion]))
                {
                    found += hidden[j];
                    posicion++;
                    break;
                }
            }
            
        }
        if (hidden == found)
            printf("SI\n");
        else
            printf("NO\n");
    }

    return 0;
}
