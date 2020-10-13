#include <iostream>
#include <fstream>
#include <string>


using namespace std;



int main(int argc, char const *argv[])
{
	cout << endl;
	string const name_file = "/Users/langletmaxime/Desktop/Database Systems Architecture/Algorithms in Secondary Memory/imdb/role_type.csv";
	//ifstream file(name_file.c_str());
	fstream file;
	file.open(name_file.c_str());

	if (file)
	{

      string ligne;

      while(getline(file, ligne))
      {
         cout << ligne << endl;
      }
	}
	else{
		cout << "error opening file"<<endl;
	}
	file.close();
	cout << endl;
	return 0;
}