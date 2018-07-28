/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Windows 10 Professional, Eclipse-Oxygen, Java JDK 10.0.1
** Change Log : First written '18.07.28.
** File Info : 
** https://www.acmicpc.net/problem/14935
** Input: 
** Output:
**				|
** 
** */

package etc;

import java.util.Scanner;

public class FA {
	
	public static void main(String[] args) {
		
		int Res_ = 0;
		
		Scanner scanner_ = new Scanner(System.in);
		String X_ = scanner_.nextLine();
		
		scanner_.close();
		
		for(int itor_ = 0; Res != (Res_ = X_.length() * Integer.valueOf(X_.substring(0, 1).toString()) ); itor_++) {
			
			if(itor_ == 10) {
				
				System.out.println("NFA");				
				return;
			}	
		}	
		
		System.out.println("FA");	
		return;
	} 
	
	
}
