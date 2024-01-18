#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel{
	private:
		list <string> Videos;
		
	protected:
		int SubCount;
		string name;
		
	public:
		string getChannelName(){
			return name;
		}
		
		void create (string name1){
			name = name1;
			SubCount = 0;
		}
		
		void getInfo(){
			cout << "Nome do canal: " << name << endl << "Quantidade de Subs: " << SubCount << endl;
		}
		
};

class gammingytchannel : public YouTubeChannel{
	private: 
		list <string> PlayingGames;
	public:
		gammingytchannel(string PlayedGame){
			PlayingGames.push_back(PlayedGame);
		}
		
		void insertSub(){
			SubCount++;
		}
};

int main (){
	gammingytchannel canal("Osu");
	canal.create("Luigy");
	canal.insertSub();
	canal.getInfo();
	
}
