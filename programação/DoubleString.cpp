#include <iostream>
#include <string>

int Solve(std::string search, std::string part1, std::string part2){
	
	std::string TotalPhrase;
	
	TotalPhrase.append(part1); 
	TotalPhrase.append(part2); 
	
	short R1 = !(part1.length() >= search.length() || part2.length() >= search.length());
	short R2 = search == TotalPhrase;
	
	return (R1 && R2); 
}

int main ()
{
	int quanTest = 0; std::cin >> quanTest ;
	do
	{
		//Vars.
		int i = 0;
		int y = 0;
		int j = 0;
		int flag = 0;
		int height = 0; std:: cin >> height;
		std::string phrase[height];
		
		//Read
		for  (; i < height; i++){
			std::cin >> phrase[i];
		}	
		
		//solve;
		for (i = 0; i < height; i++){
			flag = 0;
			for (y = 0; y < height; y++){
				for (j = 0; j < height; j++){
					if (Solve(phrase[i], phrase[y], phrase[j])){
						std::cout << "1";
						flag = 1;
						break;
					}
				}
				if (flag) break;
			}
			if (!flag) std::cout << "0";
		}
		std::cout << std::endl;
		
	} while (--quanTest);
}
