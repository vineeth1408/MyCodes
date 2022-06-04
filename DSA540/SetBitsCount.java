package DSA540;

public class SetBitsCount {

	public static void main(String[] args) {
		int n=31;
		int c=0;
		while(n>0) {
			if((n&1)==1) {
				c+=1;
			}
			n=n>>1;
		}
		System.out.println(c);
	}
}


