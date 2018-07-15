/*
** 
** Theme : [Private] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.06.
** Change Log : First written '18.07.15.
** File Info : 
** https://www.acmicpc.net/problem/1003
** Input: 
** Output: 
** 
** */

#include "Fibonacci_Function.h"

#ifdef _1003_

// Initializing
int FibonacciFunction::ZeroCounter_ = 0;
int FibonacciFunction::OneCounter_ = 0;


// Interface
void FibonacciFunction::run() {
    
    this->Fibonacci_C(this->N_);
    
    printf("%d, %d", this->ZeroCounter_, this->OneCounter_);
}

#endif