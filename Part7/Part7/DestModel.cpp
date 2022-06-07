#include <iostream>
#include <cstring>
using namespace std;

class Person {

private:
	char* name;
public:
	Person(const char* myname) {

		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}

	~Person() {

		cout << "ºÎ¸ð ¼Ò¸êÀÚ" << endl;
		delete[]name;
	}
	
	void Whatyourname() {

		cout << "my name is " << name << endl;
	}
};

class UnivStudent : public Person {

private:
	char* major;

public:
	UnivStudent(const char* myname, const char* mymajor) : Person(myname) {

		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}

	~UnivStudent() {

		cout << "ÀÚ½Ä ¼Ò¸êÀÚ" << endl;
		delete[] major;
	}

	void Whoareyou() {

		Whatyourname();
		cout << "my majos is " << major << endl << endl;
	}
};

int main() {

	UnivStudent univ1("Lee", "Mathematics");
	univ1.Whoareyou();
	UnivStudent univ2("Hong", "Physics");
	univ2.Whoareyou();

	return 0;
}
