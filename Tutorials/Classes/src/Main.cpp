#include<iostream>

#define print(message) std::cout << message << std::endl;

class Player
{
public:
	int x, y;
	int speed = 2;

	void move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

int main()
{
	Player player_one;
	player_one.x = 0;
	player_one.y = 1;

	player_one.move(1, 0);
	print(player_one.x);
	print(player_one.y);

	player_one.move(0, 1);
	print(player_one.x);
	print(player_one.y);

	std::cin.get();
}