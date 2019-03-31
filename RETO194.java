/*Rueskas
 * Pos 129
 * 1.898 seg*/
import java.util.*;

public class RETO194 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String input;
        int cases, count, tunnels;
        cases = sc.nextInt();
        sc.nextLine();
        for(int i = 0; i < cases ; i++){
            input = sc.nextLine();
            count = 0;
            tunnels = 0;
            for (int j = 0; j < input.length(); j++)
            {
                if(input.charAt(j) == '.'){
                    count++;
                    if(count == 3){
                        count = 0;
                        tunnels++;
                    }
                }
                else if (input.charAt(j) == 'X'){
                    if(count == 1){
                        count = 0;
                        tunnels++;
                        j++;
                    }
                    else if(count == 2){
                        count = 0;
                        tunnels++;
                    }
                }
            }
            if(count != 0)
                tunnels++;
            System.out.println(tunnels);
            

        }

    }
}
