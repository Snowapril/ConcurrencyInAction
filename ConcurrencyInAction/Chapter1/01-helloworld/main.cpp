#include <iostream>
#include <thread>

void hello()
{
	std::cout << "Hello Concurrency In Action\n";
}

int main()
{
	std::thread t(hello);
	t.join();
	return 0;
}