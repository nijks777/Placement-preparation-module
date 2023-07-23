

class Solution 
{
    
    public static int maxMeetings(int start[], int end[], int n)
    {
       
        int[][] res = new int[n][2];
        
        for(int i=0; i<n; i++){
            
            res[i][0] = start[i];
            res[i][1] = end[i];
        }
        
        
        
        Arrays.sort(res, (a,b) -> Integer.compare(a[1], b[1]));
        // for(int i=0; i<n; i++){
            
        //         System.out.println(res[i][0]+" "+ res[i][1]);
            
        // }
        
        
        int count = 1;
        int max = res[0][1];
      
        for(int i=1; i<n; i++){
            //  System.out.println("i"+i);
            //   System.out.println("n"+n);
            //   System.out.println(res[i-1][1]);
            //     System.out.println(res[i][0]);
            if(max < res[i][0]){
                count++;
                max = res[i][1];
                //System.out.println(max);
            }
        }
        return count;
    }
}
