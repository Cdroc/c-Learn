// 1-1
/*
int main()
{
	return 0;
}
*/
// 1-2
/*
int main()
{
	return -1;
}
*/
// 1-3
/*
#include <iostream>
int main()
{
	std::cout << "Hello, World" << std::endl;
	return 0;
}
*/
// 1-4
/*
#include<iostream>
int main()
{
	int a = 0;
	int b = 0;
	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> a >> b;
	std::cout << a << "*" << b << " = " << a*b << std::endl;
	return 0;
}
*/
// 1-5
/*
#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	std::cout << "The sum of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 + v2;
	std::cout << std::endl;
	return 0;
}
*/
// 1-6
/*
#include <iostream>
int main()
{
	int v1, v2;
	std::cout << "The sum of " << v1;
	          << " and " << v2;			// ÃŒÃ­Ã‰Ãstd::cout 
	          << " is " << v1 + v2		// ÃŒÃ­Ã‰Ãstd::cout 
		      << std::endl;
	return 0;
}
*/
// 1-7
// #include <iostream>
// /*
//  * comment pairs /* */ cannot nest.
//  * "cannot nest" is considered source code,
//  * as is the rest of the program
//  */
// int main()
// {
// 	return 0;
// }
// 1-8
// #include <iostream>
// int main()
// {
// 	std::cout << "/*";
// 	std::cout << "*/";
// 	std::cout << /*"*/" */;
// 	return 0;
// }

// 1.4.1
// #include <iostream>
// int main()
// {
// 	int sum = 0, val = 1;
// 	while (val <= 10) 
// 	{
// 		sum += val;
// 		++val;
// 	}
// 	std::cout << "Sum of 1 to 10 inclusive is "
// 	          << sum << std::endl;
// 	return 0;
// }

// 1.4.2
// #include <iostream>
// int main()
// {
// 	int sum = 0;
// 	for (int val = 1; val <= 10; ++val)
// 	{
// 		sum += val;
// 	}
// 	std::cout << "Sum of 1 to 10 inclusive is "
// 	          << sum << std::endl;
// 	return 0;
// }

// 1-9
// #include <iostream>
// int main()
// {
// 	int sum = 0;
// 	for (int i = -100; i <= 100; ++i)
// 	{
// 		sum += i;
// 	}
// 	std::cout << "sum = " << sum << std::endl;
// 	return 0;
// }

// 1-10
// #include <iostream>
// int main()
// {
// 	int sum = 0, val = 50;

// 	for (int i = 50; i <= 100; ++i)
// 	{
// 		sum += i;
// 	}
// 	std::cout << sum << std::endl;

// 	sum = 0;
// 	while (val <= 100)
// 	{
// 		sum += val;
// 		++val;
// 	}
// 	std::cout << sum << std::endl;
// 	return 0;
// }

// 1-11
// #include <iostream>
// int main()
// {
// 	int val = 10;
// 	while (val >= 0)
// 	{
// 		std::cout << val << " ";
// 		--val;
// 	}
// 	std::cout << std::endl;
	
// 	for (int i = 10; i >= 0; --i)
// 	{
// 		std::cout << i << " ";
// 	}
// 	std::cout << std::endl;
// 	return 0;
// }

// 1-12
// for结构比while简便
// for适用于首尾明确的情况
// while适用于退出条件明确的情况

// 1-13

// 1.4.3
// #include <iostream>
// int main()
// {
// 	std::cout << "Enter two numbers:" << std::endl;
// 	int v1, v2;
// 	std::cin >> v1 >> v2;
// 	int lower, upper;
// 	if (v1 <= v2)
// 	{
// 		lower = v1;
// 		upper = v2;
// 	}
// 	else
// 	{
// 		lower = v2;
// 		upper = v1;
// 	}
// 	int sum = 0;
// 	for (int val = lower; val <= upper; ++val)
// 	{
// 		sum += val;
// 	}
// 	std::cout << "Sum of " << lower
// 	          << " to " << upper
// 	          << " inclusive is "
// 	          << sum << std::endl;
// 	return 0;
// }

// 1-14
// sum为输入的相等值

// 1-15
// 相符

// 1-16
// #include <iostream>
// int main()
// {
// 	int v1, v2;
// 	std::cin >> v1 >> v2;
// 	if (v1 >= v2)
// 	{
// 		std::cout << v1 << std::endl;
// 	}
// 	else
// 	{
// 		std::cout << v2 << std::endl;
// 	}
// 	return 0;
// }

// 1-17
// #include <iostream>
// int main()
// {
// 	int sum = 0, val;
// 	while (std::cin >> val) // 读入非整数时，循环结束
// 	{
// 		if (val < 0)
// 		{
// 			++sum;
// 		}
// 	}
// 	std::cout << sum << std::endl;
// 	return 0;
// }