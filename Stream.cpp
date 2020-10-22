#include "InputStream.hpp"
#include <unistd.h>

InputStream::InputStream(string filename)
{
	path = filename;
}

InputStream::~InputStream()
{}

void InputStream::open()
{
	file.open(path.c_str());
	if(file){
	}
	else{
		cout << "Could not open file" << endl;
	}
}

void InputStream::close()
{
	file.close();
}


void InputStream::readln()//charactère par charactère, attention peut etre faut il utiliser fonction read() de unistd mais pas reussis a faire fonctionner, peut etre file.read(c,1)
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

void InputStream::seek_pos(int pos){
	file.seekg(pos);
}

bool InputStream::end_of_stream(){
	if(file.eof()){
		return true;
	}
	else{
		return false;
	}
}


