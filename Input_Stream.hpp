#include <iostream>
#include <string>
#include <fstream>


using namespace std;


class Input_Stream
{
public:
	Input_Stream();
	~Input_Stream();
	void open();
	void readln();
	void seek_pos(int pos);
	bool end_of_stream();

private:
	string const path;
	
	
};
