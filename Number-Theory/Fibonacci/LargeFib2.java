import java.math.BigInteger;

public class LargeFib2{
	
	public static void main (String []args){
	BigInteger first=BigInteger.valueOf(0); // initialize with zero
	BigInteger second=BigInteger.valueOf(1); 
	BigInteger sum=BigInteger.valueOf(0);
	
	int c=0;
	System.out.println("Fibonacci Number is=" + first);
	
	while(c<500){
	sum=first.add(second);
	System.out.println(sum);
	first=second;
	second=sum;
	c++;
	}
	}

}
 
