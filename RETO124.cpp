//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string num1, num2, num3, num4;
    int llevar;
    int siguiente=0;
    do
    {
        llevar=0;
        cin>>num1>>num2;
        if (num1 == "0" && num2 == "0")
            break;
        for (int i = num1.length(), j = num2.length(); i >=0 || j >=0; i--, j--)
        {
            
            if (i < 0)
                i = -1;
            if (j < 0)
                j = -1;
                
            num3 = num1[i]; num4 = num2[j];

            if (atoi(num3.c_str())+siguiente+atoi(num4.c_str()) >= 10)
            {
                llevar++;
                siguiente = 1;
            }
            else
                siguiente = 0;
        }
        printf("%d\n", llevar);
    } while (num1 != "0" || num2 != "0");
    return 0;
}
