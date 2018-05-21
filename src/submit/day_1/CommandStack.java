/*
	 ** 
	 ** Theme : [XDeca] Algorithm Study 
	 ** Autho : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
	 ** Environment : Goorm IDE, https://ide.goorm.io/, Linux, Java
	 ** Change Log : First written '18.05.21.
	 ** File Info : https://www.acmicpc.net/problem/10828
     **     Input: push X, pop, size, empty, top
	 **	    Output: Result of execution of each commands.
	 ** 
 * */

package submit.day_1;

import java.util.Stack;



/* Class declaration */
public class CommandStack {

	/* Data field */
	private Stack SingleStack = new Stack(); // Default
    
	private enum Command { 
        PUSH, POP, SIZE, EMPTY, TOP, UNKNOWN
    };
    
    
	{	
		/* Nothing needs to be done ahead before calling constructor */
		
	}
	
    /* Constructor */
	public CommandStack() {
		// TODO Auto-generated constructor stub
	}
    
    
    // Inner functions, hidden to user.
    private final void pushToStack(int argX_) { 
    
        SingleStack.push(argX_);
    }
    
    private final void popFromStack() { 
    
        SingleStack.pop();
    }
    
    private final void stackSize() {
        
        System.out.println(SingleStack.size());
    }
    
    private final void topOfStack() {
        
        System.out.println(SingleStack.lastElement());
    }
    
    private final void unknownCommand() {
        
        System.out.println("Unknown command");
    }
    
    
    
    
    // Interface
    // Command encCommand(String)
    public Command encCommand(String argCommand_) { // "Command Encoder"
        // This function returns UNKNOWN if command is not found.
        // If no errors found, it returns each enum type as normal state.
        // Return values: push, pop, size, empty, top, UNKNOWN.

        if(argCommand_.substring(0, 3).equals("push"))    return Command.PUSH;
        
        if(argCommand_.equals("pop"))    return Command.POP;
            
        if(argCommand_.equals("size"))    return Command.SIZE;    
        
        if(argCommand_.equals("empty"))    return Command.EMPTY;    
            
        if(argCommand_.equals("top"))    return Command.TOP;
                
        return Command.UNKNOWN;
    }
    
    // void lnkCommand(Command)
    public void lnkCommand(Command argCommand_) { // "Command linker"
        // This function simply links the command, with the results created from encCommand() function.
        
        switch(argCommand_) {
                
            case PUSH: {
                
                break;
            }
                
            case POP: {
                
                break;
            }
                
            case SIZE: {
                
                break;
            }
                
            case EMPTY: {
                
                break;
            }
                
            case TOP: {
             
                this.unknownCommand();
                
                break;
            }
        }
        
    }
}
