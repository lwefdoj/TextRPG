export module Player;

import std;

export class Player {
public:
	Player(std::string name) {
		this->name = name;
	};
	std::string getName() { return name; }
	void setName(std::string name) { this->name = name; }
private:
	std::string name;
};