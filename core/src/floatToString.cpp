#include		"common.hh"

std::string		floatToString(float val)
{
  std::stringstream convert;

  convert << val;
  return (convert.str());
}
