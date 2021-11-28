#include <iostream>

int main()
{
	/*
	//Step 1
	//Print Hello world 5 times
	for( int x = 0; x < 5; x++ )	//For loop should iterate 5 times; From 0 - 4
	{
		std::cout<< "Hello world" << std::endl;	//Output statement
	}
	
	std::cout<< "" << std::endl;
	
	//Loop to print 1 to 5, by refering to the iteration index.
	for( int x = 0; x < 5; x++ )
	{
		std::cout<< ( x + 1 ) << ":Hello world" << std::endl;
	}
	
	std::cout<< "" << std::endl;
	
	//Loop to print from 5 to 1;
	for( int x = 5; x > 0; x-- )
	{
		//std::cout<< ( x + 1 ) << ":Hello world" << std::endl;	//Made a mistake here, need to ensure I do not add one.
		std::cout<< x << ":Hello world" << std::endl;
	}
	
	std::cout<< "" << std::endl;
	
	//Now that I have the general Idea down I will do the same using the iteartion without changing the for body's code
	for( int x = 4; x > -1; x-- )
	{
		std::cout<< ( x + 1 ) << ":Hello world" << std::endl;
	}
	
	//Loop that counts down from 20 to 0 in twos
	for( int x = 20; x > -2; x -= 2 )
	{
		std::cout<< x << std::endl;
	}
	
	//loop that doubles each iteration
	for( int x = 1; x < 1500; x *= 2 )	//Accidentally started it at 0 so it would not shift
	{
		std::cout<< x << std::endl;
	}*/
	
	//Step 2
	//Loop that loops 5 times, with an index vairable b counting down from 4-0; Leaving it empty for now
	int counter = 0;
	
	for( int b = 4; b > -1; b-- )
	{
		//std::cout<< b << std::endl;
		//std::cout<< counter << std::endl;
		
		for( int a = 5; a > 0; a-- )	//Now adding in another for loop that repeats 5 times
		{
			//std::cout<< a << std::endl;	//Loop testing
			std::cout<< ( counter + 1 ) << ":Hello world" << std::endl;
			
			counter += 1;
		}
	}
	
	return 0;
}