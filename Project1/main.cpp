#include <iostream>
#include <vector>
#include <complex>
#include <thread>
#include "lexical_cast.hpp"

using namespace std;

int printArgSum(const vector<string> &args);

int main(int argc, char *argv[])
{
   vector<string> args(argv + 1, argv + argc);

   cout << "Hello, World!" << endl;
   std::thread t(printArgSum, args);
   t.join();

   return 0;
}

int printArgSum(const vector<string> &args)
{
   int sum = 0;
   auto arg = begin(args);
   while (end(args) != arg)
   {
      cout << *arg;
      sum += stdext::lexical_cast<int>(*arg);
      ++arg;
      cout << (end(args) != arg ? " + " : " = ");
   }

   cout << sum;
   return sum;
}