#ifndef __STDEXT_LEXICAL_CAST__
#define __STDEXT_LEXICAL_CAST__

#include <sstream>

namespace stdext
{
   template<typename T>
   T lexical_cast(const std::string &str)
   {
      T var;
      std::istringstream iss;
      iss.str(str);
      iss >> var;
      // deal with any error bits that may have been set on the stream
      return var;
   }
}

#endif