import java.util.*;

class QuickUnionIMP{
    private int[] components;
    private int[] size;
   
    QuickUnionIMP(int N){
        components = new int[N];
        size = new int[N];
        for(int i = 0;i<N;i++){
            components[i]=i;
            size[i]=1;
        }
    }

    int root(int value){
        while(value != components[value]){
            value = components[value];
        }
        return value;
    }

    boolean isConnected(int p, int q){
        return (root(p) == root(q));
    }

    void Union(int p,int q){
        int proot = root(p);
        int qroot = root(q);
        if(proot == qroot){
            return;
        }
        if(size[proot]<size[qroot]){
            components[proot] = qroot;
            size[qroot] += size[proot];
        }else{
            components[qroot] = proot;
            size[proot] += size[qroot];
        }
       // components[proot] = qroot;
    }


    void display(){

        for(int i = 0;i<components.length;i++){
            System.out.print(i);
            System.out.print("\t");
        }
        System.out.println("");
        for(int i = 0;i<components.length;i++){
            
              System.out.print(components[i]);
              System.out.print("\t");
        }
         System.out.println("");
    }


    public static void main(String args[]){
        
        int N=0;
        int option = 0;
        int p =0,q=0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Limit :");
        N = sc.nextInt();

        QuickUnionIMP QF = new QuickUnionIMP(N);
        do{
            System.out.println("1. Union");
            System.out.println("2. Check");
            System.out.println("3. Display");
            System.out.println("4. Exit");
            option = sc.nextInt();

            switch(option){
                case 1:
                System.out.println("Enter two numbers to be joinned");
                p = sc.nextInt();
                q = sc.nextInt();
                QF.Union(p,q);
                QF.display();
                break;

                case 2 : 
                System.out.println("Enter two numbers to be find whether they are connected");
                p = sc.nextInt();
                q = sc.nextInt();
                System.out.println("is Connected : " + QF.isConnected(p,q));
                //QF.display();
                break;

                case 3 :
                QF.display();
                break;

                default:
                System.out.println("Try some other option");
                break;

            }

        }while(option != 4);
        

        //QF.display();

    }
}