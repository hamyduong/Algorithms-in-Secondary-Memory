#include <iostream>
#include <string>
#include <fstream>


using namespace std;


class Stream
{
public:
	Stream(string filename);
	~Stream();
	void open();
	void readln();
	void seek_pos(int pos);
	bool end_of_stream();
	void writeln(string str, fstream &output_file);
	void close();
	void create(string name_file);

private:
	string path;
	fstream file;
	ofstream* new_file_pointer;// voir pq pas fstream
	
};