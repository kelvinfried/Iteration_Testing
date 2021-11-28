#include <iostream>

int main()
{
	/*//Print Hello world 5 times
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
	}*/
	
	//Loop that counts down from 20 to 0 in twos
	for( int x = 20; x > -2; x-=2 )
	{
		std::cout<< x << std::endl;
	}
	
	return 0;
}