#include<iostream>
using namespace std;

class A {
public:
	A(){
		n = 0;
		cout << "(constructor called)" << endl;
	}
	A(const A& a) {
		this->n = a.n;
		cout << "(copy constructor called)" << endl;
	}
	~A() {
		cout << "(destructor called)" << endl;
	}

private:
	int n;
};

int main() {
	try {
		try {
			A a;
			throw a;
		}
		catch (A &a)
		{
            int n;
            cout << "input num(1: rethrow, 2: throw twice):";
            cin >> n;

            if (n==1){
			    cout << "rethrow" << endl;
			    throw;
            }

            else {
			    cout << "throw twice" << endl;
			    throw a;
            }
		}
	}
	catch (A &a)
	{
		cout << "exception handled" << endl;
	}

	cout << endl;
	cout << "rethrow 를 하는 경우 : 생성자 1번, 복사생성자 1번, 소멸자 2번 호출" << endl;
	cout << "throw 를 두 번 하는 경우 : 생성자 1번, 복사생성자 2번, 소멸자 3번 호출" << endl;

	return 0;
}

