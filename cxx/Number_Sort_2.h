/*
** 
** Theme : [Private] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.06.
** Change Log : First written '18.07.08.
** File Info : 
** https://www.acmicpc.net/problem/2751
** Input: 
** Output: 
** 
** */

#include <deque>
#include <iostream>

class Number_Sort_2 {
	
private:	
	int N_; // Input
	std::deque<int> T_; 
	
protected:
	
public:
	/* Constructor & Destructor */
		// Default
	Number_Sort_2() : N_(0x00) {
	
	}
	
	~Number_Sort_2() {
		
	}
	
	
	void setN(int argN_ = 0x00);
	
	void setT();
	
	void sortT();
};


