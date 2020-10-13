#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class Output_Stream
{
public:
	Output_Stream();
	~Output_Stream();
	void writeln();
	void close();
private:
	string const path;
	
};