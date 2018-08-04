#include<iostream>
#include<string>


class Entity
{
public:
	// virtual creates a v-table maping to resolve the correct overriden function.
	virtual std::string GetName() { return "Entity"; }
};


class Player : public Entity
{
private:
	std::string m_Name;
public:
	// Constructor that will instantiate m_Name with the name parameter
	Player(const std::string &name) : m_Name(name) {}

	std::string GetName() override { return m_Name; }
};


void PrintName(Entity *entity)
{
	std::cout << "Hello " << entity->GetName() << std::endl;
}


int main()
{
	Entity *e = new Entity();
	PrintName(e);

	std::cout << "Enter Player Name:" << std::endl;
	std::string player_name;
	std::getline(std::cin, player_name);
	Player *p = new Player(player_name);
	PrintName(p);

	std::cin.get();
}