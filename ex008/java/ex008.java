import java.util.Scanner;

public class ex008 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    float t1 = sc.nextFloat();
    float t2 = sc.nextFloat();

    System.out.println("MEDIA = %6f%n", ((t1 + t2) / 2));

    sc.clos();
  }
}
