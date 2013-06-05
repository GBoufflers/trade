#include		"common.hh"

std::string		intToString(int val)
{
  std::stringstream convert;

  convert << val;
  return (convert.str());
}
