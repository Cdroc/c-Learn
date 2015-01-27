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
	          << " and " << v2;			// ÌíÉÏstd::cout 
	          << " is " << v1 + v2		// ÌíÉÏstd::cout 
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
