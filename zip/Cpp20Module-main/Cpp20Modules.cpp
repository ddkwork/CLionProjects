import $safeprojectname$_Headers;

import <iostream>;
import <string>;
import <memory>;

import Hello;

auto main(int argc , char* argv[]) ->int
{
	auto hello { std::make_unique<Hello::HelloWorld> ( argc == 2 ? std::string{argv [ 1 ]} : std::string{} ) };

	std::cout << hello->Greetings ( ) << std::endl;
}
