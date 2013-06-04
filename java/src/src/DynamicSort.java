package src;

public class DynamicSort {
	
	public static int[] sort(int[] t, int maxInteger)
	{
		boolean[] temp = new boolean[maxInteger];
		for(int i=0; i<t.length; i++)
		{
			temp[t[i]] = true;
		}
		
		int count = 0;
		int[] sortedT = new int[t.length];
		for(int i=0; i<temp.length; i++)
		{
			if(temp[i] == true)
			{
				sortedT[count++] = i;
			}
		}
		
		return sortedT;
	}
	
	public static int[] sort(int[] t)
	{
		return sort(t, max(t));
	}
	
	public static int max(int [] t)
	{
		int max = t[0];
		for(int i=0; i<t.length; i++)
		{
			if(t[i] > max)
			{
				max = t[i];
			}
		}
		return max;
	}
	

}
