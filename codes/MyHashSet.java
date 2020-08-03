class MyHashSet {
    int a[];
    /** Initialize your data structure here. */
    public MyHashSet() {
        a = new int[1];
    }
    
    private int size(){
        return this.a.length;
    }
    public void add(int key) {
        int currentSize = size();
        // updateSize(a, currentSize+1);
        //if(currentSize == a.length || currentSize == 0){
          
       // }
        boolean elementPresent = false;
        for(int i = 0;i<currentSize;i++){
            if(a[i] == key){
                elementPresent = true;
            }
        }
    if(!elementPresent){
            this.a[currentSize-1] = key;   
              updateSize(currentSize+1); 
        }

    }
    
    public void remove(int key) {
         int index = -1;
        int arraySize = size();;
        int newArray[] = new int[arraySize-1];
        for(int i = 0;i<arraySize;i++){
            if(a[i] == key){
                index = i;
                break;
            }
        }
        if(index == 0){
            int j=0;
            for(int i =1 ; i < arraySize;i++){
                newArray[j] = a[i];
                j++;
            }
            a= newArray;
        }else if(index == arraySize-1){
            int j=0;
            for(int i =0 ; i<arraySize-1;i++){
                newArray[j] = a[i];
                j++;
            }
            a= newArray;
        }else if(index>0 && index<arraySize){
            int j=0;
            for(int i =1 ; i<index;i++){
                newArray[j] = a[i];
                j++;
                System.out.println(j);
            }
            j++;
            for(int i = index+1 ; i<arraySize;i++){
                // System.out.println("arr");
               //   System.out.println(j);
                newArray[j] = a[i];
                j++;
            }
            a= newArray;
        }
    }
    
     void updateSize( int size){
        int array[] = new int[size];       
        for(int i = 0; i< a.length;i++){
            array[i] = a[i];
        }
        this.a = array;
    }
    
    /** Returns true if this set contains the specified element */
    public boolean contains(int key) {
         int arraySize = size();
        for(int i = 0;i < arraySize-1;i++){
            if(a[i] == key){
             //   System.out.println(i);
                return true;
            }
        }
        return false;
    }

    public void display(){
        for(int i=0;i<a.length;i++){
            System.out.println(a[i]);
        }
    }

    public static void main(String args[]){
        MyHashSet set = new MyHashSet();
        set.add(58);
        set.add(2);
        set.add(3);
        set.add(1);
    //     System.out.println(set.contains(1));
    //     System.out.println(set.contains(3));
    //     set.add(2);
    //     System.out.println(set.contains(2));
      set.remove(2);
    set.display();
        System.out.println(set.contains(3));
    }
}