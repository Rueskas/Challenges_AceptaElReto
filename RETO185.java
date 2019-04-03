//Rueskas
import java.util.*;

public class RETO185 {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int littlePots;
        String[] ingredients;

        do {
            Set<String> si = new HashSet();
            Set<String> no = new HashSet();

            littlePots = sc.nextInt();
            sc.nextLine();
            if (littlePots != 0) {

                for (int i = 0; i < littlePots; i++) {
                    ingredients = sc.nextLine().split(" ");

                    if (ingredients[0].equals("SI:")) {
                        for (int j = 1; j < ingredients.length - 1; j++) {
                            si.add(ingredients[j]);
                        }
                    }

                    else {
                        for (int j = 1; j < ingredients.length - 1; j++) {
                            no.add(ingredients[j]);
                        }
                    }
                }
                
                for(String s : si) {
                    if(no.contains(s)) {
                        no.remove(s);
                    }
                }
                
                if(no.size() > 0) {
                    List<String> list = new ArrayList(no);
                    Collections.sort(list);
                    for (int i = 0; i < list.size() - 1; i++)
                    {
                        System.out.print(list.get(i) + " ");
                    }
                    System.out.println(list.get(list.size()-1));
                }
                else
                    System.out.println();
                
            }
        } while (littlePots != 0);
    }

}
