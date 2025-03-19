import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;

public class Project {
  public static void main(String[] args) {

    int n, m, s, q;
    Vector<Integer> S = new Vector<>();
    Vector<Integer> Q = new Vector<>();
    Vector<Integer> R = new Vector<>();

    Scanner scan = new Scanner(System.in);
    n = scan.nextInt();

    for (int i = 0; i < n; i++) {
      s = scan.nextInt();
      S.addElement(s);
    }

    m = scan.nextInt();
    for (int i = 0; i < m; i++) {
      q = scan.nextInt();
      Q.addElement(q);

    }

    boolean flag;

    for (int i = 0; i < n; i++) {
      flag = false;
      for (int j = 0; j < m; j++) {
        if (S.get(i) == Q.get(j)) {
          flag = true;
          break;
        }
      }
      if (!flag) {
        R.addElement(S.get(i));
      }

    }

    for (int x : R)
      System.out.print(x + " ");

      scan.close();
  }
}