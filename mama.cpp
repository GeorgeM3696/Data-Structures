
// stoi example
#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <stdlib.h>

using namespace std;

int main ()
{
	vector<int> v;
	vector<int>::iterator it;
	for(it = v.begin(), it != v.end(); it++) {
	it->first = *(it);
}
	set<int> s(v.begin(), v.end() );
  string a = "Ana";
  string b = "Tata";
  if(a.compare(b) < 0) {
    cout << a;
  }

  return 0;
}
