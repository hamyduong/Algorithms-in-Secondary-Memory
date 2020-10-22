#include "OutputStream.hpp"
#include <unistd.h>

OutputStream::OutputStream(string filename)
{
	path = filename;
}

OutputStream::~OutputStream()
{}



void OutputStream::close()
{
	file.close();
}


void OutputStream::create(string name_file)
{
	ofstream new_file(name_file.c_str());
	new_file_pointer = &new_file;
}


void OutputStream::writeln(string str, fstream &output_file)
{
	output_file << str << endl;
}

