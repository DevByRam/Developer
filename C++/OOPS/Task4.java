import java.util.Scanner;

public class Task4 {
    public static String modify(String s)
    {
        String rev = "";
        int n = s.length();
        for(int x = 0;x<n;x++)
        {
            char ch = s.charAt(x);
            if(Character.isWhitespace(ch))
            {
                ch = '-';
            }
            rev = ch + rev;
        }
        return rev.toLowerCase();
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string :");
        String s = sc.nextLine();
        System.out.println("Modified String : " + modify(s));
        sc.close();
    }
}
