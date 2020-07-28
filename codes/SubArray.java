import java.util.*;
// import java.

public class SubArray{
    private int[] underlying;
    private int size;
    private int start;

    public static SubArray fromArray(int[] a){
        SubArray subarray = new SubArray();
        subarray.underlying = a;
        subarray.start = 0;
        subarray.size = a.length;

        return subarray;
    }

    public SubArray subArray(int i, int j){
        // if(i>j) throw IllegalArgumentException;

        SubArray subarray = new SubArray();
        subarray.underlying = this.underlying;
        subarray.start = this.start + i;
        subarray.size = j-i;
        
        return subarray;
    }

    public int getSize(){
        return this.size;
    }

    public int getFirst(){
        return this.underlying[start];
    }

    public int getLast(){
        return underlying[start+size-1];
    }

    public double getMedian(){
        if(this.size%2 == 0){
            return ((underlying[((start+size)/2)- 1]/2 + underlying[(start+size)/2])/2.);
        }
        return (underlying[(start+size)/2]);
    }

    public static double median(int[] a,int[] b){
        if(a.length == 0 || a.length != b.length) return 0.0; //throw new IllegalArgumentException();

        return median(SubArray.fromArray(a),SubArray.fromArray(b));
    }

    public static double median(SubArray a, SubArray b){

        if(a.getSize() == 1){
            return ((a.getFirst()+b.getFirst())/2.);
        }

        if(a.getSize() == 2){
            return ((Math.max(a.getFirst(),b.getFirst())+Math.min(a.getLast(),b.getLast()))/2.);
        }

        double median1 = a.getMedian();
        double median2 = b.getMedian();

        if(median1 == median2) return median1;
        if(median1 > median2){
                return median(a.subArray(0,a.getSize()/2 + 1),b.subArray((b.getSize()-1)/2,b.getSize()));
        }
        return median(a.subArray((a.getSize()-1)/2,a.getSize()),b.subArray(0,b.getSize()/2 + 1));
    }


    public static void main(String[] args){
        int a[] = new int[]{1,2,4,6};
        int b[] = new int[]{0,3,7,9};

        double result = median(a,b);
        System.out.println(result);
    }

}