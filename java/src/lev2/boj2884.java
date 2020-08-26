package lev2;
import java.util.Scanner;

public class boj2884
{
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		int hour = s.nextInt();
		int minute = s.nextInt();
		s.close();
		if (minute>=45)
		{
			System.out.println(hour + " " + (minute-45));
		}
		else
		{
			if(hour == 0)
			{
				System.out.println("23 " + (15 + minute));
			}
			else
				{
					System.out.println((hour-1) + " " + (15 + minute));
				}
		}
	}
}
