import java.util.*;

public class Main{
    static class Pair implements Comparable<Pair>{
    int x;
    int y;
    Pair(int x, int y){
        this.x = x;
        this.y = y;
    }
    public int compareTo(Pair next){
        return this.x - next.x;
    }
}
    public static void main(String [] args){
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t-- > 0){
            int n = scn.nextInt();
            int d = scn.nextInt();
            Pair arr[] = new Pair[n];
            int c[] = new int [n];
            int s[] = new int [n];
            for(int i=0;i<n;i++){
                c[i] = scn.nextInt();
            }
            for(int i=0;i<n;i++){
                s[i] = scn.nextInt();
            }
            for(int i=0;i<n;i++){
                arr[i] = new Pair(c[i], s[i]);
            }
            Arrays.sort(arr);
            TreeMap<Integer,Integer> tm = new TreeMap<>();
            // for(int i=0;i<n;i++){
            //   System.out.println(arr[i].x+" "+arr[i].y);
            // }
            long res = 0;
            for(int i=0;i<n;i++){
                int left = d - arr[i].x;
                Integer key = tm.floorKey(left);
                
                int prev = 0;
                if(key != null){
                    int val = tm.get(key);
                    res = Math.max(res, arr[i].y + val);
                    prev = val;
                }else{
                    res = Math.max(res, arr[i].y);
                }
                tm.put(arr[i].x, Math.max(prev,arr[i].y));
                
            }
            System.out.println(res);
        }
    }
}