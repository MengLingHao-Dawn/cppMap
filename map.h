#pragma once
#include <map>
#include <iostream>
using namespace std;

class Map {
public:
	Map();
	~Map();

public:
	// 遍历
	void traversal();
	// 插入
	void insert(string key, string value);
	// 更新
	void update(string key, string value);
	
private:
	map<string, string> data;
};