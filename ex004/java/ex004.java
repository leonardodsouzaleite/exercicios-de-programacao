import java.util.Scanner;

public class ex004 {

  static final double PI = 3.14159;

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    Double t0 = sc.nextDouble();

    double area = PI * Math.pow(t0, 2);

    System.out.printf("A=%.4f%n", area);

    sc.close();
  }
}
