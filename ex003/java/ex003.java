public class ex003 {

  public static long fibonacci(int n) {

    if (n < 2) {
      return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);

  }

  public static void main(String[] args) {
    System.out.println(fibonacci(10));
  }
}
