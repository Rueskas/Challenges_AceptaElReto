//Sergio Ruescas
#include <iostream>

using namespace std;

int main()
{
    int num1;
    ios::sync_with_stdio(false);
    do
    {
        cin >> num1;
        if (num1 != 0)
        {
            for (int i = 0 ; i < num1 ; i++)
                cout <<1;
            cout<<endl;
        }

    }while (num1 != 0);
}
