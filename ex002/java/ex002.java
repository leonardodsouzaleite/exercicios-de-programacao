import java.util.Scanner;

public class ex002 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int t1 = sc.nextInt();
    int t2 = sc.nextInt();
    int t3 = t1 + t2;

    System.out.println(" X = " + t3);
    sc.close();
  }
}
