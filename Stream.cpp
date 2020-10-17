#include "Stream.hpp"
#include <unistd.h>

Stream::Stream(string filename)
{
	path = filename;
}

Stream::~Stream()
{}

void Stream::open()
{
	file.open(path.c_str());
	if(file){
	}
	else{
		cout << "Could not open file" << endl;
	}
}

void Stream::close()
{
	file.close();
}


void Stream::readln()//charactère par charactère, attention peut etre faut il utiliser fonction read() de unistd mais pas reussis a faire fonctionner, peut etre file.read(c,1)
{
	if (file){
		string line;
		char c;
		//read(fd, (void*)&c, 1);
		while (file.get(c))
		{
			line += c;
			if (c == '\n' || c == '\r'){
				cout << line;
				line="";
			}
		}
	}
	else{
		cout << "File is not open" << endl;
	}
}

void Stream::seek_pos(int pos){
	file.seekg(pos);
}

bool Stream::end_of_stream(){
	if(file.eof()){
		return true;
	}
	else{
		return false;
	}
}

void Stream::create(string name_file)
{
	ofstream new_file(name_file.c_str());
	new_file_pointer = &new_file;
}


void Stream::writeln(string str, fstream &output_file)
{
	output_file << str << endl;
}

