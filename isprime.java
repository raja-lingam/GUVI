
import java.util.Scanner;
import java.math.BigInteger;

class TestClass {
    public static void main(String args[] ) throws Exception {
       
    Scanner sc = new Scanner(System.in);
    BigInteger bi = sc.nextBigInteger();
    boolean val=bi.isProbablePrime(1);
    if(val)    
        System.out.println("Prime Number");
    else{
        System.out.println("Not a Prime Number");
    }
    }
}
