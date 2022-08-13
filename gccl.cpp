#include <iostream>

int main()
{
	std::string x;
	int y = 5;
	std::cout << "welcome to command line gccl 0.1\n";
	while (true) {
		std::cout << ">>> ";
		std::cin >> x;
		if (x[0] == '/') {
			std::cout << "comment\n";
		}
		if (x[0] == 'd') {
			if (x[1] == 'i') {
				if (x[2] == 's') {
					if (x[3] == 'p') {
						if (x[4] == '"') {
							while (true)
								if (x[y] != '"') {
									std::cout << x[y];
									y++;
								}
								else
								{
									break;
								}
							std::cout << "\n";
						}
					}
				}
			}
		}
	}
}
