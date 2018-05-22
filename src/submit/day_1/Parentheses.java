/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Goorm IDE, https://ide.goorm.io/, Linux, Java
** Change Log : First written '18.05.22.
** File Info : https://www.acmicpc.net/problem/9012
**     Input: Input will use standard input method. Integer T is given at the first row as a number of test cases. 
**     Parenthesis string is given as each test case starting from the second row. Each string size is more than 2, less than 50.
**     Output: If each given case is Valid Parenthesis String, YES will be printed. Otherwise, NO will be printed.
** 
** */

package submit.day_1;


public class Parentheses {
    
    
    // Data field
    // class Declaration
    private class ParenthesisString {
        
        private String Data = "";
        
        {
            /* Nothing needs to be done ahead before calling constructor */
        }
        
        
        // Constructors
        public ParenthesisString() {
            // default
        }
        
        public ParenthesisString(String argString_) {
            
            this.Data = argString_;
        }
        
        
        // Engine
        
        
        
        
        
        // Interface
        // Getters & Setters
        public void setData(String argString_) {
            
            this.Data = argString_;
        }
        
        public String getData() {
            
            return this.Data;
        }
    }
       
    
    
    
    
    
    
    
    
    
    
}
