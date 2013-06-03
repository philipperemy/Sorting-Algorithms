package src;

import static org.junit.Assert.fail;

import java.util.ArrayList;
import java.util.List;

import org.junit.Test;

public class DynamicSortTest {

	@Test
	public void dynamicTest1()
	{
		List<Integer> input = new ArrayList<>();
		
		for(int i=100; i>0; i--)
		{
			input.add(2*i);
		}
		
		int[] array = IntegerListToArray(input);
		
		int[] sortedArray = DynamicSort.sort(array, 1000);
		
		boolean correctness = true;
		for(int i=0; i<99; i++)
		{
			if(sortedArray[i] > sortedArray[i+1])
			{
				correctness = false;
			}
		}
		
		if(!correctness)
		{
			fail();
		}
	}
	

	public static int[] IntegerListToArray(List<Integer> input)
	{
		int[] result = new int[input.size()];
		int count = 0;
		for(Integer inputEntry : input)
		{
			result[count++] = inputEntry;
		}
		
		return result;
	}
}
