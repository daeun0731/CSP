#include<iostream>
using namespace std;

class A
{
public:
	A(int n)
	{
		if (n <= 0) {
			throw n;
		}
		cout << "ID=" << n << ": constructed\n";
		n_ID = n;
		data = new int[n];
	}
	~A()
	{
		cout << "ID=" << n_ID << ": destroyed\n";
        if (n_ID<=0) {
            throw n_ID;
        }
		delete[] data;
        data=NULL;
	}
private:
	int* data = NULL;
	int n_ID;
};

int main() {
	try {
		A a(3);
		A b(2);
		{
			A c(1);
			A d(0);
			A e(-1);
		}
	}
	catch (int e) {
		cout << "caught in the main" << endl;
	}
	return 0;
}

