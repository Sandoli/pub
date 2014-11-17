#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
   vector<string> args(argv + 1, argv + argc);

   cout << "Hello, World!" << endl;
   for (auto &arg : args)
   {
      cout << arg << " ";
   }
   return 0;
}