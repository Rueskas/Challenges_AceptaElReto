//Rueskas
//C++ Pos 16
//0.076 seg
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int cases, price, money, pos;
    int coinsTypes[] = {200, 100, 50, 20, 10, 5, 2, 1};
    string input;
    scanf("%d",&cases);
    for(int i = 0; i < cases ; i++){
        scanf("%d %d", &price, &money);
        if(money >= price){
            int coins[] = {0,0,0,0,0,0,0,0};
            pos = 0;
            money = money - price;
            while(money > 0){
                if(money / coinsTypes[pos] != 0){
                    coins[pos] += money / coinsTypes[pos];
                    money = money % coinsTypes[pos];
                }
                else
                    pos++;
            }
            printf("%d %d %d %d %d %d %d %d\n", coins[0], coins[1],
                coins[2], coins[3], coins[4], coins[5], coins[6], coins[7]);
        }
        else
            printf("DEBE %d\n", price-money);
    }

}

