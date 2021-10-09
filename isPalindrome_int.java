import java.util.*;
public class Welcome
{


    public static void main(String[] args)
{
    int n =1234556;
    System.out.println(isPalindrome(n));
}

    public static boolean isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int r = 0;
        while (x > r) {
            r = r * 10 + x % 10;
            x /= 10;
        }

        return x == r || x == r / 10;

    }
}
