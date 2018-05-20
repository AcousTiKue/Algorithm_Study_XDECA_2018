package main;

import java.util.Scanner;

public class SugarDelieveryMain {

	public static class SugarDelivery {

		private int N = 0; // This will be the container for the input 'N'.
		
		/* 
		 * CalculatedAhead array is the values arranged in advance.
		 * 	In this code, remainder will be used for the index of this array.
		 *  */
		private int[][] CalculatedAhead 
									= { {0, 0}, // [0] When nothing remains. 
										{1, 6}, // [1] Case when 1 remains, of which (+5, -3, -3). Only when N >= 6. 
										{2, 12}, // [2] Case when 2 remains, of which (+5, +5, -3, -3, -3, -3). Only when N >= 12. 
										{1, 3}, // [3] Case when 3 remains, of which (-3). Only when N >= 3
										{2, 9}  // [4] Case when 4 remains, of which (+5, -3, -3, -3). Only when N >= 9. 
									};
		
		
		{	
			/* Nothing needs to be done ahead of instancified. */
			
		}
		
		/* User-defined */
		public int getBags() {
			
			int tN_ = N;
			int Bags_ = 0;
			
			// Code below counts how many bags with five-capacity there are.
			Bags_ = N / 5;
			tN_ = N % 5;
			
			if(N >= CalculatedAhead[tN_][1]) // Boundary value stored in the map.
				Bags_ += CalculatedAhead[tN_][0]; 
			
			if(Bags_ == 0)
				return -1;
			
			return Bags_;
		}
		
		
		/*
		 * Constructor
		 * */
		public SugarDelivery() { // Default constructor will be enough.
			
		}
		
			// Second constructor
		public SugarDelivery(int argN_) {
			
			N = argN_;
		}
		
		/* Eclipse-default 
		 * 	Getters & Setters 
		 * */
		public int getN() {
			return N;
		}

		public void setN(int n) {
			N = n;
		}
	}
	
	
	public static void main(String[] argc) {		
		
		Scanner Input_ = new Scanner(System.in);
		
		int INT = Input_.nextInt();

		SugarDelivery T_ = new SugarDelivery(INT);
		
		System.out.println(T_.getBags());
		
		
	}
	
}
