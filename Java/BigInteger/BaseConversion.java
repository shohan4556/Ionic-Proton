import java.util.*;
import java.math.BigInteger;

class all_base_conversion{
	public static void main(String args[]){
				
			// converte Decimal to any Base
			String n="5547";
			
			BigInteger number=new BigInteger(n);
		
			System.out.println("Number : "+number);
			System.out.println("BInary : "+number.toString(2)); // converted to Binary
			System.out.println("Octal : "+number.toString(8)); // converted to Octal
			System.out.println("Hexadecimal  : "+number.toString(16)); // converted to Hexadecimal
		
			// convert binary to Decimal
			
			String binary="10110011";
			BigInteger num=new BigInteger(binary,2);  // binary to Decimal
			BigInteger hex=new BigInteger("15ab",16);  // hexadecimal to Decimal
			
			System.out.println("\n"+"Number :"+binary);
			System.out.println("Binary to Decimal :"+num);
			System.out.println("Hexadecimal to Decimal  :"+hex);
			System.out.println("Hexadecimal to Binary  :"+hex.toString(2));
			
	}

	
}





