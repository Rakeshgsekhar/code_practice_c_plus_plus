import java.util.*;

public class QueueLI{
    private Node first,last;

    private class Node{
        String item;
        Node next;
    }

    public boolean isEmpty(){
        return first == null;
    }

    public void enqueue(String item){
        Node oldLast = last;
        last = new Node();
        last.item= item;
        last.next = null;
        if(isEmpty()) first=last;
        else oldLast.next=last;  
    }

    public String dequeue(){
        //Node newFirst = first.next;
        String item = first.item;
        first = first.next;
        if(isEmpty()) last=null;
        return item;

    }

    public void display(){
        Node node = first;

        while(node != null){

            System.out.print(" -> "+node.item);
            node = node.next;
        }
    }


    public static void main(String[] args){
        QueueLI queue = new QueueLI();

        queue.enqueue("cat");
        queue.enqueue("dog");
        queue.enqueue("snake");
        queue.enqueue("elephant");
        queue.enqueue("me");
        queue.enqueue("you");

        queue.display();

        System.out.println();
        System.out.println("dequeued: "+queue.dequeue());
        System.out.println();
        queue.display();
        System.out.println();
        System.out.println("dequeued: "+queue.dequeue());
        System.out.println();
        queue.display();
        System.out.println();
        System.out.println("dequeued: "+queue.dequeue());
        System.out.println();
        queue.display();
        System.out.println();
        System.out.println("dequeued: "+queue.dequeue());
        System.out.println();
        queue.display();
        System.out.println();
        System.out.println("dequeued: "+queue.dequeue());
        System.out.println();
        queue.display();
        System.out.println();
    }
}