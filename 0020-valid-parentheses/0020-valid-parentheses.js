/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
     let stack= new Stack();
    for(let i=0;i<s.length;i++)
    {
        let ch=s.charAt(i);
        if(ch=='{' || ch=='(' || ch=='[')
            stack.push(ch);
        else  // closing
        {
            // if(stack.length==0)
            //     stack.push(ch);
            if(ch=='}' && stack.size()!=0 && stack.peek()=='{')
                stack.pop();
            else if(ch==']' && stack.size()!=0 && stack.peek()=='[')
                stack.pop();
            else if(ch==')' && stack.size()!=0 && stack.peek()=='(')
                stack.pop();
            else
                stack.push(ch);
            
        }
    }
    console.log(stack);
    if(stack.isEmpty())
        return true;
    else
        return false;
};

class Stack {
    constructor() {
        this.stack = []
    }
    push(a) {
        this.stack.push(a)
    }
    pop() {
        return this.stack.pop()
    }
    peek() {
        return this.stack[this.stack.length - 1]
    }
    size() {
        return this.stack.length
    }
    isEmpty() {
        return this.stack.length == 0
    }
}