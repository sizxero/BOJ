package lev2;
import java.util.Scanner;

public class boj14681
{
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		int x = s.nextInt();
		int y = s.nextInt();
		s.close();
		if (y>0)
		{
			if(x>0)
			{
				System.out.println("1");
			}
			else
				{
					System.out.println("2");
				}
		}
		else
		{
			if(x>0)
			{
				System.out.println("4");
			}
			else
			{
				System.out.println("3");
			}
		}
	}
}
