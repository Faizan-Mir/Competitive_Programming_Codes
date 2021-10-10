public class Welcome{

    public static void main(String[] args){

        System.out.println(power(2,-2));
    }

    public static double power(int x, int n){
        if(n==0)
            return 1;
        else if(n<0)
        { n=-n;
            return (double)1/(double)(pow(x,n));}
        else
            return pow(x,n);
    }

    public static int pow(int x, int n){
        if(n==0)
            return 1;

       if(n==1)
            return x;
        else if(n%2==0)
            return pow(x*x,n/2);
        else
            return x * pow(x,n-1);
    }
}
