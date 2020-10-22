#include <iostream>
#include <string>
#include <fstream>


using namespace std;


class OutputStream
{
public:
	OutputStream(string filename);
	~OutputStream();
	void writeln(string str, fstream &output_file);
	void close();
	void create(string name_file);

private:
	string path;
	fstream file;
};
