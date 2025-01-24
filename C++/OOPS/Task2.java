import java.util.Scanner;

public class Task2{
    public static void main(String[] args){
        int[] arr=new int[5];
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<5;i++){
            System.out.println("Enter the value of arr["+i+"] :");
            arr[i]=sc.nextInt();
        }
        int sum=0;
        for(int i=0;i<5;i++){
            sum+=arr[i];
        }
        System.out.println("Sum of all elements of array = "+sum);
        sc.close();
    }
}