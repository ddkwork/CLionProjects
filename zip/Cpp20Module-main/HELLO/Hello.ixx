export module Hello;

import $safeprojectname$_Headers;

export namespace Hello
{
	class HelloWorld
	{
	private:
		const std::string hello_ { "Hello" };
		const std::string world_ { "World" };
		const std::string space_ { " " };
		const std::string exclamation_ { "!" };
		std::string who_;
		
		HelloWorld ( ) = default;
	public:
		HelloWorld ( const std::string& input_ ) :
			who_ { input_ }
		{

		}

		std::string const Greetings ( ) noexcept
		{
			return hello_ + space_ + ( who_.empty ( ) ? world_ : who_ ) + exclamation_;
		}
	};
}