/*
	 ** 
	 ** Theme		|	[XDeca] Algorithm Study 
	 ** Author		|	KTMO-Cell S/W Supporter(~'19), SukJoon Oh
	 ** Environment	|	Windows 10 Professional, Eclipse-Oxygen, Java JDK 10.0.1
	 **				|	Java
	 ** Change Log	|	First written '18.05.17.
	 ** File Info	|	https://www.acmicpc.net/problem/11720
	 **				|
	 **				|	Inputs: 'N' at the first row. 
	 **				|		In the second row, arbitrary numbers will listed.
	 **				|	Outputs: The sum of numbers input is accumulated.
	 **				|
	 ** 
 * */

package submit.day_1;

import java.util.Scanner;


public class Sums {
	
	/*
	 * Data Fields
	 * */
	
	private int N = 0;
	private int Sum = 0;
	
		// Array
	private int[] Input;
	
	
	{ // First initialization array to all zero.
		for(int i = 0; i < 100; i++)
			Input[i] = 0;
	}
	
	/* 
	 * Getters and Setters
	 * 
	 *  */
	public void setInput() {
		
		Scanner Scan_ = new Scanner(System.in);
		
		for(int i = 0; i < 100; i++) {
			
			Input[i] = Scan_.nextInt();
		
			Sum += Input[i];
		}
		
	}
	
	@Deprecated
	private int[] getInput() { // This function is not necessary, 
		// Added annotation 'deprecated', and declared as private.
		
		return Input;
	}
	
	@Deprecated
	private final void setSum() { // This function is not necessary, and never be used!!
		// Doing nothing
	}
	
	
	public int getSum() {
		
		return this.Sum;
	}
}