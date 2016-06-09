import java.util.*;
import java.math.BigInteger;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int i,count=0;
        for(i=1;i<=n;i++){
            int val=Integer.bitCount(i);
            BigInteger bi=BigInteger.valueOf(val);
            boolean check=bi.isProbablePrime(1);
            if(check)    
                count+=1;
        }
        System.out.println("count- "+count);
    }
}
