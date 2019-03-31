//Sergio Ruescas
#include <iostream>
#include <algorithm>
#include <string> 

using namespace std;

int Kaprekar(string n)
{
    int rest;
    string maxText = "", minText = "";
    char digits[4];
    while (n.length() < 4)
        n = "0" + n;
        
    if (n =="6174")
        return 0;
        
    for (int i = 0; i < 4; i++)
    {
        digits[i] = n[i];
    }
    
    sort(begin(digits), end(digits));
    
    for (int i = 0; i < 4; i++)
    {
        minText += digits[i];
    }
    
    for (int i = 3; i >= 0; i--)
    {
        maxText += digits[i];
    }
    
    if ( minText== maxText)
        return 8;
    rest = atoi(maxText.c_str()) - atoi(minText.c_str());
     
    return 1+ Kaprekar(to_string(rest));
}


int main()
{
    int cases;
    scanf("%d", &cases);
    
    for (int i = 0; i < cases; i++)
    {
        string number = "";
        cin>>number;
        while (number.length() < 4)
            number += "0";
        printf("%d\n", Kaprekar(number));
        
    }
}
    

    

