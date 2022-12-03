#include <libhello/hello.hxx>

#include <ostream>
#include <stdexcept>

namespace hello
{
  void
  say_hello (std::ostream& o, const std::string_view& n)
  {
    if (!check_hello (n))
      throw std::invalid_argument ("empty name");

    o << hello::format_hello (n) << std::endl;
  }
}
