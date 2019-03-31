//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int casos, vuelta,posiciona, posiciond,numint;
    string num1,num , a, b, c , d, menor,numreal, restar, sumar;
    scanf("%d",&casos);
    for (int i = 0; i < casos ; i++)
    {
        cin>>num;
        if (num == "6174")
        {
            printf("0\n");
            continue;
        }
        while ( num.length() < 4 )
            num += "0";
        vuelta = 0;
        restar = "";
        sumar = "";
        do
        {
            restar = "";
            sumar = "";  
            for( int j = 3 ; j >= 0 ; j-- )
            {
                if (j == 3)
                {
                    a = num[j];
                    d = num[j];
                    c = '0';
                    b = '9';
                    posiciona = j;
                    posiciond = j;
                }

                else
                {
                    numreal = num[j];
                    if (numreal <= a)
                    {
                        a = numreal;
                        posiciona = j;
                    }
                    if (numreal >= d)
                    {
                        d = numreal;
                        posiciond = j;
                    }
                }
            }
            for( int j = 3 ; j >= 0 ; j-- )
            {
                if (j == posiciona || j == posiciond)
                {
                    continue;
                }  
                numreal = num[j];
                
                if (numreal <= b)
                {
                    b = numreal;
                }
                if (numreal >= c)
                {
                    c = numreal;
                }

            }
            if (a == b && b == c && c == d)
            {
                vuelta= 8;
                break;
            }
            restar +=a; restar+=b ; restar+=c ;restar+=d;
            sumar +=d; sumar +=c; sumar+=b; sumar+=a;
            numint = atoi(sumar.c_str()) - atoi(restar.c_str());
            num = to_string(numint);
            while (num.length() <= 3)
                num = "0"+ num;
            vuelta++;  
        } while (num != "6174");
        printf("%d\n", vuelta);

    }
    return 0;
}
