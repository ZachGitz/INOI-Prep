import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        
        while (t > 0) {
            String s = scanner.next();
            
            List<List<Integer>> pos = new ArrayList<>();
            List<Integer> idx = new ArrayList<>();
            for (int i = 0; i < 10; i++) {
                pos.add(new ArrayList<>());
                idx.add(0);
            }
            
            for (int i = 0; i < s.length(); i++) {
                int digit = s.charAt(i) - '0';
                pos.get(digit).add(i);
            }
            
            int m = scanner.nextInt();
            String lr = scanner.next();
            String rr = scanner.next();
            int cpos = 0;
            
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < 10; j++) {
                    while (idx.get(j) < pos.get(j).size() && pos.get(j).get(idx.get(j)) < cpos) {
                        idx.set(j, idx.get(j) + 1);
                    }
                }
                
                int pck = cpos;
                for (int j = lr.charAt(i) - '0'; j <= rr.charAt(i) - '0'; j++) {
                    if (idx.get(j) >= pos.get(j).size()) {
                        pck = s.length();
                    } else {
                        pck = Math.max(pck, pos.get(j).get(idx.get(j)));
                    }
                }
                
                cpos = pck + 1;
            }
            
            if (cpos >= s.length() + 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
            
            t--;
        }
    }
}