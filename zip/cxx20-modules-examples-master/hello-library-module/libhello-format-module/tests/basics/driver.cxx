#include <cassert>

import <string>; // operator==

import hello.format;

int
main ()
{
  using namespace hello;

  assert (format_hello ("World") == "Hello, World!");
}
