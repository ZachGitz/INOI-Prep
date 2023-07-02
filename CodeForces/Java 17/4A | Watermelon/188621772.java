import java.util.*;
public class Watermelon
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner (System.in);
        int weight=sc.nextInt();
        int a = weight % 2;
        if(a==0 && weight>2)
        System.out.println("YES");
        else
        System.out.println("NO");
    }
}