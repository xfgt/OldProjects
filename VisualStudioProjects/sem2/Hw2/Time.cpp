#include <iostream>


class Time {

private:
	int minutes;
	int seconds;

public:
	Time(int mins, int secs) {

		minutes = mins;
		seconds = secs;
	}

	int getMins() const { return minutes; }
	int getSecs() const { return seconds; }


	void setMins(int mins) { this->minutes = mins; }
	void setSecs(int secs) { this->seconds = secs; }

};

std::ostream& operator<<(std::ostream& COUT, Time& obj) {
	COUT << obj.getMins() << '\n' << obj.getSecs() << std::endl;
	return COUT;
}

Time& operator-(Time& obj) {

	obj.setSecs(obj.getSecs() - 60);
	return obj;

}


int time() {

	Time t1 = Time(59, 60);


	std::cout << t1;
	-t1;
	std::cout << t1;




	return 0;
}