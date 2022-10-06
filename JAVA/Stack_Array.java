import java.util.*;

public class Stack_Array {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the size");
		int n = sc.nextInt();
		stack st = new stack(n);   //create stack
		int val,ch;
		do
		{
			System.out.println("======MENU=======");
			System.out.println("1.PUSH");
			System.out.println("2.POP");
			System.out.println("3.PEEK");
			System.out.println("4.SIZE OF STACK");
			System.out.println("5.DISPLAY");
			System.out.print("Enter Choice: ");
			ch = sc.nextInt();
			switch (ch) {
			case 1: System.out.print("Enter value: ");
				    val = sc.nextInt();
				    st.push(val);
			        break;
			case 2: st.pop();
			        break;
			case 3: st.peek();
			        break;
			case 4: st.count();
			        break;
			case 5: st.status();
			        break;
			default:
				System.out.println("Invalid Choice");
			}
			System.out.println();
		}
		while(ch != 0);
	}
}
class stack{
		private int top;
		private int arr[];
		private int n;

	    public stack(int n) {
			top = -1;
			this.n = n;
			arr = new int[this.n];
		}
	    
	    //check the stack is empty
	    public boolean isEmpty() {
			if (top == -1)
				return true;
			else
				return false;
		}
	    
	    public boolean isFull() {
	    	if (top == n-1)
	    		return true;
	    	else
	    		return false;
	    }
	    
	    //to push the item in stack
	    public void push(int val)
	    {
	    	if (isFull())
	    		System.out.print("Stack Overflow");
	    	else {
	    		top++;
				arr[top] = val;
	    	}
	    }
	    
	    //to remove the item from stack
	    public void pop()
	    {
	    	if(isEmpty()) {
	    		System.out.println("Stack Underflow");
	    	    return;
	    	}
	    	System.out.println(arr[top]);
	    	top--;
	    }
	    
	    //to view the topmost item in stack
	    public void peek() {
	    	if(isEmpty()) {
	    		System.out.println("Stack is Empty");
	    	}
	    	System.out.println(arr[top]);
	    }
	    
	    //to count the item in stack
	    public void count() {
	    	System.out.println(top+1);
	    }
	    
	    //to view the stack
        public void status()
        {
        	if (isEmpty()) {
    			System.out.println("Stack is Empty");
    		  } 
        	System.out.println("All values in the Stack are: ");
			    for (int i = top; i >= 0; i--) {
				    System.out.println(arr[i]);
			    }
        }
}
