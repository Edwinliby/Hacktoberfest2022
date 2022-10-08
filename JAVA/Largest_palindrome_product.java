/*problem to find out the largest palindrome number which is product of two
  n digit numbers. */

import java.lang.Math;

class largest
{

	static int larrgestPalindrome(int n)
	{
		int upper_limit = (int)Math.pow(10, n) - 1;
		int lower_limit = 1 + upper_limit / 10;
		int max_product = 0;
		
		for (int i = upper_limit; i >= lower_limit; i--)
		{
			for (int j = i; j >= lower_limit; j--)
			{
				int product = i * j;
				if (product < max_product)
					break;
				int number = product;
				int reverse = 0;

				while (number != 0)
				{
					reverse = reverse * 10 + number % 10;
					number /= 10;
				}

				if (product == reverse && product > max_product)
					max_product = product;
			}
		}
		return max_product;
	}

	public static void main (String[] args)
	{
	
		int n = 2;
		System.out.print(larrgestPalindrome(n));
	}
}

