/// How to calculate factorial of BigNumber
/// Author : Shohanur Rahaman

	import java.math.BigInteger;
	import java.util.*;
	
	class factorial{
			public static void main(String args[]){
				
				String a="100";
				BigInteger num=new BigInteger("1");
				int b=Integer.parseInt(a);
					
					for(int i=1;i<b;i++){
						num=num.multiply(num.valueOf(i));
					}
					 System.out.println(num);
			}
	
	}
