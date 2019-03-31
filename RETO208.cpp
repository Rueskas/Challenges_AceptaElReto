//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    long long int f, b, totalb, totalk, total;
    ios::sync_with_stdio(false);
    do
    {
        cin>>f>>b;
        if ( f != 0 && b != 0)
        {
            totalb = (f + 1) * f/2;
            totalk = (f - b + 1)* (f - b + 2) / 2;
            total = totalb - totalk;
            cout<<total<<endl;
        }
    }while (f != 0 || b != 0);
    return 0;
}
