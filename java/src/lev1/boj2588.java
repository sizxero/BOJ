package lev1;
import java.util.Scanner;

public class boj2588
{
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		int a = s.nextInt();
		int b = s.nextInt();
		int c = a*(b%10);
		int d = a*((b%100)/10);
		int e = a*(b/100);
		System.out.println(c);
		System.out.println(d);
		System.out.println(e);
		System.out.println(e*100 + d*10+ c);
		s.close();
	}
}
