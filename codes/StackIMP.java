import java.util.*;

class StackIMP{
    private int arraystack [] ;
    int N = 0;

    StackIMP(int capacity){
        this.arraystack = new int[capacity];
    }

     void resize(int newCapacity){
        int newArrayStack[] = new int[newCapacity];
        for(int i=0;i<N;i++){
            newArrayStack[i]= this.arraystack[i];
        } 
        this.arraystack = newArrayStack;
       // this.capacity = newCapacity;
    }
    boolean isEmpty(){
        return this.arraystack[0] == 0;
    }

    
   void push(int element){
        this.arraystack[N++] = element;
        if(N==this.arraystack.length){
            resize((this.arraystack.length*2));
        }
    }

    int pop(){
        int response = this.arraystack[--N];
        if(N == (this.arraystack.length/4)){
             resize((this.arraystack.length/2));
        }
        return response;
    }

    void display(){

        System.out.println("Length: "+this.arraystack.length);
        for(int i = 0;i<this.arraystack.length;i++){
            System.out.print(this.arraystack[i]+"\t");
        }
        System.out.println("");
        
    }

   public static void main(String args[]){
        StackIMP stack = new StackIMP(5);
        System.out.println("Status : "+stack.isEmpty());
        stack.push(1);
        stack.display();
        stack.push(2);
        stack.display();
        stack.push(3);
        stack.display();
        stack.push(4);
        stack.display();
        stack.push(5);
        stack.display();
        stack.push(6);
        stack.display();
        stack.push(7);
        stack.display();
        stack.push(8);
        stack.display();

        System.out.println("Status : "+stack.isEmpty());

        System.out.println("poped :"+stack.pop());
        stack.display();
        System.out.println("poped :"+stack.pop());
        stack.display(); 
        System.out.println("poped :"+stack.pop());
        stack.display(); 
        System.out.println("poped :"+stack.pop());
        System.out.println("poped :"+stack.pop());
        stack.display(); 
        System.out.println("poped :"+stack.pop());

        stack.display();
    }
}