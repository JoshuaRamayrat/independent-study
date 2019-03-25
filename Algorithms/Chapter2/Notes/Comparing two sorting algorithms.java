/*
2.1
*/

public class SortCompare
{
	public static double time(String alg, Double[] a)
	{

	}

	public static double timeRandomInput(String alg, int N, int T)
	{
		double total = 0.0;
		Double[] a = new Double[N];
		for (int t = 0; t < T; t++)
		{
			for (int i = 0; i < N; i++)
				a[i] = StdRandom.uniform();
			total += time(alg, a);
		}
		return total;
	}

	public static void main(String[] args)
	{
		String alg1 = args[0];
		String alg2 = args[1];
		int N = Integer.parseInt(args[2]);
		int T = Integer.parseInt(args[3]);
		double
	}

}