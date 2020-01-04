import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

class subsequence
{
	public static void main(String args[])
	{
		int i,j,k,l,m,n,t;
		Scanner sc=new Scanner(System.in);
		ArrayList<Integer>ara=new ArrayList<Integer>();
		while(sc.hasNext())
		{
			n=sc.nextInt();
			if(n==-999999)
			{
				BigInteger max=BigInteger.valueOf(n);
				BigInteger p=BigInteger.valueOf(0);
				for(i=0;i<ara.size();i++)
				{
					p=BigInteger.valueOf(1);
					for(j=i;j<ara.size();j++)
					{
						p=p.multiply(BigInteger.valueOf(ara.get(j)));
						if(p.compareTo(max)==1)
							max=p;
					}
				}
				System.out.println(max.toString());
				ara.clear();
				continue;
			}
			ara.add(n);
		}
	}
}