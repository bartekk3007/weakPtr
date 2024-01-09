#include <iostream>
#include "Base.hpp"

using namespace std;

int main()
{
	shared_ptr<Base> s1 = make_shared<Base>(10, 'k');
	weak_ptr<Base> w1 = s1;

	shared_ptr<Base> s2 = make_shared<Base>(15, 't');
	weak_ptr<Base> w2(s2);

	weak_ptr<Base> w3(w2);

	return 0;
}