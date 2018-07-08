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

#include "Number_Sort_2.h"

#include <algorithm>
#include <iostream>


void Number_Sort_2::setN(int argN_) {
	
	this->N_ = argN_;
}

void Number_Sort_2::setT() {
	
	int Input_ = 0;
	
	for(register int i = 0; i < this->N_; i++) {
		
		std::cin >> Input_;
	
		this->T_.push_back(Input_);
	}
	
}

void Number_Sort_2::sortT() {
	
	
	sort(T_.begin(), T_.end());
	
	for(std::deque<int>::iterator i = T_.begin(); i != T_.end(); i++) {
		
		std::cout << *i << std::endl;
	}
	
}


int main() {
	
	Number_Sort_2 Temp;
	
	int T;
	
	std::cin >> T;
	
	Temp.setN(T);
	
	Temp.setT();
	
	Temp.sortT();
	
	
	
	
	
	
	
	
	return 0x00;
}