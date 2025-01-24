import java.util.Scanner;

public class Task3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Person[] s = new Person[3];
        for (int i = 0; i < 3; i++) {
            System.out.println("Enter the name of Person " + (i + 1));
            String name = sc.nextLine();
            System.out.println("Age of Person " + (i + 1));
            int age = sc.nextInt();
            sc.nextLine();
            s[i] = new Person(name, age);
        }
        for (int i = 0; i < s.length; i++) {
            System.out.println("Details of Person " + (i + 1));
            s[i].display();
        }
        sc.close();
    }
}

class Person {
    String name;
    int age;

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void display() {
        System.out.println("Name: " + name + " age : " + age);
    }
}