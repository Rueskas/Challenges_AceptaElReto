//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{  
    int casos;
    string persona, parentesco;
    scanf("%d",&casos);
    for (int i = 0; i< casos ; i++)
    {
        cin>>persona>>parentesco;
        if (persona != "Luke" || parentesco != "padre")
        {
            cout<<persona<<", yo soy tu "<<parentesco<<endl;
        }
        else
            printf("TOP SECRET\n");
    }
    return 0;
}
