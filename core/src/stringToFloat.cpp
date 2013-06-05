#include	"common.hh"

float		stringToFloat(std::string myStream)
{
  float		 value;

  std::istringstream buffer(myStream);
  buffer >> value;
  return (value);
}
