package DSA540;
public class Code {
public static void main(String args[]) {
    
    String s="abcd";
    int n=5;
    int q=s.length();
    for(int i=0;i<n;i++)
    {
        if(s.length()%2==0 && (i+1)%2!=0)
        {
            String r = "&"+i+"&";
            s=s.substring(0,s.length()/2) + r + s.substring(s.length()/2);
            if(s.length()%2!=0)
            {
            	String x="$";
                s=s+x;
            }
            
        }
        if(s.length()%2==0 && (i+1)%2==0)
        {
        	String r = "&"+i+"$";
            s=s.substring(0,s.length()/2) + r + s.substring(s.length()/2);
            if(s.length()%2!=0)
            {
            	String x="$";
                s=x+s;
            }
        }
    }
    System.out.println(s);
  }
}