#include "Timer.hpp"


int main(int argc, char* argv[])
{

	Stream stream("/Users/langletmaxime/Desktop/Database Systems Architecture/Algorithms in Secondary Memory/imdb/role_type.csv");
	stream.open();
	//stream.seek_pos(9); //test de seek_pos
{
	Timer timer;
	stream.readln();
}
/*
	if (stream.end_of_stream()){// test de end of stream
		cout << "end of stream" << endl;
	}
	*/
	stream.create("hello.txt");
	fstream hello("hello.txt");//voir si y a pas un moyen mieux mais c est deja ca 
	stream.writeln("hello", hello);
	stream.close();
	return 0;
}