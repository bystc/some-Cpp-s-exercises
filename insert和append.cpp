#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

// Exercise 9.45
string add_pre_and_suffix(string name, string const& pre, string const& su)
{
    name.insert(name.begin(), pre.cbegin(), pre.cend());
    return name.append(su);
}

int main()
{
    string name("Wang");
    cout << add_pre_and_suffix(name, "Mr.", ", Jr.") << endl;
    return 0;
}
