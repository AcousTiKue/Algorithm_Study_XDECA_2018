/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.xx
** Change Log : First written '18.07.17.
** File Info : https://www.acmicpc.net/problem/10828
**
** */

#include "Stack.h"

#define __10828
#define _EXPERIMENTAL_

#define __CXX11

#ifdef __10828

#ifdef __CXX11

int _Stack::doPush() {
	
	if(Query_.substr(0, 3).compare("push") == 0) {
		
		Container_.push(std::stoi(Query_.substr(5)));
		
	}
	
	
	
	return 0x00;
}

int _Stack::doPop() {
	
	// Debugger
	std::cout << _Stack::doPop() << std::endl;
	
	return 0x00;
}

int _Stack::doSize() {
	
	// Debugger
	std::cout << _Stack::doSize() << std::endl;
	
	return 0x00;
}

int _Stack::doEmpty() {
	
	// Debugger
	std::cout << _Stack::doEmpty() << std::endl;
	
	// empty-ing
	while(!this->Container_.empty()) {
		
		Container_.pop();
	}
	
	return 0x00;
}

int _Stack::doTop() {
	
		
	// Debugger
	std::cout << _Stack::doTop() << std::endl;
	
	
	
	return 0x00;
}

void _Stack::doQuery(std::string& argrQuery_) {
	
	this->Query_ = argrQuery_;
	
	// Searching
	for(auto itor_ = 1; itor_ < 5; itor_++) {
		
		if(Query_.compare(QueryList_[itor_]) == 0) {
			
			(this->*QueryMapper_[itor_])();
			
			break;
		}
	}
	
	if(Query_.substr(0, 3).compare("push") == 0) {
		
		this->doPush();
	}
	
	
	
}

void _Stack::setQuery(std::string& argrQuery_) {
	
	this->Query_ = argrQuery_;
}

std::string _Stack::getQuery() const {
	
	return Query_;
}

#endif
#endif

#undef __10828
#undef __CXX11
#undef _EXPERIMENTAL_
