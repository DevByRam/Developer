/*
 * In Java, throw, throws, and try-catch are essential parts of exception
 * handling, a mechanism that helps manage runtime errors (exceptions) in a
 * controlled way.
 * 
 * 1. throw:
 * Used to explicitly throw an exception.
 * Creates an exception object and signals that an exception has occurred.
 * 2. throws:
 * Declares that a method might throw an exception.
 * Placed in the method signature to indicate potential exceptions that need
 * handling by the caller.
 * 3. try-catch:
 * try block contains the code that might throw an exception.
 * catch block handles the exception when thrown.
 */
/*
 * // Example 1: Using throw and throws
 * public class ExceptionDemo {
 * 
 * // Method declares it may throw an exception
 * public static void checkNumber(int num) throws IllegalArgumentException {
 * if (num < 0) {
 * throw new IllegalArgumentException("Number must be non-negative!");
 * }
 * System.out.println("Number is: " + num);
 * }
 * 
 * public static void main(String[] args) {
 * try {
 * checkNumber(-5); // This will throw an exception
 * } catch (IllegalArgumentException e) {
 * System.out.println("Caught exception: " + e.getMessage());
 * }
 * 
 * System.out.println("Program continues...");
 * }
 * }
 */

// Example 2: Handling Multiple Exceptions with try-catch
/*
 * public class MultiCatchDemo {
 * 
 * public static void divide(int a, int b) throws ArithmeticException {
 * System.out.println("Result: " + (a / b));
 * }
 * 
 * public static void main(String[] args) {
 * try {
 * divide(10, 0); // This throws ArithmeticException
 * } catch (ArithmeticException e) {
 * System.out.println("Caught ArithmeticException: " + e.getMessage());
 * } finally {
 * System.out.println("This block always executes.");
 * }
 * 
 * System.out.println("Program finished.");
 * }
 * }
 */

// Key Points:
// throw: Used to throw exceptions.
// throws: Declares exceptions in the method signature.
// try-catch: Handles exceptions to prevent program crashes.
// finally (optional): Executes cleanup code, always runs after try-catch.

// Checked Exceptions (Compile-Time Exceptions)
// Checked by the compiler during compilation.
// Must be either caught using try-catch or declared using throws in the method
// signature.
/*
 * Common Checked Exceptions:
 * Exception -> Description
 * 1. IOException -> Related to input/output operations (e.g., file handling).
 * 2. SQLException -> Occurs during database access operations.
 * 3. ClassNotFoundException -> Thrown when a class is not found.
 * 4. FileNotFoundException-> File is missing or inaccessible.
 * 5. InterruptedException -> Thrown when a thread is interrupted.
 */
// Example:
/*
 * import java.io.*;
 * 
 * public class CheckedExceptionExample {
 * public static void readFile() throws IOException {
 * BufferedReader reader = new BufferedReader(new
 * FileReader("nonexistent.txt"));
 * reader.readLine();
 * reader.close();
 * }
 * 
 * public static void main(String[] args) {
 * try {
 * readFile();
 * } catch (IOException e) {
 * System.out.println("Caught IOException: " + e.getMessage());
 * }
 * }
 * 
 * }
 */

// Unchecked Exceptions (Runtime Exceptions)
// Not checked at compile time.
// Typically result from programming logic errors.
// Don't need to be explicitly caught or declared with throws.
/*
 * Common Unchecked Exceptions:
 * Exception -> Description
 * NullPointerException -> Accessing a null reference.
 * ArrayIndexOutOfBoundsException -> Accessing an invalid array index.
 * ArithmeticException -> Arithmetic error, such as division by zero.
 * IllegalArgumentException -> Method receives inappropriate argument.
 * NumberFormatException -> Conversion of string to number fails.
 */
// Example:
public class UncheckedExceptionExample {
    public static void main(String[] args) {
        try {
            int result = 10 / 0; // ArithmeticException
            System.out.println(result);
        } catch (ArithmeticException e) {
            System.out.println("Caught ArithmeticException: " + e.getMessage());
        }
    }
}
