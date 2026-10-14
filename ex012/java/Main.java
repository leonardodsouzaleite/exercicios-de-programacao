import java.util.Scanner;

/**
 * Main
 */
public class Main {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int number = sc.nextInt();
    int hours = sc.nextInt();
    double per_hours = sc.nextDouble();

    double salary = hours * per_hours;

    System.out.printf("NUMBER = %d\n", number);
    System.out.printf("SALARY = U$ %.2f\n", salary);

    sc.close();

  }
}
