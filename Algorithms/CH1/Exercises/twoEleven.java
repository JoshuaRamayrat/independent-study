//
public class TwoEleven
{
	private final int month;
	private final int day;
	private final int year;

	//should raise an exception if the date is not legal
	public SmartDate(int m, int d, int y)
	{
		if (m > 12 || 
		    m % 2 == 0 && d > 30 ||
		    m % 2 != 0 && d > 31 ||
		    m == 2 && d > 29)
		{
			StdOut.println("Invalid date entry");
		}

	}


	public Date(int m, int d, int y)
	{
		month = m;
		day = d;
		year = y;
	}

	public int month()
	{
		return month;
	}

	public int day()
	{
		return day;
	}

	public int year()
	{
		return year;
	}

	public String toString()
	{
		return month() + "/" + day()
			       + "/" + year();
	}

	public static void main(String[] args)
	{
		int m = Integer.parseInt(args[0]);
		int d = Integer.parseInt(args[1]);
		int y = Integer.parseInt(args[2]);
		Date date = new Date(m, d, y);
		StdOut.println(date);
	}
}


