#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

void add_height(map<string, int> &data){
	string name;
	int height = 0;
	cout << "enter the name and height to register." << endl;
	cin >> name >> height;
	data.insert(make_pair(name,height));
}

void search_height(map<string, int> data){
	string name;
  cout << "enter name to get one's height." << endl;
	cin >> name;
  auto it = data.find(name);
  if (data.begin() == data.end()) { 
	  cout << "not found." << endl;
  } else {
		cout << it->second << endl;
	}
}	

void delete_height(map<string, int> &data) {
	string name;
  cout << "enter name to delete one's height." << endl;
	cin >> name;
  auto it = data.find(name);
  if (data.begin() == data.end()) { 
  	cout << "not found." << endl;
  } else {
  	data.erase(it);
  }
  map<string, int>::iterator i;
}	
	
void average_height(map<string, int> data) {
	double sum = 0;
	map<string, int>::iterator i;
  for(i = data.begin(); i != data.end(); i++) {
	sum += (double)i->second; 	
  }	
  cout << "The average of all members = " << sum / (double)data.size() << endl;		
}

int main() {
	map<string, int> height; // sample 
  int n;
	cout << "how many data do you want to register?" << endl;
	cin >> n;
  for (int i = 0; i < n; i++) {
	  add_height(height);
	}
  search_height(height);
	cout << "how many data do you want to delate?" << endl;
	cin >> n;
  for (int i = 0; i < n; i++) {
    delete_height(height);
	}	
  average_height(height);
	
	return 0;
}

