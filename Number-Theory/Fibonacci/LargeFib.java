import java.math.*;
import java.util.*;

class LargeFib{
		public static void main(String args[]){
			BigInteger ans;
			for(int i=2;i<100;i++){
			ans = fibonacci(i);
			System.out.println(ans);
		}
		}
		public static BigInteger fibonacci(int n){
				if(n==0 || n==1)
				return BigInteger.ONE;
				
				else
				return fibonacci(n-2).add(fibonacci(n-1));
		}
		
	}
	

