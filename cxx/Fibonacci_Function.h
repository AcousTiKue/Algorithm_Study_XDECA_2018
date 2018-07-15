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

#define _1003_

#ifdef _1003_

#include <cstdio>
#include <iostream>

class FibonacciFunction {

private:
    
    static int ZeroCounter_;
    static int OneCounter_;
    
    int N_;
    
    // Re-factored 
        // Provided
    int Fibonacci_C(int argvN_) {
        
        if (argvN_ == 0) {
            
            printf("0\n");
            this->ZeroCounter_++;
            
            return 0;
            
        } else if (argvN_ == 1) {
        
            printf("1\n");
            this->OneCounter_++;
            
            return 1;
        
        } else {
            
            return Fibonacci_C(argvN_ - 1) + Fibonacci_C(argvN_ - 2);
        }
    };
    
    
protected:
    
    
public:
    /* Constructor & Destructor */
    FibonacciFunction() = default;
    FibonacciFunction(int argvN_) : N_(argvN_) { };
    
    virtual ~FibonacciFunction() = default;
    
    
    /* Interface */
    void run();
};

#endif