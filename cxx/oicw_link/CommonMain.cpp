//#include "RoomNumber.h"
// #include "AcmHotel.h"
#include "Dial.h"

#include <iostream>
// #include <string>

int main() {
	
	std::cout << "Successfully compiled!!" << std::endl;
	
	_jcode::Dial _T([]() -> std::string {std::string T_; std::cin >> T_; return T_; }());
	std::cout << _T.Res_;
	
	
	return 0;
};