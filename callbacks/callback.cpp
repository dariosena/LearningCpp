#include <map>
#include <iostream>

typedef void (*Callback) ();

std::map<int, Callback> callbacks;

void RegisterCallback(int event, Callback callback) {
	callbacks[event] = callback;
}

bool finished = false;

int GetNextEvent () {

	static int i = 0;
	++i;

	if (i == 5) {
		finished = true;
	}

	return i;
}

void EventProcessor () {

	int event;
	while (!finished) {
		event = GetNextEvent();
		std::map<int, Callback>::const_iterator it = callbacks.find(event);

		if (it != callbacks.end()) { // if a callback is registered for a event
			Callback callback = *it->second;

			if (callback) {
				(*callback)();
			} else {
				std::cout << "No callback found!\n";
			}
		}
	}
}

void Cat () {
   std::cout << "Cat\n";
}

void Dog () {
    std::cout << "Dog\n";
}

void Bird () {
    std::cout << "Bird\n";
}

int main () {

	RegisterCallback(1, Cat);
	RegisterCallback(2, Dog);
	RegisterCallback(3, Cat);
	RegisterCallback(4, Bird);
	RegisterCallback(5, Cat);

	EventProcessor();
	return 0;
}

