class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}

class Student {
    private int rollNumber;
    private int age;
    private static int rollCounter = 1;

    public Student(int age) {
        this.age = age;
    }

    public void admit() throws InvalidAgeException {
        if (age < 18 || age > 22) {
            throw new InvalidAgeException("Age is not within the required limit");
        } else {
            rollNumber = rollCounter++;
            System.out.println("Student Admitted with Roll Number: " + rollNumber);
        }
    }
}

public class CollegeAdmission {
    public static void main(String[] args) {
        Student student1 = new Student(19);
        Student student2 = new Student(17);
        Student student3 = new Student(23);

        try {
            student1.admit();
        } catch (InvalidAgeException e) {
            System.out.println("Student 1: " + e.getMessage());
        }

        try {
            student2.admit();
        } catch (InvalidAgeException e) {
            System.out.println("Student 2: " + e.getMessage());
        }

        try {
            student3.admit();
        } catch (InvalidAgeException e) {
            System.out.println("Student 3: " + e.getMessage());
        }
    }
}