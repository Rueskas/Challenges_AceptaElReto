//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    unsigned long long int uvas, suma, account;
    cin>>uvas;
    while (uvas != 0)
    {
        suma= 0;
        account=0;
        for (unsigned int z = 1; suma < uvas ; z++)
        {
            account++;
            suma += z;
        }
        cout<<account<<endl;
        cin>>uvas;
    }
    return 0;
}

