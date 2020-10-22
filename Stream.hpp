#include <iostream>
#include <string>
#include <fstream>


using namespace std;


class InputStream
{
public:
	InputStream(string filename);
	~InputStream();
	void open();
	void readln();
	void seek_pos(int pos);
	bool end_of_stream();
	void close();

private:
	string path;
	fstream file;
	ofstream* new_file_pointer;// voir pq pas fstream
	
};
