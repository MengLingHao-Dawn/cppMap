#pragma once
#include <map>
#include <iostream>
using namespace std;

class Map {
public:
	Map();
	~Map();

public:
	// ����
	void traversal();
	// ����
	void insert(string key, string value);
	// ����
	void update(string key, string value);
	
private:
	map<string, string> data;
};