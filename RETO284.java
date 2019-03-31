/*Rueskas 
 * Pos 190 
 * 2 Seg*/
import java.util.*;

public class RETO184 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int cases, price, money, pos;
        int[] coinsTypes = {200, 100, 50, 20, 10, 5, 2, 1};
        String[] input;
        
        cases = sc.nextInt();
        sc.nextLine();
        for(int i = 0; i < cases ; i++){
            input = sc.nextLine().split(" ");
            price = Integer.parseInt(input[0]);
            money = Integer.parseInt(input[1]);
            if(money >= price){
                int[] coins = {0,0,0,0,0,0,0,0};
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
                
                for(int j = 0; j < 7 ; j++){
                    System.out.print(coins[j]+ " ");
                }
                System.out.println(coins[7]);
            }
            else
                System.out.println("DEBE " + (price - money));


        }

    }
}
