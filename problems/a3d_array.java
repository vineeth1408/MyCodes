package problems;

public class a3d_array {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int myd [][][] = new int [3][4][5];
		int i,j,k;
		for(i=0;i<3;i++)
		{
			for(j=0;j<4;j++)
			{
				for(k=0;k<5;k++)
				{
					myd [i][j][k]=i*j*k;
					System.out.println(myd[i][j][k] + " ");

				}
				System.out.println();
			}
		}
	}

}
