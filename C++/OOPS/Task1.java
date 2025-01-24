import java.util.Scanner;

public class Task1{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string: ");
        String s=sc.nextLine();
        s=s.toUpperCase();
        String[] words=s.split(" ");
        for(int i=0;i<words.length;i++){
            System.out.println("Index : "+(i+1)+" value : "+words[i]);
        }
        sc.close();
    }
}